module master_send
(
	input logic clk,
	input logic reset,
	input logic start,
	output logic done,
	spi_bus_if.master machine_mast
);

	import state_control::*;

	state_t state;

	//internal data
	static int count = 0;
	reg ready;

	//internal buffers (memory)
	/* verilator lint_off UNUSEDSIGNAL */
	logic [14:0] sr;
	/* verilator lint_on UNUSEDSIGNAL */

	//counting bit
	reg [2:0] bit_count;

	//clock division with (1/4 clock)
	logic [1:0] sck_div;

	//holding time (2 clock edge) driven by interface SCK
	always_ff @(posedge machine_mast.sck) begin
		if (count < 3) begin
			count <= count + 1;
		end
	end

	//general synchronous block
	always_ff @(posedge clk or negedge reset) begin
		if (!reset) begin
			// initialize interface signals
			machine_mast.mosi <= 0;
			machine_mast.sck <= 0;
			machine_mast.ss <= 1;
			ready <= 0;
			done <= 0;
			state <= IDLE;
		end
		else begin
			unique case (state)

				IDLE: begin
					ready <= 0;
					done <= 0;
					machine_mast.ss <= 0; // activate the slave
					machine_mast.mosi <= 0;

					if (start) state <= DECISION;
					else state <= IDLE;
				end

				DECISION: begin
					// counting clock cycle
					sck_div <= sck_div + 1;

					// clock generation
					if (sck_div == 2'd2) begin
						machine_mast.sck <= ~machine_mast.sck;
					end

					// writing data on sck edge
					if (machine_mast.sck) begin
						// shift incoming bit into the local shift register and mark ready
						sr <= {sr[13:0], machine_mast.miso};
						ready <= 1;

						if (ready) machine_mast.mosi <= sr[7];
						else state <= IDLE;
					end

					// bit counting (stabilization)
					if (bit_count == 2) begin
						state <= DONE;
                        
					end
					else begin
						bit_count <= bit_count + 1;
					end
				end

				DONE: begin
					machine_mast.ss <= 1; // deactivate slave
					machine_mast.sck <= 0;
					// present received word to the interface and load tx word
					machine_mast.data_received <= machine_mast.slave_data_received;
					sr <= machine_mast.data_to_send[15:1];
					state <= IDLE;
					done <= 1;
				end
			endcase
		end
	end

endmodule

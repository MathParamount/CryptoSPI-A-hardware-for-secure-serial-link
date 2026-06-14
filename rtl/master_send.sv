module master_send
(
	input logic clk, 
	input logic reset,
	spi_bus_if.master machine_mast
);

	import state_control::*;

	state_t state;


	//internal data
	wire start;
	static int count = 0;
	reg ready;
	
	//internal buffers (memory)
	reg [15:0] sr;
	reg [15:0] sspbuf;

	//counting bit
	reg [2:0] bit_count;


	//clock division with (1/4 clock)
	logic [1:0] sck_div;
	logic [1:0] sck_en;

	logic sck_int;

			
	//holding time (2 clock edge)
	always_ff @(posedge sck)		
	begin
		if(count < 3) begin
			start <= 0;	
			count <= count + 1;
		end
		else begin 
			start <= 1;
		end
	end

	//general syncronos block
	always_ff @(posedge clk or negedge reset) begin
		
		//shifter register
		if (reset) begin
			machine_mast.mosi <= 0;
			sck_int <= 0;
			machine_mast.ss <= 1;
			ready <= 0;
			state <= IDLE;
		end
		else begin
			unique case (state)

				IDLE:
					ready <= 0;
					sspbuf <= 0;
					machine_mast.ss <= 0;			//activate the slave
					machine_mast.mosi <= 0;
					machine_mast.miso <= 1'bz;		//high impedance
					
					if(start) state <= DECISION;
					else state <= IDLE;
				
				DECISION:
					//counting clock cycle
					sck_div <= sck_div + 1;
					
					//clock generation
					if(sck_div == 2'd2) begin
						sck_int <= ~ sck_int;
					end

					//writing data
					if(sck_int) begin
						machine_mast.sr <= {sr[15:0], machine_mast.data_received} ? ready <= 1 : ready <= 0;		//shifter register saving word

						if(ready) machine_mast.mosi <= machine_mast.sr[7];		//loading in output
						else state <= IDLE;
					end
					
					//storing data in buffer
					sspbuf <= {machine_mast.sr[15:0], machine_mast.miso};

					//bit counting (stabilization)
					if(bit_count == 2) begin
						state <= DONE;
						sck_en <= 0;
					end
					else begin
						bit_count <= bit_count + 1;
					end

				DONE:
					machine_mast.ss <= 1; 		//deactivate slave
					sck_int <= 0;
					machine_mast.data_out <= machine_mast.sr;
					state <= IDLE;

			endcase
		end
	end

	assign sck = sck_int;

endmodule

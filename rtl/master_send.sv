`timescale 1ns / 1ps  // T_SCK = 504 ns

module master_send
(
	input logic clk,
	input logic reset,
	output logic [2:0] debug_state,

    spi_bus_if.master_f spi_if
);

	import state_control::*;

	state_t state;

	//internal buffers (memory)
	/* verilator lint_off UNUSEDSIGNAL */
	logic [15:0] sr;
	logic [15:0] cmd_reg;
	logic [15:0] sr_tx, sr_rx;
	/* verilator lint_on UNUSEDSIGNAL */


	//counting bit
	logic [6:0] bit_count;
	logic [3:0] drain_count;  // DRAIN_BUFFER counter
		
	//clock division with (1/4 clock)
	logic [15:0] sck_div;
	
	localparam DIV_MAX = 20;  		// 2 µs / 20 ns = 25 cycles (0 a 49)
	localparam DIV_HALF = 10;		// 250  ms / 5 ns


	logic done_counter = 0;

	/*
	logic [3:0] block_count;
	localparam TOTAL_BLOCK = 16;		//An word of 16 bits (1 byte)
	*/

	//general synchronous block
	always_ff @(posedge clk or negedge reset) begin
		//Default attribute (reset cycle)
		if (reset) begin
			state <= IDLE;

			// initialize interface signals
			spi_if.ss <= 1;
			spi_if.mosi <= 1'b0;
			spi_if.sck <= 0;
			// initialize internal counters and buffers
			sck_div <= 0;
			bit_count <= 0;
			drain_count <= 0;
        	//block_count <= 0;
			cmd_reg <= 0;
			sr <= 0;
			sr_tx <= 0;
			sr_rx <= 0;
			spi_if.done <= 0;
		end
		
		else begin

			debug_state <= state;

			//master clock generation
			if (state != IDLE) begin
				if(sck_div == DIV_MAX) begin
					sck_div <= 0;
					spi_if.sck <= ~spi_if.sck;  // Invert SCK
				end
				else begin
					sck_div <= sck_div + 1;
				end
			end
			else  begin
				spi_if.sck <= 0;  // SCK 0 if IDLE
				sck_div <= 0;
			end
		
			//FSM architecture
			unique case (state)

				IDLE: begin
					spi_if.ss <= 1'b1; // deactivate the slave
					spi_if.mosi <= 0;
					spi_if.done <= 0;
					bit_count <= 0;
                	sck_div <= 0;

					if (spi_if.start) begin
                    	sr <= spi_if.data_to_send;  // load data			
                    	state <= CMD_PARSE;
                    end
				end

				CMD_PARSE: begin
				    spi_if.ss <= 1'b0;		//slave activation
					
					if(sck_div == DIV_HALF && !spi_if.sck) begin
						sr_rx <= {sr_rx[14:0], spi_if.miso};

						if(bit_count == 7) begin
							bit_count <= 0;
							/* verilator lint_off WIDTHEXPAND */
							cmd_reg <= sr_rx[7:0];
							/* verilator lint_off WIDTHEXPAND */

							$display("\nDEBUG (CMD_PARSE): data_to_send = 0x%04X", spi_if.data_to_send);

							//LSB verfing if odd or even
							if (cmd_reg[0] == 0) begin      // EVEN: WRITE
								sr_tx <= spi_if.data_to_send;
								state <= FILL_BUFFER;  // Write/Encrypt
							end
							else begin		// ODD: READ
								state <= DRAIN_BUFFER; // Read/Decrypt (dados prontos)
							end		
						end
						else bit_count <= bit_count + 1;
					end			
				end

				FILL_BUFFER: begin
				 	// Divisor of clock
					if (sck_div == DIV_HALF && !spi_if.sck) begin						
						// In the edge of sck
						spi_if.mosi <= sr_tx[15];			//send MSB
						sr_tx <= {sr_tx[14:0], 1'b0};
						
						sr_rx <= {sr_rx[14:0], spi_if.miso};  // full-duplex
						
						bit_count <= bit_count + 1;
						$display("DEBUG (FILL_BUFFER): bit_count=%d, sck_div=%d, sck=%d", bit_count, sck_div, spi_if.sck);

						//data block count 
						if(bit_count == 15) begin
							bit_count <= 0;
							drain_count <= 0;
							state <= DRAIN_BUFFER;
							$display("State DONE in fill_buffer", );
						end
					end
				end
				
				DRAIN_BUFFER: begin
					//if(bit_count == 0) $display("DEBUG DRAIN: INICIANDO RECEPÇÃO, bit_count=0");
					if (bit_count < 16) begin
						if(sck_div == DIV_HALF && !spi_if.sck) begin
							spi_if.mosi <= 1'b0;	//dummy
							sr_rx <= {sr_rx[14:0], spi_if.miso};
							
							drain_count <= drain_count + 1;
							
							$display("DEBUG DRAIN: drain_count=%d, miso=%d, sr_rx=0x%04X", drain_count, spi_if.miso, sr_rx);
						
						if (drain_count == 15) begin
							drain_count <= 0;
							spi_if.data_received <= sr_rx;  // store data received
							state <= DONE;
							$display("DEBUG DRAIN DONE: data_received=0x%04X", sr_rx);
							end
						end
					end
					else begin
						bit_count <= 0;
						state <= DONE;
						$display("DEBUG: bit_count fora dos limites, indo para DONE");
					end
				end
				
				DONE: begin
					spi_if.ss <= 1'b1;
					// present received word to the interface and load tx word
					spi_if.done <= 1'b1;
					bit_count <= 0;
					
					if(done_counter == 5) begin
						if(!spi_if.start) begin
							state <= IDLE;
							spi_if.done <= 1'b0;	//clean done
						end
					end
					else done_counter <= done_counter + 1;
				end

				default: state <= IDLE;

			endcase
		end
	end
	
	/*
	//manage of bit_count and block_count
	always_ff @(posedge machine_mast.sck) begin
		//  bit count
        	if (state == FILL_BUFFER || state == DRAIN_BUFFER) begin
        		if (sck && machine_mast.sck == 0) begin // Borda de subida
		        	bit_count <= bit_count + 1;
		        	sr <= {sr[126:0], machine_mast.miso}; // Shift left
		        end
            	end
            	
            	//block count
            	if (state == DRAIN_BUFFER && next_state == FILL_BUFFER)
            		block_count <= block_count + 1;
        	else if (state == IDLE)
            		block_count <= 0;
       		 end
       	end
       	*/
       	
endmodule

`timescale 1ns/1ps  // T_SCK = 500 ns

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
	logic [15:0] sr;			//buffer
	logic [15:0] cmd_reg;
	logic [15:0] sr_tx, sr_rx;
	/* verilator lint_on UNUSEDSIGNAL */


	//counting bit
	logic [6:0] bit_count;
		
	//clock division with (1/4 clock)
	logic [15:0] sck_div;
	
	logic sck_prev;       // edge detection
	
	localparam DIV_MAX = 99;  		// 100 ciclos = 1us (99 = 0-99) ; (To 199 -> 2 us/10 ns = 200 cycles)
	//localparam DIV_HALF = 49;		// (0-49 = baixo, 50-99 = alto); (To 99 -> 1 us/10 ns = 100 cycles)


	logic [2:0] done_counter = 0;

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
        	//block_count <= 0;
			cmd_reg <= 0;
			sr <= 0;
			sr_tx <= 0;
			sr_rx <= 0;
			sck_prev <= 0;
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
			
			//edge detection
			sck_prev <= spi_if.sck;
		
			//FSM architecture
			unique case (state)

				IDLE: begin
					spi_if.ss <= 1'b1; // deactivate the slave
					spi_if.mosi <= 0;
					spi_if.done <= 0;
					bit_count <= 0;
                	sck_div <= 0;
					//spi_if.miso <= 0;

					if (spi_if.start) begin
					    	sr <= spi_if.data_to_send;  // load data (buffer)
							$display("DEBUG (IDLE): sr_rx=0x%04X, debug_state=%b, buffer_sr=x%04X", sr_rx[7:0], debug_state, sr);
					    	state <= CMD_PARSE;
                    end
				end

				CMD_PARSE: begin
				    spi_if.ss <= 1'b0;		//slave activation
					
					if(spi_if.sck && !sck_prev) begin
						sr_rx <= {sr[14:0], spi_if.miso};		//from buffer to shf_reg

						if(bit_count == 7) begin
							bit_count <= 0;
							cmd_reg <= {8'b0, sr_rx[7:0]};     // future use (zero-padding)
							
							
							//LSB verfing if odd or even
							if (cmd_reg[0] == 0) begin      // EVEN: WRITE
								sr_tx <= spi_if.data_to_send;
								state <= FILL_BUFFER;  // Write/Encrypt
							end
							else begin		// ODD: READ
								state <= DRAIN_BUFFER; // Read/Decrypt
							end		
						end
						else bit_count <= bit_count + 1;
					end			
				end

				FILL_BUFFER: begin
				    //MISO sampling
				    if (spi_if.sck && !sck_prev) begin
						sr_rx <= {sr_rx[14:0], spi_if.miso};
						bit_count <= bit_count + 1;
						$display("DEBUG FILL: bit_count=%d, miso=%b, sr_rx=0x%04X", bit_count, spi_if.miso, sr_rx);
				    end

				    // negedge clock detection
				    if (!spi_if.sck && sck_prev) begin
						spi_if.mosi <= sr_tx[15];
						sr_tx <= {sr_tx[14:0], 1'b0};
				    end

				    if (bit_count == 15) begin
						state <= DONE;
				    end
				end
				
				DRAIN_BUFFER: begin
					//if(bit_count == 0) $display("DEBUG DRAIN: Starting reception, bit_count=0");
					if(spi_if.sck && !sck_prev) begin
						sr_rx <= {sr_rx[14:0], spi_if.miso};
						bit_count <= bit_count + 1;
					end
		
					// update mosi in the negedge clock
					if (!spi_if.sck && sck_prev) begin
						spi_if.mosi <= sr_tx[15];   // send next bit
						sr_tx <= {sr_tx[14:0], 1'b0};
					end
						
					if (bit_count == 15) begin
						bit_count <= 0;
						state <= DONE;
						$display("DEBUG DRAIN DONE: data_received=0x%04X", sr_rx);
					end
				end
				
				DONE: begin
					spi_if.ss <= 1'b1;
					// present received word to the interface and load tx word
					spi_if.done <= 1'b1;
					spi_if.mosi <= 1'b0;	//clean mosi
					
					spi_if.data_received <= sr_rx;

					bit_count <= 0;
					
					$display("DEBUG DONE: data_received=0x%04X bit_count=%d mosi=%b  done=%d", sr_rx, bit_count,spi_if.mosi, spi_if.done);

					if(done_counter == 0) begin
						done_counter <= 1;
					end
					else begin
						done_counter <= 0;
						spi_if.done <= 1'b0; 	//clean done

						//spi_if.data_received <= 0;

						state <= IDLE;
					end
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

`timescale 1ns/1ps  // T_SCK = 500 ns

module master_send
(
	input logic clk,
	input logic reset_n,
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
	
	localparam DIV_MAX = 99;  		// 100 cycles = 1us (99 = 0-99) ; (To 199 -> 2 us/10 ns = 200 cycles)
	//localparam DIV_HALF = 49;		// (0-49 = baixo, 50-99 = alto); (To 99 -> 1 us/10 ns = 100 cycles)

	logic ss_delay;  

	logic [2:0] done_counter = 0;
	
	//general synchronous block
	always_ff @(posedge clk or negedge reset_n) begin
		//Default attribute (reset cycle)
		if (!reset_n) begin
			// initialize interface signals
			state <= IDLE;
			spi_if.ss <= 1;
			spi_if.mosi <= 1'b0;
			spi_if.sck <= 0;
			sck_div <= 0;
			bit_count <= 0;
			cmd_reg <= 0;
			sr <= 0;
			sr_tx <= 0;
			sr_rx <= 0;
			sck_prev <= 0;
			spi_if.done <= 0;
			ss_delay <= 0;
			done_counter <= 0;
		end
		
		else begin

			debug_state <= state;

			//master clock generation
			if (state != IDLE) begin
				if(sck_div == DIV_MAX) begin
					sck_div <= 0;
					spi_if.sck <= ~spi_if.sck;  	// Invert SCK
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
					//initial conditions
					spi_if.ss <= 1'b1; 		// deactivate the slave
					spi_if.mosi <= 0;
					spi_if.done <= 0;
					bit_count <= 0;
                	sck_div <= 0;
					ss_delay <= 0;    
					sr_rx <= 0;
					//spi_if.miso <= 0;

					//kick off the initial transmition
					if (spi_if.start) begin
					    sr <= spi_if.data_to_send;  		// load data (buffer)
					    spi_if.ss <= 1'b0;			//master sending data
						$display("Pattern (Data_to_send) in binary: %b",{spi_if.data_to_send[15:1],1'b0});			// debug data to send
					    $display("DEBUG (IDLE): sr_rx=0x%04X, debug_state=%b, buffer_sr=x%04X", sr_rx[7:0], debug_state, sr);
					    state <= CMD_PARSE;
                    end
				end

				CMD_PARSE: begin	
					spi_if.ss <= 1'b0;			//master sending data (slave-slect)				
					
					if(spi_if.sck && !sck_prev) begin
						spi_if.mosi <= sr[15 - bit_count];

						// shifter-register to receive MSB first
						//sr_rx <= {spi_if.miso, sr_rx[15:1]};		//LSB first
						sr_rx <= {sr_rx[14:0], spi_if.miso};

						bit_count <= bit_count + 1;

						if(bit_count == 7) begin
							bit_count <= 8;					

							//verfing if write or read condition
							if (sr[0] == 0) begin      			// EVEN: WRITE
								// shifter-register to transmite data
								sr_tx <= spi_if.data_to_send;
								state <= FILL_BUFFER;  		// Write/Encrypt
							end
							else begin				// ODD: READ
								sr_tx <= 16'h0000;         	// dummy data
								state <= DRAIN_BUFFER; 			// Read/Decrypt
							end		
						end
					end			
				end

				FILL_BUFFER: begin

				    //MISO sampling
				    if (spi_if.sck && !sck_prev) begin

						// shifter register to receive (MSB first)
						sr_rx <= {sr_rx[14:0], spi_if.miso};

						$display("MASTER TX: bit_count=%d, mosi=%b, miso=%b, sr_rx=0x%b", bit_count, spi_if.mosi, spi_if.miso, sr_rx);

						// made the 15 displacements
						if (bit_count == 15) begin
							bit_count <= 0;
							state <= DONE;
							ss_delay <= 1'b1;
				    	end
						else begin
							bit_count <= bit_count + 1;
						end
				    end

				    // mosi update and transmition to the slaver
				    if (!spi_if.sck && sck_prev) begin
						spi_if.mosi <= sr_tx[15];
						sr_tx <= {sr_tx[14:0], 1'b0};
				    end					
				end
				
				DRAIN_BUFFER: begin
					//if(bit_count == 0) $display("DEBUG DRAIN: Starting reception, bit_count=0");

					if(spi_if.sck && !sck_prev) begin
						sr_rx <= {sr_rx[14:0], spi_if.miso};

						$display("MASTER RX: bit_count=%d, mosi=%b, miso=%b, sr_rx=0x%b", bit_count, spi_if.mosi, spi_if.miso, sr_rx);

						// made the 15 displacements
						if (bit_count == 15) begin
							bit_count <= 0;
							state <= DONE;
							ss_delay <= 1'b1;
						end
						else begin
							bit_count <= bit_count + 1;
						end
					end
		
				    // mosi update and transmition to the slaver
					if (!spi_if.sck && sck_prev) begin
						spi_if.mosi <= sr_tx[15];   // send next bit
						sr_tx <= {sr_tx[14:0], 1'b0};
					end
						
				end
				
				DONE: begin
    				case (done_counter)
						0: begin
							// final condition of the SPI(first cycle)
							spi_if.done <= 1'b1;
							spi_if.data_received <= sr_rx;					//loading the data transmitted
							spi_if.mosi <= 1'b0;
							$display("MASTER DONE: data_received=0x%04X , data_received=0x%b\n", sr_rx, sr_rx);
							spi_if.ss <= 1'b1;   // deactivation of the slaver
							done_counter <= 1;
						end
						// feedback to the start condtion of the SPI(second cycle)
						1: begin
							spi_if.done <= 1'b0;
							done_counter <= 0;
							state <= IDLE;
						end
					endcase
				end

				default: state <= IDLE;

			endcase

			// a slave select delay
			if (ss_delay) begin
        		spi_if.ss <= 1'b1;
        		ss_delay <= 0;
    		end

		end
	end
       	
endmodule

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
	logic [63:0] sr;			//buffer
	logic [63:0] cmd_reg;
	logic [63:0] sr_tx, sr_rx;
	/* verilator lint_on UNUSEDSIGNAL */


	//counting bit
	logic [6:0] bit_count;				//to blocks of 127 bits
		
	//clock division with (1/4 clock)
	logic [63:0] sck_div;
	
	logic sck_prev;       // edge detection
	
	localparam DIV_MAX = 10;  		// 100 cycles = 1us (99 = 0-99) ; (To 199 -> 2 us/10 ns = 200 cycles)
	//localparam DIV_HALF = 49;		// (0-49 = low, 50-99 = high); (To 99 -> 1 us/10 ns = 100 cycles)

	logic sck_en;

	//crypto internal signals
	logic last_block;
	logic [1:0] done_cnt;
	
	/* verilator lint_off UNDRIVEN */
	logic [15:0] block_count;
	logic [15:0] total_blocks;
	/* verilator lint_off UNDRIVEN */
	
	always_ff @(posedge clk) begin
	    	if (state == IDLE) begin
				block_count <= 0;
			end
	    	else if (spi_if.block_ready && state == EXEC_ENCRYPT && block_count < total_blocks - 1) begin
        		block_count <= block_count + 1;
				$display("block_count  value: %d", block_count);
        	end
	end
	
	always_comb begin
    		last_block = (block_count == total_blocks - 1);
	end

	//general synchronous block
	always_ff @(posedge clk or negedge reset_n) begin
		//Default attribute (reset cycle)
		if (!reset_n) begin
			state <= IDLE;
		        spi_if.block_ready <= 0;
			// initialize interface signals
			spi_if.ss <= 1;
			spi_if.mosi <= 1'b0;
			spi_if.sck <= 0;
			// initialize internal counters and buffers
			sck_div <= 0;
			bit_count <= 0;
			cmd_reg <= 0;
			sr <= 0;
			sr_tx <= 0;
			sr_rx <= 0;
			sck_prev <= 0;
			spi_if.done <= 0;
			sck_en <= 0;
			total_blocks <= 1;		//each transmission block_length
		end
		
		else begin
			debug_state <= state;

			//generating knowledge pulse
        		if (state == EXEC_ENCRYPT && spi_if.crypto_done) spi_if.crypto_ack <= 1;
			else spi_if.crypto_ack <= 0;

			if(sck_en) begin
				//master clock generation
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
					done_cnt <= 0;

					if (spi_if.start) begin
					    sr <= spi_if.data_to_send;  // load data (buffer)
					    sck_en <= 1;
						$display("[MASTER] Start transmission, data_to_send=0x%016X", spi_if.data_to_send);
					    state <= CMD_PARSE;
                   			end
				end

				CMD_PARSE: begin
				    spi_if.ss <= 1'b0;		//slave activation
					
					if(spi_if.sck && !sck_prev) begin
						spi_if.mosi <= sr[63 - bit_count];
						sr_rx <= {sr_rx[62:0], spi_if.miso_encrypted[0]};

						if(bit_count == 7) begin
							bit_count <= 0;
							cmd_reg <= {32'b0, {sr_rx[62:0], spi_if.miso_encrypted[0]}[31:0]};							
							
							$display("[MASTER] CMD_PARSE: data_to_send[0]=%b, full=0x%016X",spi_if.data_to_send[0], spi_if.data_to_send);
							
							//LSB verfing if odd or even
							//if (spi_if.data_to_send[0] == 0) begin      // EVEN: WRITE
							if (bit_count == 7) begin      // EVEN: WRITE
								sr_tx <= spi_if.data_to_send << 48;
								$display("[MASTER] WRITE: sr_tx loaded with 0x%016X", sr_tx);
								state <= FILL_BUFFER;  // Write/Encrypt
							end
							else begin		// ODD: READ
								//sr_tx <= 64'h0;			//sending zero in read
								sr_tx <= spi_if.data_to_send << 48;  // loading same data after each block
								state <= DRAIN_BUFFER; 		// Read/Decrypt
								$display("[MASTER] READ: sr_tx set to 0");
							end		
						end
						else bit_count <= bit_count + 1;
					end			
				end

				FILL_BUFFER: begin
				    spi_if.ss <= 1'b0;   		// activate slave
				    //MISO sampling
				    if (spi_if.sck && !sck_prev) begin
						sr_rx <= {sr_rx[62:0], spi_if.miso_encrypted[0]};
						bit_count <= bit_count + 1;
						//$display("DEBUG FILL: bit_count=%d, mosi=%b, miso=%b, sr_rx=0x%016X", bit_count, spi_if.mosi, spi_if.miso, sr_rx);
				    end

				    // negedge clock detection
				    if (!spi_if.sck && sck_prev) begin
						spi_if.mosi <= sr_tx[63];
						sr_tx <= {sr_tx[62:0], 1'b0};
						//$display("FILL: from mosi= 0x%016X to sr_tx= 0x%016X", spi_if.mosi, sr_tx);
				    end

				    if (bit_count == 63) begin
				    	//$display("[MASTER] achieved 63; bit_count=%0d, sck=%b, ss=%b", bit_count, spi_if.sck, spi_if.ss);
				      	spi_if.ss <= 1;
					bit_count <= 0; 
					//spi_if.done <= 1;
				    	spi_if.block_ready <= 1;
				    	$display("Master: data_send=0x%04X", sr_tx);   // debug
						state <= EXEC_ENCRYPT;
				    end
				end
				
				DRAIN_BUFFER: begin	
					//if(bit_count == 0) $display("DEBUG DRAIN: Starting reception, bit_count=0");
					if(spi_if.sck && !sck_prev) begin
						sr_rx <= {sr_rx[62:0], spi_if.miso_encrypted[0]};
						bit_count <= bit_count + 1;
					end
		
					// update mosi in the negedge clock
					if (!spi_if.sck && sck_prev) begin
						spi_if.mosi <= sr_tx[63];   // send next bit
						sr_tx <= {sr_tx[62:0], 1'b0};
					end
						
					if (bit_count == 63) begin
						sck_en <= 0;
						spi_if.block_ready <= 1;
						bit_count <= 0;
						//spi_if.done <= 1;
						state <= EXEC_ENCRYPT;
						//$display("DEBUG DRAIN DONE: data_received=0x%016X", sr_rx);
					end
				end

				EXEC_ENCRYPT: begin	
				    $display("[MASTER] EXEC_ENCRYPT: crypto_done=%b, last_block=%b", spi_if.crypto_done, last_block);
					if(spi_if.crypto_done) begin
						//spi_if.crypto_done <= 0;
						$display("CRYPTO DONE ACTIVATED: %d", spi_if.crypto_done);
						sck_en <= 0;
						if (last_block) begin
							state <= DONE;
						end
						else begin
							sr_tx <= 64'h0;
							state <= FILL_BUFFER;
							sck_en <= 1;
						end
					end
				end
				
				DONE: begin
				    $display("[MASTER] Entering DONE, done_flag=%b", done_cnt);
				    spi_if.ss <= 1'b1;
				    spi_if.mosi <= 1'b0;
				    //spi_if.miso_encrypted <= sr_rx;
				    bit_count <= 0;

				    case (done_cnt)
       					0: begin
				    		spi_if.done <= 1'b1;
				    		done_cnt <= 1;
				    		$display("  -> keeping done (cnt=0->1)");
				    		//$display("DEBUG DONE: data=0x%016X", sr_rx);
				    	end
				    	1: begin
				   		spi_if.done <= 1'b1; 		//keep done active
				    		done_cnt <= 2;
				    		$display("  -> keeping done (cnt=1->2)");
				    	end
				    	2: begin
				    		spi_if.done <= 1'b0;   		//done clean
				    		done_cnt <= 0;
				    		state <= IDLE;
				    		$display("DEBUG DONE: done cleared, going to IDLE");
				    	end
				     endcase
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

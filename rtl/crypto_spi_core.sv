`timescale 1ns/1ps

module crypto_spi_core
(
	input logic reset_n,
	output logic [2:0] debug_state_crypt,
	spi_bus_if.crypto_f crypto_if
);

	import state_control::*;
	
	//logic control states
	encrypt_state state_encr;
	state_t state_mast;
	
	//localparam TOTAL_BLOCK = 16;		//total transmission count
	
	logic [63:0] plain_text; 	// shift register SPI
	logic [63:0] slave_rx;
	logic [63:0] encrypt_text;

	//internal buffers
	
	/* verilator lint_off UNUSEDSIGNAL */
	logic [63:0] epherm_key_m;       			 // LFSR key
	logic [63:0] epherm_key_s;
	/* verilator lint_off UNUSEDSIGNAL */
	
	//logic [63:0] simon_plaintext;
	
	logic [5:0] cycle_cnt;
	logic [5:0] encypt_count;
	
	reg is_write;
	
	initial begin
	    $display("Crypto module instantiated");
	    $display("plain_text bits: %0d", $bits(plain_text));
	end
	
	//LFSR core
	always_ff @(posedge crypto_if.sck or negedge reset_n)
		if(!reset_n) begin 
			plain_text <= 64'h0;
			slave_rx <= 64'h0;
			state_encr <= IDLE_CRYPT;
			state_mast <= IDLE;
			//epherm_key_m <= 64'h0000000000000001;
			//epherm_key_s <= 64'h8000000000000000;
			epherm_key_m <= 64'h326456754ACCEEF1;
			epherm_key_s <= 64'h523456789ABCDEd2;
			crypto_if.nonce <= 64'h0000000000000001;  // initial seed
			crypto_if.crypto_done <= 0;
			cycle_cnt <= 0;
		end
		else begin
			debug_state_crypt <= state_mast;
			case(state_encr) 
				IDLE_CRYPT: begin
					crypto_if.crypto_done <= 0;
					cycle_cnt <= 0;
					
					if (crypto_if.ss == 1'b0) begin
						state_encr <= RECEPTION;
					end
				end
				
				RECEPTION: begin

					if (crypto_if.ss == 1'b0) begin  		// only amostrate if active
						plain_text <= {plain_text[62:0], crypto_if.mosi};      // come from master
						slave_rx   <= {slave_rx[62:0], crypto_if.miso};       // come from slaver
						cycle_cnt <= cycle_cnt + 1;
						
						if(cycle_cnt == 7) is_write <= ~plain_text[0];
						
						if(cycle_cnt == 63) begin
							state_encr <= ENCRYPT;
						end
					end
				end
				ENCRYPT: begin
					//1 keystream by cycle
					plain_text <= {plain_text[62:0], plain_text[63] ^ plain_text[43] ^ plain_text[33] ^ plain_text[22] ^ plain_text[11] ^ plain_text[0]};
					slave_rx <= {slave_rx[62:0], slave_rx[63] ^ slave_rx[43] ^ slave_rx[33] ^ slave_rx[22] ^ slave_rx[11] ^ slave_rx[0]};
					
					//accumulation and key join (serial transmission)
					epherm_key_m <= {epherm_key_m[62:0], plain_text[63] ^ plain_text[62] ^ plain_text[55] ^ plain_text[22] ^ plain_text[11] ^ plain_text[0]};
					epherm_key_s <= {epherm_key_s[62:0], slave_rx[63] ^ slave_rx[62] ^ slave_rx[55] ^ slave_rx[22] ^ slave_rx[11] ^ slave_rx[0]};
					
					if(is_write) encrypt_text <= plain_text ^ epherm_key_m;		//write
					else encrypt_text <= slave_rx ^ epherm_key_s;			//read
					
					$display("\t CRYPTO DONE: data storaged = 0x%016X\n", encrypt_text); 					
					$display("[CRYPTO] ENCRYPT: setting crypto_done=1");

					crypto_if.crypto_done <= 1;
										
					encypt_count <= encypt_count + 1;
					
					if(encypt_count == 63) begin
						cycle_cnt <= 0;
						state_encr <= TRANSMISSION;
					end
				end
				
				TRANSMISSION: begin
					//come from master
					crypto_if.mosi_encrypted <= {63'b0, encrypt_text[63 - cycle_cnt]};
					
					//come from slaver
					crypto_if.miso_encrypted <= {63'b0, encrypt_text[63 - cycle_cnt]};
					
					$display("[CRYPTO] send bit[%0d]=%b to MASTER (data=0x%016X)", cycle_cnt, encrypt_text[63 - cycle_cnt], encrypt_text);
		   			
		   			cycle_cnt <= cycle_cnt + 1;
		   			
		   			if(cycle_cnt == 63) begin
		   				cycle_cnt <= 0;
		   				state_encr <= DONE_CRYPT;
		   				crypto_if.crypto_done <= 0;
		   			end
				end
				
				DONE_CRYPT: begin
					crypto_if.crypto_done <= 1;
					
					if (crypto_if.ss == 1'b1) begin
						$display("\t CRYPTO DONE: data storaged = 0x%016X \n", encrypt_text);
                    				crypto_if.crypto_done <= 0;
                   			 	state_encr <= IDLE_CRYPT;
                			end
				end	
		
		    		default: state_encr <= IDLE_CRYPT;
			endcase
		
	     	end
	   
	//SIMON

endmodule

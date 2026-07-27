`timescale 1ns/1ps

module crypto_spi_core
(
	input logic reset_n,
	spi_bus_if.crypto_f crypto_if
);

	import state_control::*;
	state_t state;
	
	//localparam TOTAL_BLOCK = 16;		//total transmission count
	
	logic [63:0] plain_text; 	// shift register SPI
	logic [63:0] lfsr_cipher;

	//internal buffers
	
	/* verilator lint_off UNUSEDSIGNAL */
	logic [63:0] epherm_key;       			 // LFSR key
	/* verilator lint_off UNUSEDSIGNAL */
	
	//logic [63:0] simon_plaintext;
	
	logic [5:0] cycle_cnt;
	
	initial begin
	    $display("Crypto module instantiated");
	    $display("plain_text bits: %0d", $bits(plain_text));
	    $display("lfsr_cipher bits: %0d", $bits(lfsr_cipher));
	end
	
	//LFSR core
	always_ff @(posedge crypto_if.sck or negedge reset_n)
		if(!reset_n) begin
			lfsr_cipher <= 64'h0;		// default cipher text 
			plain_text <= 64'h0;
			state <= IDLE;
			epherm_key <= 64'h0;
			crypto_if.nonce <= 64'h0000000000000001;  // initial seed
			crypto_if.crypto_done <= 0;
			cycle_cnt <= 0;
		end
		else begin
			case(state) 
				IDLE: begin
					if (crypto_if.ss == 1'b0) begin
							cycle_cnt <= 0;
							plain_text <= {plain_text[62:0], crypto_if.mosi};
							state <= EXEC_ENCRYPT;
					end
				end
				
				EXEC_ENCRYPT: begin
					//1 keystream by cycle
					plain_text <= {plain_text[62:0], plain_text[63] ^ plain_text[43] ^ plain_text[33] ^ plain_text[22] ^ plain_text[11] ^ plain_text[0]};
							
					//accumulation and key join (serial transmission)
					epherm_key <= {epherm_key[62:0], plain_text[63] ^ plain_text[62] ^ plain_text[55] ^ plain_text[22] ^ plain_text[11] ^ plain_text[0]};
					
					$display("plain_text: 0x%04X , epherem_key: 0x%04X", plain_text, epherm_key);
					
					cycle_cnt <= cycle_cnt + 1;
							
					if(cycle_cnt == 9) begin
						crypto_if.crypto_done <= 1;
						lfsr_cipher <= epherm_key;  	// load result
						$display("CRYPTO DONE: data storaged = 0x%016X", lfsr_cipher);
					end
		    		end
		
		    		default: state <= IDLE;
			endcase
		
	     end

	always_comb begin
	   	// defaults
		crypto_if.mosi_encrypted = 64'h0;
		crypto_if.miso_encrypted = 64'h0;
			
	   	if(crypto_if.crypto_done) begin
			if(crypto_if.ss) begin
		   		crypto_if.miso_encrypted = plain_text ^ lfsr_cipher;
		   		//$display("send: 0x%04X to master", crypto_if.miso_encrypted);
	   		end
		   	else begin
		   		crypto_if.mosi_encrypted = plain_text ^ lfsr_cipher;
		   		//$display("send: 0x%04X to slaver", crypto_if.mosi_encrypted);
		   	end
	   		
			//$display("lfsr_cipher generated: 0x%04X, plain_text: 0x%04X", lfsr_cipher, plain_text);
		end
	end
	   
	//SIMON

endmodule

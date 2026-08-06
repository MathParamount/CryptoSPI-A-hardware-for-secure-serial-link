`timescale 1ns/1ps

module crypto_spi_core
(
	input logic clk,
	input logic reset_n,
	output logic [2:0] debug_state_crypt,
	spi_bus_if.crypto_f crypto_if
);

	import state_control::*;
	
	//logic control states
	encrypt_state state_encr;		//crypto core
	state_t state_mast;			////spi core
	
	logic [63:0] plain_text; 	// shift register SPI
	logic [63:0] slave_rx;

	//internal buffers
	logic [63:0] lfsr_m;
	logic [63:0] lfsr_s;
	
	/* verilator lint_off UNUSEDSIGNAL */
	logic [63:0] epherm_key_m;       			 // LFSR key
	logic [63:0] epherm_key_s;
	/* verilator lint_off UNUSEDSIGNAL */
	
	logic [5:0] cycle_cnt;
	logic [5:0] encypt_count, dencypt_count;
	
	reg is_write;
	
	// internal logic separation of bus
	logic [63:0] encrypt_text_reg;			//output from LFSR
	
	//simon buffers
	logic [31:0] rol2,rol8,rol1, f_x;
	logic [31:0] ys, xs, x_new, y, x;
	logic [63:0] ciphertext;		//simon output
	logic [31:0] round_key [0:41];		// expanded key 42 words of 32 bits
	logic [127:0] key;

	//simon temporal variable
	logic [31:0] temp;
	logic [5:0] count_round;
	
	//Simon 64 constant
	localparam [41:0] Z = 42'b11011011001001101101101100100110110110110;
	
	logic [63:0] Post_SMplaintext;
	logic decrpt_signal;			//signal control to behavior
	
	assign crypto_if.encrypt_text = encrypt_text_reg;
	assign crypto_if.ciphertext = ciphertext;
		
	initial begin
	    $display("Crypto module instantiated");
	    $display("plain_text bits: %0d", $bits(plain_text));
	end
	
	//LFSR core
	always_ff @(posedge clk or negedge reset_n) begin
		if(!reset_n) begin 
			plain_text <= 64'h0;
			slave_rx <= 64'h0;
			state_encr <= IDLE_CRYPT;
			state_mast <= IDLE;
			//lfsr_m <= 64'h326456754ACCEEF1;			// LFSR seed Master -> Slave
			//lfsr_s <= 64'h523456789ABCDEd2;			// LFSR seed Slave -> Master
			//$display("[CRYPTO] lfsr_m initialization  = 0x%016X", lfsr_m);		//debug
			crypto_if.crypto_done <= 0;
			cycle_cnt <= 0;
			lfsr_m <= 64'h0000000000000001;   // LFSR seed Master -> Slave
    		lfsr_s <= 64'h8000000000000000;	  // LFSR seed Slave -> Master
    		ciphertext <= 64'h0;

			round_key <= '{42{32'h0}};        // 42 repetitions of 32'h0
			temp <= 32'h0;
		end
		else begin
			debug_state_crypt <= state_mast;
			
			case(state_encr) 
				IDLE_CRYPT: begin
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
							$display("[RECEPTION] is_write: %d, plain_text: 0x%016X, slaver_rx: 0x%016X, encrypt_text_reg: 0x%016X", is_write, plain_text,slave_rx, encrypt_text_reg);
						    cycle_cnt <= 0;

							if (is_write) begin 
								state_encr <= ENCRYPT;
								decrpt_signal <= 0;
							end
							else begin 
								state_encr <= DECRYPT;
								decrpt_signal <= 1;
							end
						end
					end
				end

				ENCRYPT: begin
					//1 keystream by cycle
					lfsr_m <= {lfsr_m[62:0], lfsr_m[63] ^ lfsr_m[43] ^ lfsr_m[33] ^ lfsr_m[22] ^ lfsr_m[10] ^ lfsr_m[1]};
					lfsr_s <= {lfsr_s[62:0], lfsr_s[63] ^ lfsr_s[43] ^ lfsr_s[33] ^ lfsr_s[22] ^ lfsr_s[10] ^ lfsr_s[1]};

					encypt_count <= encypt_count + 1;
					
					if( encypt_count == 63) begin
						encypt_count <= 0;
						//$display("[ENCRYPT] is_write: %d, plain_text: 0x%016X, lfsr_m: 0x%016X, lfsr_s: 0x%016X", is_write, plain_text, lfsr_m, lfsr_s);
						
						// calculate the cryptographic data
						if(is_write) begin
							encrypt_text_reg <= plain_text ^ lfsr_m;		//write
						end
						else begin 
							encrypt_text_reg <= slave_rx ^ lfsr_s;			//read
						end
						
						//crypto_if.crypto_done <= 1;
					
						state_encr <= SIMON_ENCRYPT;
					end
				end
				
				SIMON_ENCRYPT: begin
					// round key generator
					//key <= {lfsr_m,lfsr_s};
					$display("[SIMON] count_round=%d, xs=0x%08X, ys=0x%08X", count_round, xs, ys);
					
					//initialization
					round_key[0] <= lfsr_m[31:0];		//m=1, fisrt word
					round_key[1] <= lfsr_m[63:32];		//m=2, second word
					round_key[2] <= lfsr_m[31:0];		//m=3, third word or ([95:64];)
					
					ys <= {encrypt_text_reg[63:32]};    	//high
					xs <= {encrypt_text_reg[31:0]};	    	//low
					
					count_round <= 0;
					
					//key rotation and bit displacement   &&  key generation
					for (int i = 2; i < 42; i++) begin						
						temp <= {round_key[i-1][2:0], round_key[i-1][31:3]};		//rotation (ROR S^-3)
						
						if(i % 2 == 0) temp <= temp ^ {round_key[i-1][3:0], round_key[i-1][31:4]};
						
						/* verilator lint_off BLKSEQ */
						round_key[i] <= round_key[i-2] ^ temp ^ {31'b0, Z[i-2]};	// subkey of 2 rounds ago
						/* verilator lint_off BLKSEQ */
					end
					
					//encription
					if(count_round < 42) begin						
						//mixing bits and round function fundation
						rol1 <= {xs[30:0] , xs[31]};

						rol8 <= {xs[27:0], xs[31:28]};	

						rol2 <= {xs[29:0], xs[31:30]};
						
						// new value at the left
						x_new <= ys ^ (rol1 & rol8) ^ rol2 ^ round_key[count_round];
						
						$display("x_new_size: %d", $bits(x_new));
						
						xs <= ys;
						ys <= x_new;
						count_round <= count_round + 1;
					end
					else begin
						count_round <= 0;
						ciphertext <= {ys, xs};		// result
						count_round <= count_round + 1;
						
						$display("[SIMON] Final: ciphertext: 0x%016X , ciphertext_size: %d", ciphertext, $bits(ciphertext));
						
						state_encr <= TRANSMISSION;
					end
							
				end
				
				DECRYPT: begin
					//simon decriptography
					y <= ciphertext[63:32];		//high
					x <= ciphertext[31:0];		//low
					
					for( int k = 41; k <= 0; k--) begin
						rol1 <= {y[30:0] , y[31]};
						rol8 <= {y[27:0], y[31:28]};	
						rol2 <= {y[29:0], y[31:30]};
						
						f_x <= x ^ (rol1 & rol8) ^ rol2 ^ round_key[k];
						
						x <= y;
						y <= f_x;
					end
					
					Post_SMplaintext <= {y,x};	// decripted output
					
					//$display("\nPost simon decription: 0x%016X", Post_SMplaintext);
					
					//LFSR decription
					if(is_write) crypto_if.plaintext <= Post_SMplaintext ^ lfsr_m;
					else crypto_if.plaintext <= Post_SMplaintext ^ lfsr_s;
						
					$display("\nPlaintext from master: 0x%016X",crypto_if.plaintext);	
					state_encr <= TRANSMISSION;					
				end

				TRANSMISSION: begin
					
					if (is_write) begin
						//come from master
						if(decrpt_signal == 1'b0) begin
							crypto_if.mosi_encrypted <= {63'b0, ciphertext[63 - cycle_cnt]};
							crypto_if.miso_encrypted <= 64'h0;
						end
						else begin
							crypto_if.mosi_encrypted <= {63'b0, crypto_if.plaintext[63 - cycle_cnt]};
							crypto_if.miso_encrypted <= 64'h0;
						end
					end
					else begin
						//come from slaver
						if(decrpt_signal == 1'b0) begin
							crypto_if.miso_encrypted <= {63'b0, ciphertext[63 - cycle_cnt]};
							crypto_if.mosi_encrypted <= 64'h0;
						end
						else begin
							crypto_if.miso_encrypted <= {63'b0, crypto_if.plaintext[63 - cycle_cnt]};
							crypto_if.mosi_encrypted <= 64'h0;
						end
					end
					
					$display("[CRYPTO] send bit[%0d]=%b to MASTER (data=0x%016X)", cycle_cnt, ciphertext[63 - cycle_cnt], ciphertext);
			   			
			   		cycle_cnt <= cycle_cnt + 1;
		   			
		   			if(cycle_cnt == 63) begin
		   				crypto_if.crypto_done <= 1;
		   				cycle_cnt <= 0;
		   				state_encr <= DONE_CRYPT;
		   			end
				end
				
				DONE_CRYPT: begin 					
					if (crypto_if.crypto_ack) begin
						crypto_if.crypto_done <= 1'b0;
						state_encr <= IDLE_CRYPT;                		
					end
				end	
		
		    	default: state_encr <= IDLE_CRYPT;
			endcase
		
	     	end
	end

endmodule

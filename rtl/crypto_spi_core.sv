`timescale 1ns/1ps

module crypto_spi_core
(
	input logic clk,
	input logic reset_n,
	output logic [2:0] debug_state_crypt,
	spi_bus_if.crypto_f spi_if
);

	import state_control::*;
	
	//logic control states
	encrypt_state state_encr;		//crypto core
	state_t state_mast;			////spi core
	
	logic [63:0] slave_rx;

	//internal buffers
	logic [63:0] lfsr_m;
	logic [63:0] lfsr_s;
	
	/* verilator lint_off UNUSEDSIGNAL */
	logic [63:0] epherm_key_m;       			 // LFSR key
	logic [63:0] epherm_key_s;
	/* verilator lint_off UNUSEDSIGNAL */
	
	logic [5:0] cycle_cnt;
	logic [5:0] encypt_count;
		
	// internal logic separation of bus
	logic [63:0] encrypt_text_reg;			//output from LFSR
	
	//simon buffers
	logic [31:0] rol2,rol8,rol1, f_x;
	logic [31:0] ys, xs, x_new, y, x;
	logic [31:0] round_key [0:41];		// expanded key 42 words of 32 bits
	logic [127:0] key;

	//simon temporal variable
	logic [31:0] temp;
	logic [5:0] count_round;
	
	//Simon 64 constant
	localparam [41:0] Z = 42'b11011011001001101101101100100110110110110;
	
	logic [63:0] Post_SMplaintext;
	logic decrpt_signal;			//signal control to behavior
	
	logic sck_prev;
	
	assign spi_if.encrypt_text = encrypt_text_reg;
		
	initial begin
	    $display("Crypto module instantiated");
	    $display("plain_text bits: %0d", $bits(spi_if.plaintext));
	end
	
	//LFSR core
	always_ff @(posedge clk or negedge reset_n) begin
		if(!reset_n) begin 
			spi_if.plaintext <= 64'h0;
			slave_rx <= 64'h0;
			state_encr <= IDLE_CRYPT;
			state_mast <= IDLE;
			//lfsr_m <= 64'h326456754ACCEEF1;			// LFSR seed Master -> Slave
			//lfsr_s <= 64'h523456789ABCDEd2;			// LFSR seed Slave -> Master
			//$display("[CRYPTO] lfsr_m initialization  = 0x%016X", lfsr_m);		//debug
			spi_if.crypto_done <= 0;
			cycle_cnt <= 0;
			lfsr_m <= 64'h0000000000000001;   // LFSR seed Master -> Slave
    		lfsr_s <= 64'h8000000000000000;	  // LFSR seed Slave -> Master
    		spi_if.ciphertext <= 64'h0;
			
			round_key <= '{42{32'h0}};        // 42 repetitions of 32'h0
			temp <= 32'h0;
			sck_prev <= 1'b0;
		end
		else begin
			debug_state_crypt <= state_mast;
			sck_prev <= spi_if.sck;
			
			case(state_encr) 
				IDLE_CRYPT: begin
					cycle_cnt <= 0;
					
					if (spi_if.ss == 1'b0) begin
						state_encr <= RECEPTION;
					end
				end
				
				RECEPTION: begin

					if (spi_if.ss == 1'b0) begin  		// only amostrate if active
						if (spi_if.sck && !sck_prev) begin
							spi_if.plaintext <= {spi_if.plaintext[62:0], spi_if.mosi};      // come from master
							slave_rx   <= {slave_rx[62:0], spi_if.miso};       // come from slaver
							cycle_cnt <= cycle_cnt + 1;
						end
						
						//order transmission
						//spi_if.is_write <= ~spi_if.plaintext[0];
						
						if(cycle_cnt == 63) begin
							$display("[CRYPTO RECEPTION] is_write: %d, plain_text: 0x%016X, slaver_rx: 0x%016X, encrypt_text_reg: 0x%016X", spi_if.is_write, spi_if.plaintext, slave_rx, encrypt_text_reg);
							
						    cycle_cnt <= 0;
    						if (spi_if.is_write) begin
								state_encr <= ENCRYPT;		//write
								decrpt_signal <= 0;
							end
							else begin
								state_encr <= DECRYPT;		//read
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
						if(spi_if.is_write) begin
							encrypt_text_reg <= spi_if.plaintext ^ lfsr_m;		//write
						end
						else begin 
							encrypt_text_reg <= slave_rx ^ lfsr_s;			//read
						end
						
						$display("[ENCRYPT] encrypt_text_reg = 0x%016X", encrypt_text_reg);
						//crypto_if.crypto_done <= 1;
					
						state_encr <= SIMON_ENCRYPT;
					end
				end
				
				SIMON_ENCRYPT: begin
					// round key generator
					//key <= {lfsr_m,lfsr_s};
					
					if (count_round == 0) begin
						//initialization
						round_key[0] <= lfsr_m[31:0];		//m=1, fisrt word
						round_key[1] <= lfsr_m[63:32];		//m=2, second word
						round_key[2] <= lfsr_m[31:0];		//m=3, third word or ([95:64];)
						
						ys <= {encrypt_text_reg[63:32]};    	//high
						xs <= {encrypt_text_reg[31:0]};	    	//low
						count_round <= count_round + 1;
					end
					
					$display("[SIMON] count_round=%d, xs=0x%08X, ys=0x%08X", count_round, xs, ys);
					
					if(count_round < 42) begin						
						logic [5:0] idx = count_round;	//subkey iteration
							
						//key rotation and bit displacement   &&  key generation
						temp <= {round_key[idx-1][2:0], round_key[idx-1][31:3]};		//rotation (ROR S^-3)
								
						if((idx + 1) % 2 == 0) temp <= temp ^ {round_key[idx-1][3:0], round_key[idx-1][31:4]};
								
						/* verilator lint_off BLKSEQ */
						round_key[idx + 1] <= round_key[idx-1] ^ temp ^ {31'b0, Z[idx-1]};	// subkey of 2 rounds ago
						/* verilator lint_off BLKSEQ */
						
						count_round <= count_round + 1;
					end
					
					//encription

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
					
					if( count_round == 42) begin
						spi_if.ciphertext <= {ys, xs};		// result
													
						$display("[SIMON] Final: ciphertext: 0x%016X , ciphertext_size: %d", spi_if.ciphertext, $bits(spi_if.ciphertext));
						count_round <= 0;
						state_encr <= TRANSMISSION;
					end
				end
				
				DECRYPT: begin
					//simon decriptography
					if (count_round == 0) begin
						y <= slave_rx[63:32];		//high
						x <= slave_rx[31:0];		//low
					end
					else if (count_round < 42) begin
						/* verilator lint_off WIDTHEXPAND */
						integer r = 42 - count_round;
						/* verilator lint_off WIDTHEXPAND */
						
						rol1 <= {y[30:0] , y[31]};
						rol8 <= {y[27:0], y[31:28]};	
						rol2 <= {y[29:0], y[31:30]};
						
						f_x <= x ^ (rol1 & rol8) ^ rol2 ^ round_key[r];
						
						x <= y;
						y <= f_x;
						
						count_round <= count_round + 1;
					end
						
					Post_SMplaintext <= {y,x};	// decripted SIMON output
					
					$display("\n[CRYPTO DECRYPT] Post simon decription: 0x%016X", Post_SMplaintext);
					
					//LFSR decription
					if(spi_if.is_write) spi_if.plaintext <= Post_SMplaintext ^ lfsr_m;		//write
					else spi_if.plaintext <= Post_SMplaintext ^ lfsr_s;		//read
								
					$display("\n[CRYPTO DECRYPT] Plaintext from master: 0x%016X",spi_if.plaintext);	
					state_encr <= TRANSMISSION;
				end

				TRANSMISSION: begin
					
					if (spi_if.is_write) begin
						//come from master
						if(decrpt_signal == 1'b0) begin
							spi_if.mosi_encrypted <= spi_if.ciphertext[63 - cycle_cnt];
							spi_if.miso_encrypted <= 1'b0;
						end
						else begin
							spi_if.mosi_encrypted <= spi_if.plaintext[63 - cycle_cnt];
							spi_if.miso_encrypted <= 1'b0;
						end
						
						$display("[TRANSMISSION]: mosi_encrypted: %d", spi_if.mosi_encrypted);
					end
					else begin
						//come from slaver
						if(decrpt_signal == 1'b0) begin
							spi_if.miso_encrypted <= spi_if.ciphertext[63 - cycle_cnt];
							spi_if.mosi_encrypted <= 1'b0;
							$display("[CRYPTO_NON_DECRYP] send bit[%0d]= %b", cycle_cnt, spi_if.ciphertext[63 - cycle_cnt]);
						end
						else begin
							spi_if.miso_encrypted <= spi_if.plaintext[63 - cycle_cnt];
							spi_if.mosi_encrypted <= 1'b0;
							$display("[CRYPTO_DECRYP] send bit[%0d]= %b", cycle_cnt, spi_if.ciphertext[63 - cycle_cnt]);
						end
					end
			   			
			   		cycle_cnt <= cycle_cnt + 1;
		   			
		   			if(cycle_cnt == 63) begin
		   				$display("(data encrypted = 0x%016h)", spi_if.ciphertext);
		   				spi_if.crypto_done <= 1;
		   				cycle_cnt <= 0;
		   				state_encr <= DONE_CRYPT;
		   			end
				end
				
				DONE_CRYPT: begin 					
					if (spi_if.crypto_ack) begin
						spi_if.crypto_done <= 1'b0;
						state_encr <= IDLE_CRYPT;                		
					end
				end	
		
		    	default: state_encr <= IDLE_CRYPT;
			endcase
		
	     	end
	end

endmodule

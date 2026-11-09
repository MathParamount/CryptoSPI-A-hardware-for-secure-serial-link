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

	// buffers to avoid shifts
	logic [63:0] lfsr_m_key;
	logic [31:0] lfsr_s_key;
	
	/* verilator lint_off UNUSEDSIGNAL */
	logic [63:0] epherm_key_m;       			 // LFSR key
	logic [63:0] epherm_key_s;
	/* verilator lint_off UNUSEDSIGNAL */
	
	logic [6:0] cycle_cnt;
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
	localparam [41:0] Z = 42'b101011110111000000110100100110001010000100;	
	
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
			//spi_if.plaintext <= 64'h0;
			slave_rx <= 64'h0;
			state_encr <= IDLE_CRYPT;
			state_mast <= IDLE;
			//$display("[CRYPTO] lfsr_m initialization  = 0x%016X", lfsr_m);		//debug
			spi_if.crypto_done <= 0;
			cycle_cnt <= 0;
			//lfsr_m <= 64'h0000000000000001; 
    		//lfsr_s <= 64'h8000000000000000;	
			lfsr_m <= 64'hA5A5A5A5A5A5A5A5;   // LFSR seed Master -> Slave
			lfsr_s <= 64'h5A5A5A5A5A5A5A5A;   // LFSR seed Slave -> Master
    		//spi_if.ciphertext <= 64'h0;
			spi_if.mosi_encrypted <= 0;
			spi_if.miso_encrypted <= 0;
			round_key <= '{42{32'h0}};        // 42 repetitions of 32'h0
			sck_prev <= 1'b0;
			cycle_cnt <= 7'h0;
			encypt_count <= 6'h0;
			count_round <= 0;
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
							$display("[CRYPTO RX] cycle_cnt=%0d, mosi=%b, sck_prev=%b", cycle_cnt, spi_if.mosi, sck_prev);
							spi_if.plaintext <= {spi_if.plaintext[62:0], spi_if.mosi};      // come from master
							slave_rx  <= {slave_rx[62:0], spi_if.miso};       // come from slaver
							cycle_cnt <= cycle_cnt + 1;
						end
					end
						
						//order transmission
						//spi_if.is_write <= ~spi_if.plaintext[0];
					if(cycle_cnt == 64) begin
						cycle_cnt <= 0;
						$display("\t [CRYPTO RECEPTION] is_write: %d, plain_text: 0x%016X, slaver_rx: 0x%016X", spi_if.is_write, spi_if.plaintext, slave_rx);
						//$display("[CRYPTO RECEPTION] is_write: %d, plain_text: %b, slaver_rx: %b, encrypt_text_reg: %b", spi_if.is_write, spi_if.plaintext, slave_rx, encrypt_text_reg);

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

				ENCRYPT: begin
					logic [63:0] enc_temp;

					//1 keystream by cycle
					lfsr_m <= {lfsr_m[62:0], lfsr_m[63] ^ lfsr_m[3] ^ lfsr_m[2] ^ lfsr_m[1]};
					lfsr_s <= {lfsr_s[62:0], lfsr_s[63] ^ lfsr_s[3] ^ lfsr_s[2] ^ lfsr_s[1]};		

					encypt_count <= encypt_count + 1;
					
					if( encypt_count == 63) begin
						encypt_count <= 0;
						//$display("[ENCRYPT] is_write: %d, plain_text: 0x%016X, lfsr_m: 0x%016X, lfsr_s: 0x%016X", is_write, plain_text, lfsr_m, lfsr_s);
						
						lfsr_m_key <= lfsr_m;
						lfsr_s_key <= lfsr_s[31:0];

						// calculate the cryptographic data
						if (spi_if.is_write) begin
							enc_temp = spi_if.plaintext ^ lfsr_m;   // immediate calcule (blocking)
							encrypt_text_reg <= enc_temp;
							//$display("\t lfsr_m: 0x%016X", lfsr_m);
							//$display("\t lfsr_s= 0x%016X",lfsr_s);
							$display("\t [ENCRYPT_WRITE] plaintext=0x%016X	 | 	simon_input(LFSR)= 0x%016X", spi_if.plaintext, enc_temp);
						end
						else begin 
							encrypt_text_reg <= slave_rx ^ lfsr_s;			//read
							encrypt_text_reg <= enc_temp;
							//$display("\t lfsr_s=0x%016X",lfsr_s);
    						$display("\t [ENCRYPT_WRITE] plaintext=0x%016X	 | 	simon_input(LFSR)= 0x%016X", lfsr_s, enc_temp);
						end
								
						state_encr <= SIMON_ENCRYPT;
					end
				end
				
				SIMON_ENCRYPT: begin
					// round key generator
					//key <= {lfsr_m,lfsr_s};
					if (count_round == 0) begin
						round_key[0] <= lfsr_m_key[31:0];
						round_key[1] <= lfsr_m_key[63:32];
						round_key[2] <= lfsr_s_key[31:0];
						xs <= encrypt_text_reg[31:0];
						ys <= encrypt_text_reg[63:32];
						count_round <= 1;
					end
					else if (count_round < 43) begin
						// subkey generation
						if (count_round >= 3 && count_round < 42) begin
							round_key[count_round] <= 32'hFFFFFFFC ^ {31'b0, Z[44-count_round]} ^ round_key[count_round-3] ^ temp;
							//round_key[count_round] <= 32'hFFFFFFFC ^ {31'b0, Z[count_round-3]} ^ round_key[count_round-3] ^ temp;
						end

						// updating register to the next round
						ys <= xs;
						xs <= x_new; 

						count_round <= count_round + 1;

						$display("Verilog - round %0d: key = 0x%08X", count_round-1, round_key[count_round-1]);
					end 
					
					if (count_round == 42) begin
						spi_if.ciphertext <= {x_new, xs};
						$display("[SIMON] Final: ciphertext=0x%016X", {x_new, xs});
						count_round <= 0;
						spi_if.crypto_done <= 1;
						state_encr <= TRANSMISSION;
					end else begin
						count_round <= count_round + 1;
					end
				end
				
				DECRYPT: begin
					//simon decriptography
					if (count_round == 0) begin
						y <= slave_rx[63:32];		//high
						x <= slave_rx[31:0];		//low

						$display("\n[INPUT DECRYP] received data inside of slaver_rx buffer: 0x%016X", slave_rx);
						count_round <= 1;
					end
					else if (count_round < 43) begin
						/* verilator lint_off WIDTHEXPAND */
						integer r = 42 - count_round;
						/* verilator lint_off WIDTHEXPAND */
						
						f_x <= x ^ (rol1 & rol8) ^ rol2 ^ round_key[r];
						
						x <= y;
						y <= f_x;
						
						count_round <= count_round + 1;
					end

					if (count_round == 42) begin	
						Post_SMplaintext <= {y,x};	// decripted SIMON output
						
        				$display("\n[SIMON -> LFSR (DECRYPT)] Decrypt Simon output: 0x%016X", {y, x});						
						
						//LFSR decription
						if (spi_if.is_write) begin
            				spi_if.plaintext <= {y, x} ^ lfsr_m;
						end
						else begin
            				spi_if.plaintext <= {y, x} ^ lfsr_s;
						end					
										
						$display("\n[LFSR -> PLAINTEXT (DECRYPT)] Original plaintext received from master: 0x%016X",spi_if.plaintext);	
						state_encr <= TRANSMISSION;
					end
					else begin
						count_round <= count_round + 1;
					end
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

		   			if(cycle_cnt == 63) begin
		   				$display("(data encrypted = 0x%016h)", spi_if.ciphertext);
		   				cycle_cnt <= 0;
		   				state_encr <= DONE_CRYPT;
		   			end
					else begin
			   			cycle_cnt <= cycle_cnt + 1;
					end
				end
				
				DONE_CRYPT: begin 		
					spi_if.crypto_done <= 1;
	
					if (spi_if.crypto_ack) begin
						spi_if.crypto_done <= 1'b0;
						state_encr <= IDLE_CRYPT;                		
					end
				end	
		
		    	default: state_encr <= IDLE_CRYPT;
			endcase
	    end
	end
	
	// Round function using a subkey
	always_comb begin
		temp  = 32'b0;
		rol1  = 32'b0;
		rol8  = 32'b0;
		rol2  = 32'b0;
		x_new = 32'b0;

		if (count_round >= 1 && count_round <= 42) begin
        
        // temp generation
        temp = {round_key[count_round-1][2:0], round_key[count_round-1][31:3]}; // ROR3
        if ((count_round % 3) == 2) begin
            temp = temp ^ {round_key[count_round-1][3:0], round_key[count_round-1][31:4]}; // ROR4
        end
        
        // rotation calcule and x_new
        rol1 = {xs[30:0], xs[31]};
        rol8 = {xs[23:0], xs[31:24]};
        rol2 = {xs[29:0], xs[31:30]};
        x_new = ys ^ (rol1 & rol8) ^ rol2 ^ round_key[count_round-1];
    	end
	end

endmodule

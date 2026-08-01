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
	encrypt_state state_encr;
	state_t state_mast;
	
	//localparam TOTAL_BLOCK = 16;		//total transmission count
	
	logic [63:0] plain_text; 	// shift register SPI
	logic [63:0] slave_rx;

	//internal buffers
	logic [63:0] lfsr_m;
	logic [63:0] lfsr_s;
	
	/* verilator lint_off UNUSEDSIGNAL */
	logic [63:0] epherm_key_m;       			 // LFSR key
	logic [63:0] epherm_key_s;
	/* verilator lint_off UNUSEDSIGNAL */
	
	//logic [63:0] simon_plaintext;
	
	logic [5:0] cycle_cnt;
	logic [5:0] encypt_count;
	
	reg is_write;
	
	// internal logic separation of bus
	logic [63:0] encrypt_text_reg;
	
	assign crypto_if.encrypt_text = encrypt_text_reg;
	
	initial begin
	    $display("Crypto module instantiated");
	    $display("plain_text bits: %0d", $bits(plain_text));
	end
	
	//LFSR core
	always_ff @(posedge clk or negedge reset_n)
		if(!reset_n) begin 
			plain_text <= 64'h0;
			slave_rx <= 64'h0;
			state_encr <= IDLE_CRYPT;
			state_mast <= IDLE;
			lfsr_m <= 64'h326456754ACCEEF1;			// LFSR seed Master -> Slave
			lfsr_s <= 64'h523456789ABCDEd2;			// LFSR seed Slave -> Master
			$display("[CRYPTO] RESET: lfsr_m = 0x%016X", lfsr_m);
			crypto_if.nonce <= 64'h0000000000000001;  // initial seed
			crypto_if.crypto_done <= 0;
			cycle_cnt <= 0;
			//lfsr_m <= 64'h0000000000000001;   // LFSR seed Master -> Slave
    			//lfsr_s <= 64'h8000000000000000;	  // LFSR seed Slave -> Master
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
						$display("[RECEPTION] is_write: %d, plain_text: 0x%016X, slaver_rx: 0x%016X, encrypt_text_reg: 0x%016X", is_write, plain_text,slave_rx, encrypt_text_reg);
						if(cycle_cnt == 63) begin
						    $display("[RECEPTION] plain_text = 0x%016X, slave_rx = 0x%016X", plain_text, slave_rx);
						    cycle_cnt <= 0;
						    state_encr <= ENCRYPT;
						end
					end
				end
				ENCRYPT: begin
					//1 keystream by cycle
					lfsr_m <= {lfsr_m[62:0], lfsr_m[63] ^ lfsr_m[43] ^ lfsr_m[33] ^ lfsr_m[22] ^ lfsr_m[10] ^ lfsr_m[1]};
					lfsr_s <= {lfsr_s[62:0], lfsr_s[63] ^ lfsr_s[43] ^ lfsr_s[33] ^ lfsr_s[22] ^ lfsr_s[10] ^ lfsr_s[1]};

					encypt_count <= encypt_count + 1;
					
					if (encypt_count % 10 == 0) $display("[LFSR] encypt_count=%d, lfsr_m=0x%016X", encypt_count, lfsr_m);
					
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
						
						$display("[ENCRYPT_1] encrypt_text_reg: 0x%016X", encrypt_text_reg);
						$display("[CRYPTO] ENCRYPT: setting crypto_done=1");
						crypto_if.crypto_done <= 1;
					
						state_encr <= TRANSMISSION;
					end
				end
				
				TRANSMISSION: begin
					//come from master
					crypto_if.mosi_encrypted <= {63'b0, encrypt_text_reg[63 - cycle_cnt]};
					
					//come from slaver
					crypto_if.miso_encrypted <= {63'b0, encrypt_text_reg[63 - cycle_cnt]};
					
					//$display("[CRYPTO] send bit[%0d]=%b to MASTER (data=0x%016X)", cycle_cnt, encrypt_text_reg[63 - cycle_cnt], encrypt_text_reg);
		   			
		   			cycle_cnt <= cycle_cnt + 1;
		   			
		   			if(cycle_cnt == 63) begin
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
	   
	//SIMON

endmodule

`timescale 1ns/1ps

module crypto_spi_core
(
	input logic clk,
	input logic reset,
	spi_bus_if.crypto_f crypto_if
);

	import state_control::*;
	state_t state;
	
	//localparam TOTAL_BLOCK = 16;		//total transmission count

	//internal buffers
	logic [63:0] plain_text; 	// shift register SPI
	logic [63:0] lfsr_cipher;
	
	logic [63:0] epherm_key;        // LFSR key
	logic [63:0] simon_plaintext;

	//LFSR core
	always_ff @(posedge clk or negedge reset)
		if(reset) begin
			lfsr_cipher <= 64'hCAD1;		// default cipher text 
			plain_text <= 64'hDABF;			// default original text
			epherm_key <= '0;
			crypto_if.nonce <= 64'h0000000000000001;  // initial seed
		end
		else begin
			if(state == EXEC_ENCRYPT) begin
				plain_text <= spi_if.data_to_send;

				for (int i = 0; i < $size(plain_text); i++) begin
					//1 keystream by cycle
					plain_text <= {plain_text[62:0], plain_text[63] ^ plain_text[43] ^ plain_text[33] ^ plain_text[22] ^ plain_text[11] ^ plain_text[0]};

					//accumulation and key join (serial transmission)
					epherm_key <= {epherm_key[62:0], plain_text[63] ^ plain_text[43] ^ plain_text[33] ^ plain_text[22] ^ plain_text[1] ^ plain_text[0]};
				end
			end
			
			crypto_if.crypto_done <= 1;
		end

	   always_comb begin
 		 $display("lfsr_cipher generated: 0x%04X , done_signal: %b",lfsr_cipher, crypto_if.crypto_done);
	   end
	   
	//SIMON

endmodule

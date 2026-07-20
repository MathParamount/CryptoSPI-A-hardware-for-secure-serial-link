`timescale 1ns/1ps

module crypto_spi_core
(
	input logic clk,
	input logic reset,

);

	import state_control::*;
	state_t state;
	
	localparam TOTAL_BLOCK = 16;		//total transmission count

	//internal buffers
	logic [31:0] epherm_key;
	logic [31:0] lfsr_cipher;
	logic [31:0] lfsr_plaintext;

	logic [63:0] nonce;		//seeds
	logic [15:0] simon_cipher;
	logic [15:0] simon_plaintext;

	//LFSR core
	always_ff @(posedge clk or negedge reset)
		if(reset) begin
			lfsr_cipher <= 32'hCAD1;
			lfsr_plaintext <= '0;
			epherm_key <= '0;
			nonce <= 64'h0000000000000001;  // initial seed
		end
		else begin
			if(state == EXEC_ENCRYPT) begin
				lfsr_plaintext <= spi_if.sr_rx;

				for (int i = 0; i < $size(lfsr_plaintext); i++) begin
						//1 keystream by cycle
						lfsr_plaintext <= {lfsr_plaintext[30:0], lfsr_plaintext[31] ^ lfsr_plaintext[21] ^ lfsr_plaintext[11] ^ lfsr_plaintext[1] ^ lfsr_plaintext[0]};

						//accumulation and key join (serial transmission)
						epherm_key <= {epherm_key[30:0], lfsr_plaintext[31] ^ lfsr_plaintext[21] ^ lfsr_plaintext[11] ^ lfsr_plaintext[1] ^ lfsr_plaintext[0]};
				end
			end
		end

	   assign lfsr_cipher = lfsr_plaintext ^ epherm_key;

	//SIMON

endmodule

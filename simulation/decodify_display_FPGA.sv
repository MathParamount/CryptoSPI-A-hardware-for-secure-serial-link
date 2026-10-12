`timescale 1ns/1ps

module decodify_display_FPGA(
   input reset_n,
   input logic [7:0] digito, //number or character
   output logic [7:0] segments		//output to the display of 7 segments
);

	always_comb begin
		unique case(digito[3:0])		//only nibble b
			8'd0: segments = 8'0b11000000; // 0xC0
        		"1", 8'd1: segments = 8'0b11111001; // 0xF9
        		"2", 8'd2: segments = 8'0b10100100; // 0xA4
        		"3", 8'd3: segments = 8'0b10110000; // 0xB0
         		"4", 8'd4: segments = 8'0b10011001; // 0x99
			"5", 8'd5: segments = 8'0b10010010; // 0x92
			"6", 8'd6: segments = 8'0b10000010; // 0x82
			"7", 8'd7: segments = 8'0b11111000; // 0xF8
			"8", 8'd8: segments = 8'0b10000000; // 0x80
			"9", 8'd9: segments = 8'0b10010000; // 0x90
			"A", "a", 8'd10: segments = 8'b1000_1000; // 0x88  (A)
			"B", "b", 8'd11: segments = 8'b1000_0011; // 0x83  (b)
			"C", "c", 8'd12: segments = 8'b1100_0110; // 0xC6  (C)
			"D","d", 8'd13: segments = 8'b1010_0001; // 0xA1  (d)
			"E", "e", 8'd14: segments = 8'b1000_0110; // 0x86  (E)
			"F","f", 8'd15: segments = 8'b1000_1110; // 0x8E  (F)
			default: segments = 8'b1111_1111; // 0xFF - fully clear
		endcase
	end

endmodule

// QUartus step to decodification:
// Processing -> start -> start Analysis & synthesis
//testbench

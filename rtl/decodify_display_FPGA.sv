`timescale 1ns/1ps

module decodify_display_FPGA(
   input logic  [15:0] data, //number or character
   output logic [7:0] seg0,
   output logic [7:0] seg1,
   output logic [7:0] seg2,
   output logic [7:0] seg3
);

	// automatic output function to segmentation declaration
    function automatic [7:0] segments(input [3:0] val);
		unique case(val)
			4'd0: segments = 8'b1100_0000; // 0xC0
        	4'd1: segments = 8'b1111_1001; // 0xF9
        	4'd2: segments = 8'b1010_0100; // 0xA4
        	4'd3: segments = 8'b1011_0000; // 0xB0
         4'd4: segments = 8'b1001_1001; // 0x99
			4'd5: segments = 8'b1001_0010; // 0x92
			4'd6: segments = 8'b1000_0010; // 0x82
			4'd7: segments = 8'b1111_1000; // 0xF8
			4'd8: segments = 8'b1000_0000; // 0x80
			4'd9: segments = 8'b1001_0000; // 0x90
			4'hA: segments = 8'b1000_1000; // 0x88
         4'hB: segments = 8'b1000_0011; // 0x83
         4'hC: segments = 8'b1100_0110; // 0xC6
         4'hD: segments = 8'b1010_0001; // 0xA1
         4'hE: segments = 8'b1000_0110; // 0x86
         4'hF: segments = 8'b1000_1110; // 0x8E
			default: segments = 8'b1111_1111; // 0xFF - fully clear
		endcase
	endfunction

	 assign seg0 = segments(data[3:0]);    // LSB HEX00
    assign seg1 = segments(data[7:4]);    // HEX01
    assign seg2 = segments(data[11:8]);   // HEX02
    assign seg3 = segments(data[15:12]);  // MSB HEX03

endmodule

// QUartus step to decodification:
// Processing -> start -> start Analysis & synthesis
//testbench

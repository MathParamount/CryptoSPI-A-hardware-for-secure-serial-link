`timescale 1ns/1ps

//ancient error in quartus, due to a declaration of 19 gates in spi_top, being 6 are vectors of 64 bits

module spi_top (
    input  logic clk,
    input  logic reset_n,
    input  logic [7:0]  switches,  // 8 switchs to master_data
    input  logic start,
    output logic miso,
    output logic mosi,
    output logic done,
    output logic sck,
    output logic [2:0] debug_state, 
    output logic ss,
    output logic block_ready,      // 1 LED debug (optional)
    output logic [7:0] seg0,
    output logic [7:0] seg1,
    output logic [7:0] seg2,
    output logic [7:0] seg3
);

	 // Sinais internos
        logic [63:0] master_data_hardcoded;
        logic [63:0] slave_data_hardcoded;
        logic [63:0] data_received_wire;
        logic [63:0] display_data;
	 logic [63:0] ciphertext_wire;
	 logic [63:0] plaintext;
	 
	 // LFSR encryption -> encrypt_text
	 // Simon encryption -> ciphertext
	 // 50 MHz -> 25.000.000 ciclos = 1 segundo
    logic [24:0] display_timer;
    logic show_ciphertext;
	 
	 localparam [24:0] Max_timer = 25'd25_000_000;
	 
	 always_ff @(posedge clk or negedge reset_n) begin
		
		if(!reset_n) begin
			display_timer <= 0;
			show_ciphertext <= 0;
		end
		else begin
			if(display_timer == Max_timer) begin
				display_timer <= 0;
			   show_ciphertext <= ~show_ciphertext; 		// Alternating at 1s;
			end
			else begin
				display_timer <= display_timer + 25'd1;
			end
		end
		
	 end
	 
    // Hardcode: tightly 8 bits above zero and using switches below
    assign master_data_hardcoded = {56'h0, switches};
    
    // tightly slave data
    assign slave_data_hardcoded = 64'h0123456789ABCDEF; 

    crypt_spi_dut u_dut (
        	  .clk(clk),
		  .reset_n(reset_n),
		  .master_data (master_data_hardcoded),
        	  .slaver_data (slave_data_hardcoded),
		  .data_received (data_received_wire),
		  .start(start),
		  .miso(miso),
		  .mosi(mosi),
		  .done(done),
		  .sck(sck),
		  .debug_state(debug_state),
		  .ss(ss),
		  .block_ready(block_ready),
		  .ciphertext (ciphertext_wire),
		  .plaintext (plaintext)
    );
	 	 
	 assign display_data = show_ciphertext ? ciphertext_wire[15:0]: plaintext[15:0];
	 
	 //assign display_data = {8'h00, switches};		//test to switch use
	 
	 decodify_Script_display_FPGA u_dec (
        .data (display_data),
        .seg0 (seg0),
        .seg1 (seg1),
        .seg2 (seg2),
        .seg3 (seg3)
    );
	 
endmodule

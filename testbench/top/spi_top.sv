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

    // Hardcode: amarra os 8 bits de cima em zero e usa as alavancas embaixo
    assign master_data_hardcoded = {56'h0, switches};

    crypt_spi_dut u_dut (
        .clk(clk),
		  .reset_n(reset_n),
		  .switches(switches),
		  .start(start),
		  .miso(miso),
		  .mosi(mosi),
		  .done(done),
		  .sck(sck),
		  .debug_state(debug_state),
		  .ss(ss),
		  .block_ready(block_ready)
    );
	 
	 decodify_display_FPGA u_dec (
        .data (data_received_wire[15:0]), // Mostra os 16 bits de baixo
        .seg0 (seg0),
        .seg1 (seg1),
        .seg2 (seg2),
        .seg3 (seg3)
    );
	 
endmodule

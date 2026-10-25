`timescale 1ns/1ps

//synthesis (top-level) which go to the FPGA pins

module spi_top (
    input  logic  clk,
    input  logic  reset_n,
    input  logic [7:0] switches,
    input  logic start,
    output logic miso,
    output logic done,
    output logic [15:0] data_received,
    output logic sck,
    output logic mosi,
    output logic [2:0] debug_state,
    output logic ss,
    output logic [7:0] seg0,
    output logic [7:0] seg1,
    output logic [7:0] seg2,
    output logic [7:0] seg3
);
    //tie-off
    // Master: tie 8 bits above
    logic [15:0] master_data_hardcoded;
    assign master_data_hardcoded = {8'h00, switches};

    // Slaver: tie response values of Slave in 16'h1234
    logic [15:0] slave_data_hardcoded;
    assign slave_data_hardcoded = 16'h1234; 
    
    logic [15:0] text_wire;
    logic [15:0] display_data;
    
    spi_dut u_dut (
        .clk (clk),
        .reset_n (reset_n),
        .master_data (master_data_hardcoded),
        .slave_data_to_send (slave_data_hardcoded), 
        .start (start),
        .miso (miso),
        .done (done),
        .data_received (data_received),
        .sck (sck),
        .mosi (mosi),
        .debug_state (debug_state),
        .ss (ss),
        .text_debug (text_wire)
    );
    
    // transmission data exhibition in display
    assign display_data = (switches[0] == 1'b0) ? text_wire : data_received;

    decodify_display_FPGA u_dec (
      .data(display_data),
    	.seg0(seg0),
	   .seg1(seg1),
    	.seg2(seg2),
    	.seg3(seg3)
    );

endmodule

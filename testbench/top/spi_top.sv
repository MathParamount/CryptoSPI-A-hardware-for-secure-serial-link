`timescale 1ns/1ps

//synthesis (top-level) which go to the FPGA pins

module spi_top (
    input  logic clk,
    input  logic reset_n,
    input  logic [15:0] master_data,
    input  logic [15:0] slave_data_to_send,
    input  logic start,
    input  logic [7:0] digito,
    output logic miso,
    output logic done,
    output logic [15:0] data_received,
    output logic sck,
    output logic mosi,
    output logic [2:0] debug_state,
    output logic ss,
    output logic [7:0] segments
);

    spi_dut u_dut (
        .clk(clk),
        .reset_n(reset_n),
        .master_data(master_data),
        .slave_data_to_send(slave_data_to_send),
        .start(start),
        .miso(miso),
        .done(done),
        .data_received(data_received),
        .sck(sck),
        .mosi(mosi),
        .debug_state(debug_state),
        .ss(ss)
    );

    decodify_display_FPGA u_dec (
    	.digito({4'b0000, data_received[3:0]}),  // catch the last 4 bits bellow (nibble)
	.segments(segments)
    );

endmodule

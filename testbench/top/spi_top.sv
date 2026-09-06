`timescale 1ns/1ps

module spi_top (
    input  logic clk,
    input  logic reset,
    input  logic [15:0] master_data,
    input  logic [15:0] slave_data_to_send,
    input  logic start,
    output logic miso,
    output logic done,
    output logic [15:0] data_received,
    output logic sck,
    output logic mosi,
    output logic [2:0] debug_state,
    output logic ss
);

    spi_dut u_dut (
        .clk(clk),
        .reset(reset),
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

endmodule

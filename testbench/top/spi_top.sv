`timescale 1ns/1ps

module spi_top (
    input  logic clk,
    input  logic reset,
    input  logic [63:0] master_data,
    input  logic start,
    output logic miso,
    output logic done,
    output logic [63:0] data_received,
    output logic sck,
    output logic mosi,
    output logic [2:0] debug_state,
    output logic ss,
    output logic [63:0] cipher_text,
    output logic [63:0] lfsr_cipher
);

    spi_dut u_dut (
        .clk(clk),
        .reset(reset),
        .master_data(master_data),
        .start(start),
        .miso(miso),
        .done(done),
        .data_received(data_received),
        .sck(sck),
        .mosi(mosi),
        .debug_state(debug_state),
        .ss(ss),
        .cipher_text(cipher_text),
        .lfsr_cipher(lfsr_cipher)
    );

endmodule

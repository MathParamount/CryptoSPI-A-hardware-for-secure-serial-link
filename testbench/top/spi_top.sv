`timescale 1ns/1ps

module spi_top (
    input  logic clk,
    input  logic reset_n,
    input  logic [63:0] master_data,
    input  logic start,
    output logic miso,
    output logic mosi,
    output logic done,
    output logic [63:0] data_received,
    output logic sck,
    output logic [2:0] debug_state,
    output logic [2:0] debug_state_crypt,
    output logic ss,
    output logic block_ready,
    output logic [63:0] ciphertext,
    output logic [63:0] encrypt_text,
    output logic [63:0] plaintext,
    output logic crypto_ack,
    //output logic [63:0] lfsr_cipher,
    //output logic [63:0] nonce,      	// seed from Simon
    output logic [63:0] mosi_encrypted,
    output logic [63:0] miso_encrypted
);

    spi_dut u_dut (
        .clk(clk),
        .reset_n(reset_n),
        .master_data(master_data),
        .start(start),
        .is_write(is_write),
        .miso(miso),
        .done(done),
        .data_received(data_received),
        .sck(sck),
        .mosi(mosi),
        .debug_state(debug_state),
        .debug_state_crypt(debug_state_crypt),
        .ss(ss),
        .block_ready(block_ready),
        .crypto_done(crypto_done),
        .ciphertext(ciphertext),
        .plaintext(plaintext),
        .encrypt_text(encrypt_text),
        .crypto_ack(crypto_ack),
        .mosi_encrypted(mosi_encrypted),
        .miso_encrypted(miso_encrypted)
    );

endmodule

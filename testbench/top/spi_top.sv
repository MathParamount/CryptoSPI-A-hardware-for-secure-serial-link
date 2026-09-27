`timescale 1ns/1ps

module spi_top (
    input  logic clk,
    input  logic reset_n,
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

endmodule`timescale 1ns/1ps

module tb_spi;
  logic clk = 0;
  logic reset_n = 0;
  logic [15:0] master_data = 16'hA55A;
  logic [15:0] slave_data_to_send = 16'h1234;
  logic start = 0;
  logic miso;
  logic done;
  logic [15:0] data_received;
  logic sck;
  logic mosi;
  logic [2:0] debug_state;
  logic ss;

  spi_top u_top (
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

  localparam CLK_PERIOD = 20;

    always #(CLK_PERIOD/2) clk = ~clk;

    initial begin
        clk = 1'b0;
        reset_n = 1'b0;
        start = 1'b0;
        miso = 1'b0;
        master_data = 16'hA55A;
        slave_data_to_send = 16'h1234;

        repeat (3) @(negedge clk);

        reset_n = 1'b1;

        @(negedge clk);
        start = 1'b1;

        @(negedge clk);
        start = 1'b0;

        #1000;
        $finish;
    end
endmodule

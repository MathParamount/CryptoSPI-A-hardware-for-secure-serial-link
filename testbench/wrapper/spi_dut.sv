`timescale 1ns/1ps

module spi_dut 
(
	input logic clk,
	input logic reset,
	input logic [15:0] data_to_send,
	input logic start,
	output logic done,
	output logic miso,

	output logic sck,
	output logic ss,
	output logic [15:0] data_received,
	output logic mosi
);

	spi_bus_if sc_interface();

	spi_dut u_spi_dut 
	(
		.clk(clk),
		.start(start),
		.reset(reset),
		.data_to_send(data_to_send),
		.miso(miso),
		.sck(sck),
		.ss(ss),
		.data_received(data_received),
		.done(done),
		.mosi(mosi)
	);

	master_send u_master
	(
		.clk(clk),
		.reset(reset),
		.start(start),
		.done(done),
		.machine_mast(sc_interface.master)
	);

	slaver_receiver u_slaver
	(
		.machine_slav(sc_interface.slave)
	);

	//assigns
	assign sck = sc_interface.sck;
	assign ss = sc_interface.ss;
	assign data_received = sc_interface.data_received;
	assign mosi = sc_interface.mosi;

	assign sc_interface.data_to_send = data_to_send;
	assign miso = sc_interface.miso;

endmodule

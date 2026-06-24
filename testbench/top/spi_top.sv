`timescale 1ns/1ps

module spi_top
(
	input logic clk,
	input logic reset,
	input logic [15:0] data_to_send,
	output logic miso,

	output logic sck,
	output logic ss,
	output logic [15:0] data_received,
	output logic mosi
);

	spi_bus_if sc_interface();
	
	logic start /* verilator public */;

	//input signals
	assign sc_interface.data_to_send = data_to_send;
	assign miso = sc_interface.miso;

	//output signals
	assign sck = sc_interface.sck;
	assign ss = sc_interface.ss;
	assign data_received = sc_interface.data_received;
	assign mosi = sc_interface.mosi;

	
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

	
endmodule

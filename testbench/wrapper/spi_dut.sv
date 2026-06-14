`timescale 1ns/1ps

module spi_dut 
(
	input logic clk,
	input logic reset,
	input logic data_to_send,
	input logic miso,

	output logic sck,
	output logic ss,
	output logic data_received,
	output logic mosi
);

	spi_bus_if sc_interface();

	spi_dut u_spi_dut 
	(
		.clk(clk),
		.reset(reset),
		.data_to_send(data_to_send),
		.miso(miso),
		.sck(sck),
		.ss(ss),
		.data_received(data_received),
		.mosi(mosi)
	);

	master_send u_master
	(
		.clk(clk),
		.reset(reset),
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
	assign sc_interface.miso = miso;

endmodule

interface spi_bus_if;
	
    import state_control::*;
    state_t current_state;

    logic sck;

    logic [15:0] miso;

    //output
    logic sdo;		//serial data output
    logic ss;		//chip selector
    logic [15:0] mosi;


    //internal buffers (memory)
	logic [15:0] sr;
	logic [15:0] buffer_read;
	logic [15:0] buffer_write;


    //slaver spec data
    logic [15:0] data_received;
    logic [15:0] data_to_send;


    modport master(
        input logic data_to_send,		//word
	input logic miso,
	output logic ss,		//chip selector
	output logic mosi,
        output logic sck,
        output logic data_received		//serial data input
    );

    modport slave (
        input logic ss,
        input logic mosi,
        input logic sck,
        input logic data_received,
        output logic miso,
        output logic data_to_send
    );

endinterface

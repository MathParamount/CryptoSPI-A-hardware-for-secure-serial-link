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
        input data_to_send,		//word
	input miso,
	output ss,		//chip selector
	output mosi,
        output sck,
        output data_received		//serial data input
    );

    modport slave (
        input ss,
        input mosi,
        input sck,
        input data_received,
        output miso,
        output data_to_send
    );

endinterface

interface spi_bus_if;
	
    import state_control::*;

    logic sck;
    /* verilator lint_off UNUSEDSIGNAL */
    logic start;
    logic done;

    logic miso;

    //output
    logic ss;		//chip selector
    logic mosi;

    //slaver spec data (words)
    logic [15:0] data_received;
    logic [15:0] data_to_send;
    logic [15:0] slave_data_received;


    modport master(
        input data_to_send,		//word
        input miso,
        input slave_data_received,
        input start,
        output done,
        output ss,		//chip selector
        output mosi,
        output sck,
        output data_received		//serial data input
    );

    modport slave (
        input ss,
        input mosi,
        input sck,
        input data_to_send,
        input data_received,
        input done,
        output slave_data_received,
        output miso
    );

endinterface

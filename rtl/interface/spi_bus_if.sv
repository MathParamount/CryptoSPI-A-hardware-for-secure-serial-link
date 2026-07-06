interface spi_bus_if;

    logic sck;
    logic mosi;
    logic miso;
    logic ss;
    
    logic [15:0] data_to_send;
    logic [15:0] data_received;
    
    logic start;
    logic done;
    
    modport master_f (
        output sck,
        output mosi,
        input  miso,
        output ss,
        input  data_to_send,
        input  start,
        output done,
        output data_received
    );
    
    modport slaver_f (
        input  sck,
        input  mosi,
        output miso,
        input  ss,
        //input  data_to_send   /*with existency of data in slaver to send*/
        output data_received
    );
    
endinterface

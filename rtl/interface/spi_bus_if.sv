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
        input  start,
        input  miso,
        input  data_to_send,
        output sck,
        output mosi,
        output ss,
        output done,
        output data_received
    );
    
    modport slaver_f (
        output miso,
        input  sck,
        input  mosi,
        input  ss,
        input  done,
        input  data_to_send   /*with existency of data in slaver to send*/
    );
    
endinterface

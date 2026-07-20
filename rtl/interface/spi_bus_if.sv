interface spi_bus_if;

    logic sck;
    logic mosi;
    logic miso;
    logic ss;
    
    logic [15:0] data_to_send;
    logic [15:0] data_received;
    
    logic start;
    logic done;
    
    //cryptographic signals
    logic block_ready;
    logic [63:0] plain_text, 	// shift register SPI
    logic [63:0] epherm_key,        // SIMON key
    logic [63:0] cipher_text,	// shift register SPI
    logic [63:0] nonce,      	// IV generated or received
    logic crypto_done         	// processed block
    
    
    modport master_f (
        input  start,
        input  miso,
        input  data_to_send,
        output sck,
        output mosi,
        output ss,
        output done,
        output data_received		//from slaver to master
    );
    
    modport slaver_f (
        output miso,
        input  sck,
        input  mosi,
        input  ss,
        input  done,
        input  data_to_send   /*with existency of data in slaver to send*/
    );
    
    modport crypto_f (
       input  clk,
       input  reset,
       input  block_ready,
       input  mosi,
       input  ss,
       input  done,
       input  [63:0] epherm_key,
       output [63:0] cipher_text,
       output [63:0] nonce, 
       output crypto_done         
    );
    
endinterface

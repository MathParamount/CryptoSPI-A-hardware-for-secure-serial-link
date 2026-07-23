interface spi_bus_if;

    logic sck;
    logic mosi;
    logic miso;
    logic ss;
    
    logic [63:0] data_to_send;
    logic [63:0] data_received;
    
    logic start;
    logic done;
    
    //cryptographic signals
    logic block_ready;
    /* verilator lint_off UNDRIVEN */
    logic [63:0] cipher_text;	// shift register SPI
    logic [63:0] nonce;      	// IV generated or received
    logic crypto_done;        	// processed block
    /* verilator lint_off UNDRIVEN */
    
    
    modport master_f (
        input  start,
        input  miso,
        input  data_to_send,
        output sck,
        output mosi,
        output ss,
        output done,
        output block_ready,
        output data_received		//from slaver to master
    );
    
    modport slaver_f (
        output miso,
        input  sck,
        input  mosi,
        input  ss,
        input  done,
        input  crypto_done,
        input  nonce,
        input  data_to_send,   /*with existency of data in slaver to send*/
        input  cipher_text
    );
    
    modport crypto_f (
       input  block_ready,
       input  mosi,
       input  ss,
       input  done,
       output cipher_text,
       output nonce, 
       output crypto_done         
    );
    
endinterface

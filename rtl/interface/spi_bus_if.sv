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
    logic [63:0] miso_encrypted;
    logic [63:0] mosi_encrypted;
    
    /* verilator lint_off UNDRIVEN */
    logic [63:0] cipher_text;	// shift register SPI
    logic [63:0] nonce;      	// IV generated or received
    logic crypto_done;        	// processed block
    /* verilator lint_off UNDRIVEN */
    
    
    modport master_f (
        input  start,
        input  miso,
        input  data_to_send,
        input  crypto_done,
        input  miso_encrypted,
        output sck,
        output mosi,
        output ss,
        output done,
        output block_ready,
        output data_received		//from slaver to master
    );
    
    modport crypto_f (
       input  block_ready,
       input  ss,
       input  sck,
       input  mosi,		//plaintext master
       input  miso,		//plaintext slaver
       output mosi_encrypted,   // to slaver
       output miso_encrypted,   // to master
       output nonce, 
       output crypto_done         
    );
    
    modport slaver_f (
        output miso,
        input  mosi_encrypted,
        input  sck,
        input  mosi,
        input  ss,
        input  done,
        input  crypto_done,
        input  nonce,
        input  data_to_send   /*with existency of data in slaver to send*/
    );
    
endinterface

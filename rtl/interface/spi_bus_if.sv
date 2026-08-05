interface spi_bus_if;

    logic sck;
    logic mosi;
    logic miso;
    logic ss;
    
    logic [63:0] data_to_send;
    
    logic start;
    logic done;
    
    //cryptographic signals
    logic block_ready;
    logic [63:0] miso_encrypted;
    logic [63:0] mosi_encrypted;
    
    /* verilator lint_off UNDRIVEN */
    logic [63:0] encrypt_text;	// shift register SPI
    //logic [127:0] nonce;      	// IV generated or received
    logic crypto_done;        	// processed block
    logic [63:0] ciphertext;
    /* verilator lint_off UNDRIVEN */

    logic crypto_ack;
    
    modport master_f (
        input  start,
        input  data_to_send,
        input  crypto_done,
        input  miso_encrypted,
        output sck,
        output mosi,
        output ss,
        output done,
        output block_ready,
        output crypto_ack           //knowledge of clock
    );
    
    modport crypto_f (
       input  block_ready,
       input  ss,
       input  sck,
       input  mosi,		//plaintext master
       input  miso,		//plaintext slaver
       input  crypto_ack,       //knowledge of clock
       output mosi_encrypted,   // to slaver
       output miso_encrypted,   // to master
       output crypto_done,
       output encrypt_text,	//LFSR output
       output ciphertext	//SIMON output
    );
    
    modport slaver_f (
        output miso,
        input  sck,
        input  mosi_encrypted,
        input  ss,
        input  crypto_done,
        input  data_to_send   /*with existency of data in slaver to send*/
    );
    
endinterface

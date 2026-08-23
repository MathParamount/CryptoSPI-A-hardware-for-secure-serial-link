`timescale 1ns/1ps

module crypt_spi_dut (
    input  logic clk,
    input  logic reset_n,
    input  logic [63:0] master_data,
    input  logic start,
    output logic miso,
    output logic done,
    output logic sck,
    output logic mosi,
    output logic [2:0] debug_state,
    output logic [2:0] debug_state_crypt,
    output logic ss,
    output logic crypto_done,
    output logic block_ready,
    output logic mosi_encrypted,
    output logic miso_encrypted,
    output logic [63:0] encrypt_text,
    output logic [63:0] ciphertext,
    output logic crypto_ack,
    output logic [63:0] plaintext
);
    // Instancia a interface
    spi_bus_if spi_if ();
	
    import state_control::*;

   //attribute external data to dut
    assign spi_if.data_to_send = master_data;
    assign spi_if.start = start;    

    assign done = spi_if.done;
    assign sck = spi_if.sck;
    assign ss = spi_if.ss;
    assign crypto_ack = spi_if.crypto_ack;

    //SPI serial pins (1 bit)
    assign mosi = spi_if.mosi;		//assign mosi = spi_if.mosi; 
    assign miso = spi_if.miso;		//assign miso = spi_if.miso;
    
    // Encrypted parallel data outputs (from crypto core) ---
    assign mosi_encrypted = spi_if.crypto_f.mosi_encrypted;
    assign miso_encrypted = spi_if.crypto_f.miso_encrypted;

    //attribution to crypto dut
    //assign nonce = spi_if.nonce;
    assign crypto_done = spi_if.crypto_done;
    assign block_ready = spi_if.block_ready;
    
    //assign lfsr_cipher = u_crypt.lfsr_m;

    assign encrypt_text = spi_if.crypto_f.encrypt_text;
    assign ciphertext = spi_if.ciphertext;			//simon output
    
    assign plaintext = spi_if.plaintext;

    //interface declaration
    master_send u_master (
        .clk(clk),
        .reset_n(reset_n),
	.debug_state(debug_state),
        .spi_if(spi_if.master_f) 
    );
    
    slaver_receiver u_slave (
        .reset_n(reset_n),
        .spi_if(spi_if.slaver_f)
    );

    crypto_spi_core u_crypt (
        .clk(clk),
        .reset_n(reset_n),
        .debug_state_crypt(debug_state_crypt),
	.spi_if(spi_if.crypto_f)
    );
    
endmodule

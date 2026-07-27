`timescale 1ns/1ps

module crypt_spi_dut (
    input  logic clk,
    input  logic reset_n,
    input  logic [63:0] master_data,
    input  logic start,
    output logic miso,
    output logic done,
    output logic [63:0] data_received,
    output logic sck,
    output logic mosi,
    output logic [2:0] debug_state,
    output logic ss,
    output logic crypto_done,
    output logic block_ready,
    output logic [63:0] cipher_text,
    output logic [63:0] nonce,      	// seed from Simon
    output logic [63:0] lfsr_cipher,
    output logic [63:0] mosi_encrypted,
    output logic [63:0] miso_encrypted
);
    // Instancia a interface
    spi_bus_if spi_if ();
	
    import state_control::*;

   //attribute external data to dut
    assign spi_if.data_to_send = master_data;
    assign spi_if.start = start;    

    assign data_received = spi_if.data_received;
    assign done = spi_if.done;
    assign sck = spi_if.sck;
    assign ss = spi_if.ss;
    
    //SPI serial pins (1 bit)
    assign mosi = spi_if.mosi;		//assign mosi = spi_if.mosi; 
    assign miso = spi_if.miso;		//assign miso = spi_if.miso;
    
    // --- Encrypted parallel data outputs (from crypto core) ---
    assign mosi_encrypted = spi_if.crypto_f.mosi_encrypted;
    assign miso_encrypted = spi_if.crypto_f.miso_encrypted;

    //attribution to crypto dut
    assign cipher_text = spi_if.cipher_text;
    assign nonce = spi_if.nonce;
    assign crypto_done = spi_if.crypto_done;
    assign block_ready = spi_if.block_ready;
    assign lfsr_cipher = spi_if.data_to_send;
	
	//interface declaration
    master_send u_master (
        .clk(clk),
        .reset_n(reset_n),
	.debug_state(debug_state),
        .spi_if(spi_if.master_f) 
    );
    
    slaver_receiver u_slave (
        .spi_if(spi_if.slaver_f)
    );

    crypto_spi_core u_crypt (
        .reset_n(reset_n),
	.crypto_if(spi_if.crypto_f)
    );
    
endmodule

`timescale 1ns/1ps

module crypt_spi_dut (
    input  logic clk,
    input  logic reset,
    input  logic [15:0] master_data,
    input  logic start,
    output  logic miso,
    output logic done,
    output logic [15:0] data_received,
    output logic sck,
    output logic mosi,
    output logic [2:0] debug_state,
    output logic ss
);
    // Instancia a interface
    spi_bus_if spi_if ();
	
    import state_control::*;

   //attribute external data to dut
    assign spi_if.data_to_send = master_data;
    assign spi_if.start = start;

    assign data_received = spi_if.data_received;
    assign miso = spi_if.miso;
    assign done = spi_if.done;
    assign sck = spi_if.sck;
    assign mosi = spi_if.mosi; 
    assign ss = spi_if.ss;

	//attribution to crypto dut
	assign cipher_text = spi_if.cipher_text;
	assign nonce = spi_if.nonce;
	assign crypto_done = spi_if.crypto_done;
	assign block_ready = spi_if.block_ready;
	
	
	//interface declaration
    master_send u_master (
        .clk(clk),
        .reset(reset),
	    .debug_state(debug_state),
        .spi_if(spi_if.master_f) 
    );
    
    slaver_receiver u_slave (
        .spi_if(spi_if.slaver_f)
    );

	crypto_spi_core u_crypt (
		.clk(clk),
        .reset(reset),
		.crypto_if(spi_if.crypto_f)
	);
    
endmodule

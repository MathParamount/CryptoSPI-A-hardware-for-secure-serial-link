`timescale 1ns/1ps  // T_SCK = 504 ns

module slaver_receiver (
    spi_bus_if.slaver_f spi_if
);
    /* verilator lint_off UNUSEDSIGNAL */
    logic [15:0] sr_rx;
    /* verilator lint_off UNUSEDSIGNAL */
    
    logic [3:0] bit_count;
    
    // ECO model
    always_ff @(posedge spi_if.sck or posedge spi_if.ss) begin
        if(spi_if.ss) begin
            bit_count <= 0;
            sr_rx <= '0;
        end else begin
            // store bits from MISO
            sr_rx <= {sr_rx[14:0], spi_if.mosi};
            bit_count <= bit_count + 1;

            spi_if.miso <= spi_if.mosi;  

            if(bit_count == 15) begin
                bit_count <= 0;
            end
        end
    end
	
    /*
    // data transmission (sr_tx -> MISO)
    always_ff @(posedge spi_if.sck or posedge spi_if.ss) begin
        if(spi_if.ss) begin
            bit_count <= 0;
            sr_rx <= '0;
            sr_tx <= 16'hA5A5;
        end else begin
            sr_rx <= {sr_rx[14:0], spi_if.mosi};
            bit_count <= bit_count + 1;

            spi_if.miso <= sr_tx[15];
	    sr_tx <= {sr_tx[14:0], 1'b0};
	    
            if(bit_count == 15) begin
                bit_count <= 0;
                sr_tx <= 16'hA5A5;
            end 
        end
    end
   
   */

endmodule


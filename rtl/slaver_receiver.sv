`timescale 1ns/1ps  // T_SCK = 504 ns

module slaver_receiver (
    input logic reset_n,
    spi_bus_if.slaver_f spi_if
);
    /* verilator lint_off UNUSEDSIGNAL */
    logic [15:0] sr_rx;
    /* verilator lint_off UNUSEDSIGNAL */

    logic [15:0] sr_tx;
    
    logic [3:0] bit_count;
    logic ss_prev;
    
    logic miso_reg;

    // transmission model
    always_ff @(negedge spi_if.sck or negedge reset_n) begin
        if (!reset_n) begin
            sr_tx <= 0;
            ss_prev <= 1;
        end 
        else if (spi_if.ss) begin
            sr_tx <= 0;
            ss_prev <= 1;
        end 
        else begin
            if (ss_prev) begin
                // loading data in first cycle
                sr_tx <= {spi_if.slave_data_to_send[14:0], 1'b0};
                $display("sr_tx: 0x%04X", sr_tx);
                ss_prev <= 0;
            end else begin
                // displace to the next bits
                sr_tx <= {sr_tx[14:0], 1'b0};

            end
        end
    end

    always_comb begin
        if (spi_if.ss) begin
            miso_reg = 0;
        end else if (ss_prev) begin
            // loaded MSB
            miso_reg = spi_if.slave_data_to_send[15];
        end else begin
            // displaced MSB
            miso_reg = sr_tx[15];
        end
    end

assign spi_if.miso = miso_reg;
	
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


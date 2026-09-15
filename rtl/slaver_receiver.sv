`timescale 1ns/1ps  // T_SCK = 504 ns

module slaver_receiver (
    input logic reset_n,
    spi_bus_if.slaver_f spi_if
);
    /* verilator lint_off UNUSEDSIGNAL */
    logic [63:0] sr_rx;
    /* verilator lint_off UNUSEDSIGNAL */

    logic [63:0] data_to_send;   // buffer
    logic [63:0] sr_tx;
    
    logic [6:0] bit_count;
    logic ss_prev;

    logic miso_reg;
    
    // reception model
    always_ff @(posedge spi_if.sck or negedge reset_n) begin
    	if(!reset_n) begin
            bit_count <= 0;
            sr_rx <= '0;
            ss_prev <= 1;
        end
        else begin
        	//posedge ss signal
		    if(spi_if.ss && !ss_prev && bit_count > 0) begin
		        bit_count <= 0;
		        sr_rx <= 0;
		    end else if (!spi_if.ss) begin
                sr_rx <= {sr_rx[62:0], spi_if.mosi_encrypted};
                bit_count <= bit_count + 1;
			
			    if (bit_count == 63) $display("[SLAVE]: ciphertext = 0x%016h", sr_rx);
            end
            	
            $display("[SLAVE]: mosi_encrypted = %d, bit_count = %d, ss=%b", spi_if.mosi_encrypted, bit_count, spi_if.ss);
        	
        	ss_prev <= spi_if.ss;
        end
    end

    // transmission model
    always_ff @(negedge spi_if.sck or negedge reset_n) begin
        if(!reset_n) begin
            sr_tx <= 64'b0;
            ss_prev <= 1;
        end 
        else begin     
            if(spi_if.ss) begin
                sr_tx <= 0;
                ss_prev <= 1;
            end
            else begin
                if(ss_prev) begin
                    sr_tx <= {spi_if.slave_data_to_send[62:0], 1'b0};
                    ss_prev <= 0;
                end
                else begin
		        	sr_tx <= {sr_tx[62:0], 1'b0};  // displacement
                end
            end
        end
    end

    //combinational logic miso
    always_comb begin
        if(spi_if.ss) begin
            miso_reg = 0;
        end
        else if (ss_prev) begin
            miso_reg = spi_if.slave_data_to_send[63];       //first bit
        end
        else begin
            miso_reg = sr_tx[63];
        end
    end

assign spi_if.miso = miso_reg;

endmodule


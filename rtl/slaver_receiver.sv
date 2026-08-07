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
    

    // transmission model
    always_ff @(posedge spi_if.sck or negedge reset_n) begin
    	if(!reset_n) begin
            bit_count <= 0;
            sr_rx <= 0;
            ss_prev <= 1;
        end
        else begin
        	//posedge ss signal
		    if(spi_if.ss && !ss_prev) begin
		        bit_count <= 0;
		        sr_rx <= 0;
		    end else if (!spi_if.ss) begin
		        sr_rx <= {sr_rx[62:0], spi_if.mosi_encrypted[0]};
		        bit_count <= bit_count + 1;
		    
		        if(bit_count == 63)  $display("SLAVE: ciphertext = 0x%016X", sr_rx);
            	  end
        	ss_prev <= spi_if.ss;
        end
    end

    always_ff @(negedge spi_if.sck or negedge reset_n) begin
        if(!reset_n) begin
            spi_if.miso <= 0;
        end else begin     
		    if(spi_if.ss) begin
		        spi_if.miso <= 0;
		    end
            else begin
                if(ss_prev) begin
		            sr_tx  <= spi_if.data_to_send;
		        end
                else begin
                	spi_if.miso <= sr_tx[63];      // send bit
                	sr_tx <= {sr_tx[62:0], 1'b0};  // displacement
                end
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


module slaver_receiver
(
    spi_bus_if.slaver_f spi_if
);

    import state_control::*;

	/* verilator lint_off UNUSEDSIGNAL */
    logic [15:0] sr;
	/* verilator lint_on UNUSEDSIGNAL */

    logic [6:0] bit_count;
    
    logic rx_done, tx_load;

   
    //inputs/outputs handled through interface
    logic [15:0] sr_tx, sr_rx;


    //data reception (MOSI -> sr_rx)
    always_ff @(posedge spi_if.sck or posedge spi_if.ss) begin
        if(spi_if.ss) begin
            bit_count <= 0;
            sr_rx <= '0;
            rx_done <= 0;
            //sr_tx <= 16'hA5A5;  // Steady data (test)
            
        end else begin
            sr_rx <= {sr_rx[14:0], spi_if.mosi};
            bit_count <= bit_count + 1;

            spi_if.miso <= spi_if.mosi;

            if(bit_count == 15) begin
                bit_count <= 0;
                rx_done <= 1;
            end else begin
                bit_count <= bit_count + 1;
            end
        end
    end

    // data transmission (sr_tx -> MISO)
    always_ff @(posedge spi_if.sck or posedge spi_if.ss) begin
        if(spi_if.ss) begin
            tx_load <= 0;
            sr_tx <= sr_rx;
             //sr_tx <= spi_if.data_to_send;  // if data_to_send in slaver
        end else begin
            if(rx_done && !tx_load) begin
                sr_tx <= sr_rx;
                tx_load <= 1;
            end else begin
                sr_tx <= {sr_tx[14:0], 1'b0};
                spi_if.miso <= sr_tx[15];       //MSB
            end
        end
    end

endmodule


`timescale 1ns/1ps  // T_SCK = 504 ns

module slaver_receiver (
    input logic reset_n,
    spi_bus_if.slaver_f spi_if
);
    /* verilator lint_off UNUSEDSIGNAL */
    logic [15:0] sr_rx;
    /* verilator lint_off UNUSEDSIGNAL */

    logic [15:0] sr_tx;
    
    //logic [3:0] tx_count; 
    logic ss_prev;
    
    logic miso_reg;
    
    logic [3:0] slaver_bit_count;

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
			// load data already displaced
			if (ss_prev) begin
				sr_tx <= {spi_if.slave_data_to_send[14:0], 1'b0};
				ss_prev <= 0;
			end
			else begin
				// Displace to the next bit
				sr_tx <= {sr_tx[14:0], 1'b0};
			end
    	end
   end
   
   //data reception slaver signal
   always_ff @(negedge spi_if.sck or negedge reset_n) begin

   	if (!reset_n) begin
       		slaver_bit_count <= 0;
        	sr_rx <= '0;
    	end else if (spi_if.ss) begin
        	slaver_bit_count <= 0;
        	sr_rx <= '0;
    	end else begin
			//reception bit-bit of data from master
			sr_rx <= {sr_rx[14:0], spi_if.mosi};
			
			//final data reception
			if (slaver_bit_count == 15) begin
				slaver_bit_count <= 0;
				$display("[SLAVER] data_receiver: 0x%04X", {sr_rx[14:0], spi_if.mosi});
			end
			else begin
				slaver_bit_count <= slaver_bit_count + 1;
			end
    	end
   end
   

   // combinational logic miso
   always_comb begin
	   if (spi_if.ss) begin
			miso_reg = 0;
	   end
	   else if (ss_prev) begin
	   		// first bit
	   		miso_reg = spi_if.slave_data_to_send[15];
	   end
	   else begin
			// following bits
			miso_reg = sr_tx[15];
	   end
   end

assign spi_if.miso = miso_reg;

endmodule


module slaver_receiver
(
    spi_bus_if.slave machine_slav
);

    import state_control::*;

    //inputs/outputs handled through interface
    logic [15:0] tx_buffer;

    logic [14:0] sr;

    logic [3:0] bit_count;


    //data reception
    always_ff @(posedge machine_slav.sck) begin

        if(!machine_slav.ss) begin
            bit_count <= bit_count + 1;

            sr <= {sr[13:0], machine_slav.mosi};
        end
        else begin
            bit_count <= 0;
        end

        //counting 15 bit
        if (bit_count == 4'd15) begin
            machine_slav.slave_data_received <= {sr, machine_slav.mosi};
        end
    end

    // data transmission
    // NOTE: avoid posedge(ss) in sensitivity to prevent async/sync flop inference on ss.
    always_ff @(posedge machine_slav.sck) begin

        if(!machine_slav.ss) begin
            machine_slav.miso <= tx_buffer[15];         //loading in output (miso)
            tx_buffer <= {tx_buffer[14:0], 1'b0};       //flip the transm buffer
        end
        else begin
            //load new data (sampled on next SCK edge while SS==1)
            tx_buffer <= machine_slav.data_to_send;
        end

    end
   
endmodule


module slaver_receiver
(
    spi_bus_if.slave machine_slav
);

    import state_control::*;

    //inputs
    wire [15:0] data_to_send;

    //output
    wire [15:0] data_received;

    wire [15:0] rx_buffer;
    wire [15:0] tx_buffer;

    reg [15:0] sr;
    wire [15:0] sspbuf;


    //data reception
    always_ff @(posedge machine_slav.sck) begin

        if(!machine_slav.ss) begin
            sspbuf <= {sr[15:0], machine_slav.mosi};
        end
    end

    // data transmission
    always_ff @(posedge machine_slav.sck) begin

        if(!machine_slav.ss) begin
            machine_slav.miso <= tx_buffer[15];         //loading in output (miso)
            tx_buffer <= {tx_buffer[14:0], 1'b0};       //flip the transm buffer
        end
        else begin
            //load new data
            tx_buffer <= machine_slav.data_to_send;
        end

    end

    assign machine_slav.data_received = rx_buffer;

endmodule
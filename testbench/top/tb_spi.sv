`timescale 1ns/1ps

//MOdelSim simulations. No synthesis (flux simulations)

module tb_spi;

    // DUT signals
    logic        clk;
    logic        reset_n;
    logic [15:0] master_data;
    logic [15:0] slave_data_to_send;
    logic        start;
    logic        miso;
    logic        done;
    logic [15:0] data_received;
    logic        sck;
    logic        mosi;
    logic [2:0]  debug_state;
    logic        ss;

    // top instances
    spi_top u_top (
        .clk                (clk),
        .reset_n            (reset_n),
        .master_data        (master_data),
        .slave_data_to_send (slave_data_to_send),
        .start              (start),
        .miso               (miso),
        .done               (done),
        .data_received      (data_received),
        .sck                (sck),
        .mosi               (mosi),
        .debug_state        (debug_state),
        .ss                 (ss)
    );

    // Clock of 100 MHz (T =  10 ns)
    localparam CLK_PERIOD = 10;

    initial clk = 1'b0;
    always #(CLK_PERIOD/2) clk = ~clk;

    // test sequences
    initial begin
        // Initialization
        reset_n            = 1'b0;
        start              = 1'b0;
        master_data        = 16'hA55A;
        slave_data_to_send = 16'h1234;

        // wait some cycles with active reset
        repeat (5) @(posedge clk);
        reset_n = 1'b1;
        repeat (5) @(posedge clk);

        // start pulse (1 cycle)
        @(posedge clk);
        start = 1'b1;
        @(posedge clk);
        start = 1'b0;

        // wait done signal rise
        wait (done == 1'b1);
        @(posedge clk);

        // show results
        $display("========================================");
        $display(" SIMULATION RESULT");
        $display(" master_data        = 0x%04X", master_data);
        $display(" slave_data_to_send = 0x%04X", slave_data_to_send);
        $display(" data_received      = 0x%04X", data_received);
        $display("========================================");

		  //check if data_receiver is the same of master
        if (data_received == master_data)
            $display("PASS: data_received == master_data");
        else
            $display("FAIL: data_received != master_data");

        // wait some moment and end simulation
        repeat (20) @(posedge clk);
        $display("Simulation finished.");
        $finish;
    end

    // Waveform
    initial begin
        $dumpfile("tb_spi.vcd");
        $dumpvars(0, tb_spi);
    end

    // security timeout
    initial begin
        #100000;
        $display("TIMEOUT: done never rised.");
        $finish;
    end

endmodule

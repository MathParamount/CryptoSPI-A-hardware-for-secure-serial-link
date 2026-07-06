#include <iostream>
#include "verilated.h"
#include "Vspi_dut.h"

#include "verilated_vcd_c.h"


using namespace std;

VerilatedVcdC* pointer = nullptr;
Vspi_dut* top = nullptr;

const vluint64_t clock_half_period = 500000;	// period of 1us

vluint64_t main_t = 0;

//prototype
void tick(Vspi_dut *top, VerilatedVcdC* pointer);


//clock count, time unit and generation waves
void tick(Vspi_dut *top, VerilatedVcdC* pointer)
{
    top->clk = 0;
    top->eval();
    pointer->dump(main_t++);
    main_t += clock_half_period;

    //rising edge
    top->clk = 1;
    top->eval();
    pointer->dump(main_t++);
    main_t += clock_half_period;
}

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new Vspi_dut;
    pointer = new VerilatedVcdC;

    top->trace(pointer, 99);
    pointer->open("wave.vcd");

    // initialization
    top->reset = 1;
    top->start = 0;
    top->master_data = 0;

    // Reset
    for(int i = 0; i < 10; i++) tick(top, pointer);
    top->reset = 0;

    // =====  main simulation =====
    bool last_done = false;
    
    for(int cycle = 0; cycle < 6000; cycle++)
    {
        // first transmission
        if(cycle == 100) {
            top->start = 1;
            top->master_data = 0x00A5;
        }
        if(cycle == 500) {
            top->start = 0;  // 1 cycle pulse
        }

        // second transmission
        if(cycle == 2000) {
            top->start = 1;
            top->master_data = 0x00C5;
        }
        if(cycle == 2400) {
            top->start = 0;
        }

        // third transmission
        if(cycle == 3000) {
            top->start = 1;
            top->master_data = 0x00F5;
        }
        if(cycle == 3400) {
            top->start = 0;
        }

        // quarter transmission
        if(cycle == 3200) {
            top->start = 1;
            top->master_data = 0x00D1;
        }
        if(cycle == 3800) {
            top->start = 0;
        }

        // No loop principal, adicione:
        if(cycle % 100 == 0) {
            printf("[%d] State=%d SS=%d SCK=%d MOSI=%d MISO=%d DONE=%d\n",
                cycle, top->debug_state, top->ss, top->sck, top->mosi, top->miso, top->done);
        }

        // =====  Slave model =====
        
        // ECO (loopback) test:
        // top->miso = (top->ss == 0) ? top->mosi : 0;
        
        // master test with steady data:
        // top->miso = (top->ss == 0) ? 1 : 0;

        // advance a cycle
        tick(top, pointer);

        if(top->done && !last_done) {
            printf(
                "[%4llu] DONE  RX=0x%04X  SS=%d  SCK=%d  MOSI=%d  MISO=%d\n",
                (unsigned long long)main_t,
                (unsigned)top->data_received,
                (int)top->ss,
                (int)top->sck,
                (int)top->mosi,
                (int)top->miso
            );
        }
        last_done = top->done;
    }

    pointer->close();
    delete top;
    delete pointer;
    return 0;
}
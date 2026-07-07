#include <iostream>
#include "verilated.h"
#include "Vspi_dut.h"
#include <vector>

#include "verilated_vcd_c.h"


using namespace std;

const vluint64_t clock_half_period = 5;		//half period of clock
const int START_PULSE_CYCLES = 100;			//Remain active by 100 cycles
const int SIMUL_CYCLES = 3000;			//total cycles


//Transmission structure
struct Transmission {
	int start_cycle;
	uint64_t data;
	int expected_response;
	const char* description;
};

//Global variables
Vspi_dut* top = nullptr;
VerilatedVcdC* pointer = nullptr;
vluint64_t main_t = 0;
int transm_count = 0;

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

void start_transmission (uint16_t data, int start_cycle, const char* desc = "") {
	if(start_cycle < 0 ) return;
    
   // Ativa start
   top->start = 1;
   top->master_data = data;

	// waiting pulse of start
	for(int i =0; i < 5; i++) tick(top,pointer);

	top->start = 0;
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
	 printf("Made the reset\n");

	 std::vector<Transmission> transmissions = {
        {100,  0x00A5, 0, "First transmission - A5"},
        {2000, 0x00C5, 0, "second transmission - C5"},
        {4000, 0x00F5, 0, "Third transmission - F5"},
        {6000, 0x00D1, 0, "Quarter transmission - D1"},
        {8000, 0x5A5A, 0, "thith transmission - 5A5A"},
        {10000, 0x00FF, 0, "sixth transmission - FF"},
    };

    //==========  main simulation ============ 

    int next_transmission_idx = 0;
    bool transmission_active = false;
    int start_cycle_active = 0;

	 printf("======== Starting simulation ===========");

    for (int cycle = 0; cycle < SIMUL_CYCLES; cycle++) 
	 {
        if (next_transmission_idx < transmissions.size()) 
		  {
            Transmission& t = transmissions[next_transmission_idx];

            if (cycle == t.start_cycle && !top->done)
				{
                start_transmission(t.data, cycle, t.description);
                transmission_active = true;
                start_cycle_active = cycle;
                next_transmission_idx++;
            }
      	}

	 		//deactivate after pulse
	 		if (transmission_active && cycle == start_cycle_active + 5) {
      		top->start = 0;
      		transmission_active = false;
    		}
	 
        // =====  Slave model =====
        
        // ECO (loopback) test:
        // top->miso = (top->ss == 0) ? top->mosi : 0;
        
        // master test with steady data:
        // top->miso = (top->ss == 0) ? 1 : 0;

        	// advance a cycle
       	tick(top, pointer);
			
			static bool last_done = false;

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

	 //Final result
	 printf("Total cycles: %d\n", SIMUL_CYCLES);
    printf("Transmissions initialized: %zu\n", transmissions.size());

    pointer->close();
    delete top;
    delete pointer;
    return 0;
}

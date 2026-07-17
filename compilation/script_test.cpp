#include <iostream>
#include "verilated.h"
#include "Vspi_dut.h"
#include <vector>

#include "verilated_fst_c.h"


using namespace std;

const vluint64_t scale_factor = 1000;			//1ns = 1000ps
const vluint64_t clock_half_period = 5 * scale_factor;		//half period of clock (5ns)
const int SIMUL_CYCLES = 1000000;			//total cycles (150 us)


//Transmission structure
struct Transmission {
	vluint64_t start_time_ns ;
	uint64_t data;
	int expected_response;
	const char* description;
};

//Global variables
Vspi_dut* top = nullptr;
VerilatedFstC* pointer = nullptr;
vluint64_t main_t = 0;				//ps time
int transm_count = 0;

//clock count, time unit and generation waves
void tick()
{
    top->clk = 0;
    top->eval();
    pointer->dump(main_t);
    main_t += clock_half_period;

    //rising edge
    top->clk = 1;
    top->eval();
    pointer->dump(main_t);
    main_t += clock_half_period;

	 transm_count++;
}

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new Vspi_dut;
    pointer = new VerilatedFstC;

    top->trace(pointer, 99);
    pointer->open("wave.vcd");

    // initialization
    top->reset = 1;
    top->start = 0;
    top->master_data = 0;

    // Reset
    for(int i = 0; i < 10; i++) tick();
    
	 top->reset = 0;
	 printf("Made the reset\n");

	std::vector<Transmission> transmissions = {
        // basic test
        {100,  0x0000, 0, "Zero"},
        {2000, 0xFFFF, 0, "All ones"},
        {4000, 0x5555, 0, "Alternating 0x55"},
        {6000, 0xAAAA, 0, "Alternating 0xAA"},
        // specific patterns
        {8000, 0x00A5, 0, "Pattern A5"},
        {10000, 0x5A5A, 0, "Pattern 5A5A"},
        // (to FILL_BUFFER)
        {12000, 0x00A4, 0, "Even command - should go to FILL_BUFFER"},
        // to DONE
        {14000, 0x00A5, 0, "Repeat A5"},
    };

    //==========  main simulation ============ 

    int next_idx = 0;
    bool transmission_active = false;
    bool start_pending = false;
    uint16_t pending_data = 0;
    bool last_done = false;

    printf("======== Starting simulation ===========\n");

    while (main_t < SIMUL_CYCLES * 1000) {
    // --- Inicia nova transmissão se programada ---
    if (!transmission_active && !start_pending && next_idx < transmissions.size()) {
        Transmission& t = transmissions[next_idx];
        if (main_t >= t.start_time_ns * 1000) {
            pending_data = t.data;
            start_pending = true;
            printf("[%lu ns] Starting: %s (data=0x%04llX)\n",
                   main_t/1000, t.description, (unsigned long long)t.data);
        }
    }

    // --- Aplica pulso de start (3 ciclos) ---
    if (start_pending) {
        top->start = 1;
        top->master_data = pending_data;
        for (int i = 0; i < 3; i++) tick();
        top->start = 0;
        start_pending = false;
        transmission_active = true;
        continue;
    }

    // --- Tick normal ---
    tick();

    // --- Detecta borda de subida de done ---
    if (top->done && !last_done) {
        if (transmission_active) {
            printf("[%lu ns] DONE! RX=0x%04X\n", main_t/1000, top->data_received);
            transmission_active = false;
            next_idx++;

            for (int i = 0; i < 10; i++) tick();
        }
    }
    last_done = top->done;

    // --- Se todas as transmissões foram concluídas, encerra ---
    if (next_idx >= transmissions.size()) {
        printf("All transmissions completed at %lu ns\n", main_t/1000);
        break;
    }
    } 

    printf("Simulation finished at %lu ns\n", main_t/1000);
    printf("Transmissions completed: %d / %zu\n", next_idx, transmissions.size());

	//Final result
    printf("Total cycles: %d\n", SIMUL_CYCLES);
    printf("Transmissions initialized: %zu\n", transmissions.size());

    pointer->close();
    delete top;
    delete pointer;
    return 0;
}

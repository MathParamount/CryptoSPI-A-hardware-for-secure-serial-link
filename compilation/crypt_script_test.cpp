#include <iostream>
#include "verilated.h"
#include "Vcrypt_spi_dut.h"
#include <vector>

#include "verilated_fst_c.h"

using namespace std;

const vluint64_t scale_factor = 1000;			//1ns = 1000ps
const vluint64_t clock_half_period = 5 * scale_factor;		//half period of clock (5ns)
const int SIMUL_CYCLES = 1000000;			//total cycles (150 us)


//Transmission structure
struct Transmission {
	uint64_t start_time_ns ;
	uint64_t plaintext;
	bool is_write;
	const char* description;
};

//Global variables
Vcrypt_spi_dut* top = nullptr;
VerilatedFstC* pointer = nullptr;
vluint64_t main_t = 0;				//ps time


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

  	 //Displaying LFSR signals & time running
		
    pointer->dump(main_t);
    main_t += clock_half_period;
}

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new Vcrypt_spi_dut;
    pointer = new VerilatedFstC;

    top->trace(pointer, 99);
    pointer->open("Simon_wave.vcd");

    // initialization
    top->reset_n = 0;
    top->start = 0;
    top->master_data = 0;

    // Reset
    for(int j = 0; j < 10; j++) tick();
    
	 top->reset_n = 1;
	 printf("Made the reset\n");
		
	 //Simon transmission tests
	 std::vector<Transmission> transmissions = {
        // basic test
        {100,  0x656B696C2064E753ULL, true, "Test 1 (original vector Simon)"},
        {1000, 0x0000000000000000ULL, true, "Test 2 (All M_Zeros)"},
        {2000, 0xFFFFFFFFFFFFFFFFULL, false, "Test 3 (All M_Ones)"},
        {3000, 0x0123456789ABCDEFULL, true, "Test 4 (M_Hexadecimal count)"}
    };

	std::vector<Transmission> slaver_transmissions = {
		{400,  0x000000000000000ULL, "S_Zero"},
		{1300, 0x123456789ABCDEFULL, "Progressive S_transmission"},
		{2500, 0xFFFFFFFFFFFFFFFULL, "All S_Ones"},
		{4000, 0xABC123FED987000ULL, "S_count"}
	};

	//response behavior tests
	std::vector<uint64_t> master_response = {
		0x000000000000000ULL,
		0x123456789ABCDEFULL,
		0xFFFFFFFFFFFFFFFULL,
		0xABC123FED987000ULL
	};

	std::vector<uint64_t> slaver_response = {
		0x656B696C2064E753ULL,
		0x0000000000000000ULL,
		0xFFFFFFFFFFFFFFFFULL,
		0x0123456789ABCDEFULL
	};

    //==========  main simulation ============ 

    static int next_idx = 0, i = 0;
    static bool transmission_active = false;
    bool start_pending = false;
	 uint64_t pending_master_data = 0;
	 uint64_t pending_slaver_data = 0;
    bool last_done = false;
    bool pending_is_write = false;

    printf("=========== Starting simulation ===========\n");

    while (main_t < SIMUL_CYCLES * 1000) {
    	// --- Starting new transmission ---
    	if (!transmission_active && !start_pending && next_idx < transmissions.size()) {
		  //printf("[DEBUG] START TRANSMISSION %d\n", next_idx);

            Transmission& t = transmissions[next_idx];

            if (main_t >= t.start_time_ns * 1000ULL) {
                pending_master_data = t.plaintext;				//initial data transmission from master
                pending_is_write = t.is_write;					// write signal from DUT
					 //response buffers
					 pending_slaver_data = slaver_response[next_idx];
					 pending_master_data = master_response[next_idx];
					 //input attributions
					 top->slaver_data = pending_slaver_data;
					 top->master_data = pending_master_data;
                
					 start_pending = true;		//signal to hold system process size transmission
                printf("[%lu ns] Starting: %s (data=0x%04llX)\n",
                main_t/1000, t.description, (unsigned long long)t.plaintext);
					 printf("[%lu ns]  |  master_data_receiver: 0x%04llX  |  slaver_data_receiver: 0x%04llX\n", main_t/1000,(unsigned long long)pending_master_data, (unsigned long long)pending_slaver_data);
            }
        }
    
        // --- Applying start a pulse/cycle by 3 cycles---
        if (start_pending) {
            top->master_data = pending_master_data;
				top->slaver_data = pending_slaver_data;
            top->is_write = pending_is_write;
				top->slaver_data = pending_slaver_data;
            top->start = 1;
            tick();
            for (int w = 0; w < 3; w++) tick();
            top->start = 0;
            start_pending = false;
            transmission_active = true;
            continue;
        }

        // --- Tick normal ---
        tick();
    
        // --- Detect posedge signal of done ---
        if (top->done && !last_done) {
            if (transmission_active) {
                uint64_t result = top->ciphertext;
                printf("[%llu ns] END:\n", (unsigned long long)(main_t / 1000));
                printf(" Output (Ciphertext) = 0x%016llX\n", (unsigned long long)result);
                
                printf(" -> [DONE]\n\n");

                transmission_active = false;
                next_idx++;
                for (int w = 0; w < 10; w++) tick();
            }
        }
            
        last_done = top->done;

        // --- Transmission finality ---
        if (next_idx >= transmissions.size() && !transmission_active) {
            //complete waveform at the end
            for( int w =0; w < 20; w++) tick();
            break;
        }
    }

    printf("Transmissions completed: %d / %zu at time: %ld \n", next_idx, transmissions.size(), (main_t/1000));

	 //Final result
    //printf("Total cycles: %d\n", SIMUL_CYCLES);
    printf("Made tests: %i / %zu\n", next_idx, transmissions.size());

    pointer->close();
    delete top;
    delete pointer;
    return 0;
}

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
	vluint64_t start_time_ns ;
	uint64_t data;
	int expected_response;
	const char* description;
};

//Global variables
Vcrypt_spi_dut* top = nullptr;
VerilatedFstC* pointer = nullptr;
vluint64_t main_t = 0;				//ps time
int transm_count = 0;

//LFSR data tracking
uint64_t last_lfsr = 0;
int lfsr_change_count = 0;


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
	
	if(top->encrypt_text != last_lfsr)
	{
    printf("[%.3f us] LFSR data changed from: 0x%016llX --> 0x%016llX\n",
           main_t/1000000.0,
           (unsigned long long)last_lfsr,    // last value
           (unsigned long long)top->encrypt_text); // new value encrypted
    last_lfsr = top->encrypt_text;
    lfsr_change_count++;
	}
	
    pointer->dump(main_t);
    main_t += clock_half_period;

	transm_count++;
}

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new Vcrypt_spi_dut;
    pointer = new VerilatedFstC;

    top->trace(pointer, 99);
    pointer->open("Cryptwave.vcd");

    // initialization
    top->reset_n = 0;
    top->start = 0;
    top->master_data = 0;

    // Reset
    for(int j = 0; j < 10; j++) tick();
    
	 top->reset_n = 1;
	 printf("Made the reset\n");

	 std::vector<Transmission> transmissions = {
        // basic test
        {100,  0x0012, 0, "Zero"},
        {1000, 0xFFFF, 0, "All ones"},
        {1500, 0x5555, 0, "Alternating 0x55"},
        {2000, 0xAAAA, 0, "Alternating 0xAA"},
        // specific patterns
        {3000, 0x00A5, 0, "Pattern A5"},
        {3500, 0x5A5A, 0, "Pattern 5A5A"},
        // (to FILL_BUFFER)
        {4000, 0x10A4, 0, "Even command - should go to FILL_BUFFER"},
        // to DONE
        {4500, 0xAB41, 0, "Repeat A5"},
    };

    //==========  main simulation ============ 

    static int next_idx = 0, i = 0;
    static bool transmission_active = false;
    bool start_pending = false;
    uint16_t pending_data = 0;
    bool last_done = false;

    printf("======== Starting simulation ===========\n");

    while (main_t < SIMUL_CYCLES * 1000) {
    	// --- Starting new transmission ---
    	if (!transmission_active && !start_pending && next_idx < transmissions.size()) {
		  //printf("[DEBUG] START TRANSMISSION %d\n", next_idx);

        Transmission& t = transmissions[next_idx];
        if (main_t >= t.start_time_ns * 1000) {
            pending_data = t.data;
            start_pending = true;
            printf("[%lu ns] Starting: %s (data=0x%04llX)\n",
                   main_t/1000, t.description, (unsigned long long)t.data);
        }
    }

    //printf("[DEBUG] Ativando start para idx %d, data=0x%04X\n", next_idx, pending_data);

    // --- Applying start pulse (3 cycles) ---
    if (start_pending) {
        top->start = 1;
        top->master_data = pending_data;
        for (i = 0; i < 3; i++) tick();
        top->start = 0;
        start_pending = false;
        transmission_active = true;
        continue;
    }

    // --- Tick normal ---
    tick();
    
	 if( main_t % 1000000 == 0) {
    	//printf("[DEBUG] main_t=%lu, active=%d, pending=%d, next_idx=%d, done=%d\n", main_t, transmission_active, start_pending, next_idx, top->done);
		
		// LFSR functionality check
  		printf("[%.3f us] LFSR current: 0x%016llX , main_t: %d ,(transmission: %d)\n", 
               main_t/1000000.0,
               (unsigned long long)top->encrypt_text,
					main_t,
               lfsr_change_count);
	 }

    // --- Detect posedge signal of done ---
	 if(top->done && !last_done) {
    	if (transmission_active) {
    		transmission_active = false;
    		next_idx++;
    		//printf("[DEBUG] next_idx DEPOIS = %d\n", next_idx);

			//stabilization stop
			for (int w=0; w<5; w++) tick();
		}
	 }
    	
    	last_done = top->done;

    	// --- Transmission finality ---
    	if (next_idx >= transmissions.size()) {
        //printf("All transmissions completed at %lu ns\n", main_t/1000);
		  break;
    	}
	 }

    printf("Transmissions completed: %d / %zu at time: %ld \n", next_idx, transmissions.size(), main_t);

	 //Final result
    //printf("Total cycles: %d\n", SIMUL_CYCLES);
    printf("Transmissions initialized: %zu\n", transmissions.size());

    pointer->close();
    delete top;
    delete pointer;
    return 0;
}

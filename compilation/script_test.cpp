#include <iostream>
#include "verilated.h"
#include "Vsc_dut.h"

#include "vspi_master.h"		//wave form generation

using namespace std;

VerilatedVcdC* pointer = nullptr;
Vsc_dut* top = nullptr;

const vluint64_t clock_half_period = 500000;	// period of 1us

vluint64_t main_t = 0;


//clock count, time unit and generation waves
void tick(Vsc_dut *top, VerilatedVcdC* pointer)
{
 cout << "tick start, time=" << main_t << endl;

    top->clk = 0;
    top->eval();

    main_t += clock_half_period;

    cout << "before dump 0" << endl;
    pointer->dump(main_t);

    top->clk = 1;
    top->eval();

    main_t += clock_half_period;

    cout << "before dump 1" << endl;
    pointer->dump(main_t);

    cout << "tick end" << endl;
}

int main(int argc, char **argv) {

  Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  
  top = new Vsc_dut;
  pointer = new VerilatedVcdC;
  
  top->trace(pointer,99);
  pointer->open("wave.vcd");

  top->reset = 1;
  top->sck = 0;
  top->start = 0;
  top->data_to_send = 0;

  //architecture simulation
  
  for(int time = 0; time < 100; time++)
  {
		//clock simulation
		top->sck = !top->sck;

		if(sck == 1)
		{
			if(time == 10)
			{
				top->reset = 0;
			}

			if(time == 40)
			{
				top->start = 1;
				top->data_to_send = 0XA5;		//active transmission
			}

			if(time == 70)
			{
				top->start  = 0;
			}	
		}

		//circuit validation
		pointer->eval();
		
		//wave generation
		pointer->dump();

		 if (top->done) {
            printf("Transference sucessed, received data: 0x%02X\n", top->data_received);
            
            if (top->data_received != 0x5A) { // Slave response
                printf("ERRO: Data didn't received!\n");
            }
        }
  }
	
  pointer->close();
  delete->top;
  delete->pointer;
  return 0;
}

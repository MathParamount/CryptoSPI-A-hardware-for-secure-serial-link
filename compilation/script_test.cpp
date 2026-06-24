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
 cout << "tick start, time=" << main_t << endl;

    top->clk = 0;
    top->eval();

    pointer->dump(main_t);
    main_t += clock_half_period;

    //rising edge
    top->clk = 1;
    top->eval();
    pointer->dump(main_t);
    main_t += clock_half_period;

    cout << "tick end, time=" << main_t << endl;
}

int main(int argc, char **argv) {

  Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  
  top = new Vspi_dut;
  pointer = new VerilatedVcdC;
  
  top->trace(pointer,99);
  pointer->open("wave.vcd");
  
  //initial time
  tick(top, pointer);

  top->reset = 1;
  top->sck = 0;
  top->start = 0;
  top->data_to_send = 0;

  //architecture simulation
  
  for(int i = 0; i < 100; i++)
  {
	//clock simulation
	top->sck = !top->sck;

    if(top->sck == 1)
	{
		if(i == 10)
		{
			top->reset = 0;
		}

		if(i == 40)
		{
			top->start = 1;
			top->data_to_send = 0XA5;		//active transmission
		}

		if(i == 70)
		{
			top->start  = 0;
		}	
	}

    //circuit validation
    top->eval();

    //wave generation
    tick(top, pointer);
	
    if (top->done) {
        printf("Transference sucessed, received data: 0x%02X\n", top->data_received);
            
        if (top->data_received != 0x5A) { // Slave response
            printf("ERRO: Data didn't received!\n");
        }
    }
  }
	
  pointer->close();
  delete top;
  delete pointer;
  return 0;
}

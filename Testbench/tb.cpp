#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VALUtop.h"
#include "vbuddy.cpp" 


int main(int argc, char **argv, char **env) {
  int simcyc;     
  int tick;       

  Verilated::commandArgs(argc, argv);

  VALUtop* top = new VALUtop;

  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("ALUtop.vcd");
 
  // if (vbdOpen()!=1) return(-1);
  // vbdHeader("ALU");
  // vbdSetMode(1);       

  top->clk = 1;
  top->rst = 0;

  for (simcyc=0; simcyc<1000000; simcyc++) {

    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    top->en = vbdFlag();
    top->rst = 0;
    
    vbdHex(1, top->data_out & 0xF);
    vbdCycle(simcyc);

  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
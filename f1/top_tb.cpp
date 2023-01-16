#include "VALU.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include <iostream>

int main(int argc, char **argv, char **env) {
    int i;
    int clk;
    int plot = 0;

    Verilated::commandArgs(argc, argv);

    VALU* top = new VALU;
   
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("top.vcd");

    //init Vbuddy
    if (vbdOpen() !=1) return(-1);
    vbdHeader("Reference");

    top->clk = 0;
    top->rst = 0;
    
   
    
    for (i=0; i<1700; i++) {

        for(clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }
        vbdBar(int(top->a0) & 0xFF);
        top->rst = 0;




       if (Verilated::gotFinish()) exit(0);
    }
    vbdClose(); //++++
    tfp->close();
    exit(0);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*2:0*/ top__DOT__ALUctrlCU;
    CData/*0:0*/ top__DOT__ALUsrc;
    CData/*0:0*/ top__DOT__sum;
    CData/*0:0*/ top__DOT__ImmSrc;
    CData/*0:0*/ top__DOT__PCsrc;
    CData/*0:0*/ top__DOT__MemWrite;
    CData/*0:0*/ top__DOT__rs1;
    CData/*0:0*/ top__DOT__rs2;
    CData/*4:0*/ top__DOT__read_data1__DOT__rd;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__Instr;
    IData/*31:0*/ top__DOT__rd1;
    IData/*31:0*/ top__DOT__rd2;
    IData/*31:0*/ top__DOT__ALUop2;
    IData/*31:0*/ top__DOT__ALUresult;
    IData/*31:0*/ top__DOT__ReadData;
    IData/*31:0*/ top__DOT____Vcellout__alu__Sum;
    IData/*31:0*/ top__DOT__pcreg__DOT__branch_PC;
    IData/*31:0*/ top__DOT__pcreg__DOT__inc_PC;
    IData/*31:0*/ top__DOT__pcreg__DOT__next_PC;
    IData/*31:0*/ __Vchglast__TOP__top__DOT__Instr;
    VlUnpacked<CData/*7:0*/, 28> top__DOT__instrmem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__read_data1__DOT__mem_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

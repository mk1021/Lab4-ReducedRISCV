// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class VALU__Syms;

class VALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*1:0*/ top__DOT__ResultSrc;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*2:0*/ top__DOT__ALUctrlCU;
    CData/*0:0*/ top__DOT__ALUsrc;
    CData/*2:0*/ top__DOT__ImmSrc;
    CData/*1:0*/ top__DOT__PCsrc;
    CData/*0:0*/ top__DOT__MemWrite;
    CData/*0:0*/ top__DOT__Addr_mode;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__Instr;
    IData/*31:0*/ top__DOT__Result;
    IData/*31:0*/ top__DOT__rd1;
    IData/*31:0*/ top__DOT__rd2;
    IData/*31:0*/ top__DOT__ALUop2;
    IData/*31:0*/ top__DOT__ALUresult;
    IData/*31:0*/ top__DOT__ReadData;
    IData/*31:0*/ top__DOT__next_PC;
    VlUnpacked<CData/*7:0*/, 201064704> top__DOT__instrmem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__read_data1__DOT__mem_array;
    VlUnpacked<CData/*7:0*/, 131072> top__DOT__DataMem__DOT__data_mem_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU___024root(VALU__Syms* symsp, const char* name);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

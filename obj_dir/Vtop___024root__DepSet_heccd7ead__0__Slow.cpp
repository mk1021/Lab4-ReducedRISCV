// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[0U] = 0U;
    vlSelf->a0 = vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array
        [0xaU];
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc3c56e3a__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_hc3c56e3a__0[0U] = 0x2e6d656dU;
    __Vtemp_hc3c56e3a__0[1U] = 0x726d656dU;
    __Vtemp_hc3c56e3a__0[2U] = 0x696e7374U;
    VL_READMEM_N(true, 32, 2, 4294967295, VL_CVT_PACK_STR_NW(3, __Vtemp_hc3c56e3a__0)
                 ,  &(vlSelf->top__DOT__instrmem__DOT__rom_array)
                 , 4294967295, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__Instr = vlSelf->top__DOT__instrmem__DOT__rom_array
        [(1U & ((IData)(1U) + vlSelf->top__DOT__PC))];
    vlSelf->top__DOT__RegWrite = 0U;
    if ((1U & (~ (IData)((0x1069U == (0x707fU & vlSelf->top__DOT__Instr)))))) {
        if ((IData)((0x13U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__RegWrite = 1U;
        }
    }
    vlSelf->dontneed = ((0x3fffe0U & (vlSelf->top__DOT__Instr 
                                      >> 0xaU)) | (0x1fU 
                                                   & (vlSelf->top__DOT__Instr 
                                                      >> 7U)));
    vlSelf->top__DOT__ALU__DOT__rd1 = vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array
        [(0x1fU & (vlSelf->top__DOT__Instr >> 0xfU))];
    vlSelf->top__DOT__PCsrc = 0U;
    vlSelf->top__DOT__ImmSrc = 0U;
    if ((IData)((0x1069U == (0x707fU & vlSelf->top__DOT__Instr)))) {
        vlSelf->top__DOT__PCsrc = 1U;
        vlSelf->top__DOT__ImmSrc = 1U;
    }
    vlSelf->top__DOT__ImmOp = ((IData)(vlSelf->top__DOT__ImmSrc)
                                ? (((- (IData)((vlSelf->top__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xbU) | ((0x400U 
                                                 & (vlSelf->top__DOT__Instr 
                                                    << 3U)) 
                                                | ((0x3f0U 
                                                    & (vlSelf->top__DOT__Instr 
                                                       >> 0x15U)) 
                                                   | (0xfU 
                                                      & (vlSelf->top__DOT__Instr 
                                                         >> 8U)))))
                                : (((- (IData)((vlSelf->top__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (0xfffU 
                                                & vlSelf->top__DOT__Instr)));
    vlSelf->top__DOT__pcreg__DOT__branch_PC = (vlSelf->top__DOT__PC 
                                               + vlSelf->top__DOT__ImmOp);
    vlSelf->top__DOT__pcreg__DOT__inc_PC = ((IData)(4U) 
                                            + vlSelf->top__DOT__PC);
    vlSelf->top__DOT__pcreg__DOT__next_PC = ((IData)(vlSelf->top__DOT__PCsrc)
                                              ? vlSelf->top__DOT__pcreg__DOT__branch_PC
                                              : vlSelf->top__DOT__pcreg__DOT__inc_PC);
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->dontneed = VL_RAND_RESET_I(22);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcreg__DOT__branch_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcreg__DOT__inc_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcreg__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__instrmem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ALU__DOT__rd1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

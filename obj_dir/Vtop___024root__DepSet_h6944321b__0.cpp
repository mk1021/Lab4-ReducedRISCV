// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__read_data1__DOT__mem_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__read_data1__DOT__mem_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__read_data1__DOT__mem_array__v0;
    // Body
    __Vdlyvset__top__DOT__read_data1__DOT__mem_array__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__RegWrite) & (0U 
                                                != (IData)(vlSelf->top__DOT__read_data1__DOT__rd)))) {
        __Vdlyvval__top__DOT__read_data1__DOT__mem_array__v0 
            = vlSelf->top__DOT__ReadData;
        __Vdlyvset__top__DOT__read_data1__DOT__mem_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__read_data1__DOT__mem_array__v0 
            = vlSelf->top__DOT__read_data1__DOT__rd;
    }
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__pcreg__DOT__next_PC);
    if (__Vdlyvset__top__DOT__read_data1__DOT__mem_array__v0) {
        vlSelf->top__DOT__read_data1__DOT__mem_array[__Vdlyvdim0__top__DOT__read_data1__DOT__mem_array__v0] 
            = __Vdlyvval__top__DOT__read_data1__DOT__mem_array__v0;
    }
    vlSelf->a0 = vlSelf->top__DOT__read_data1__DOT__mem_array
        [8U];
    vlSelf->top__DOT__rd1 = vlSelf->top__DOT__read_data1__DOT__mem_array
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__Instr = ((((0x1bU >= (0x1fU & vlSelf->top__DOT__PC))
                                  ? vlSelf->top__DOT__instrmem__DOT__rom_array
                                 [(0x1fU & vlSelf->top__DOT__PC)]
                                  : 0U) << 0x18U) | 
                               ((((0x1bU >= (0x1fU 
                                             & ((IData)(1U) 
                                                + vlSelf->top__DOT__PC)))
                                   ? vlSelf->top__DOT__instrmem__DOT__rom_array
                                  [(0x1fU & ((IData)(1U) 
                                             + vlSelf->top__DOT__PC))]
                                   : 0U) << 0x10U) 
                                | ((((0x1bU >= (0x1fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__PC)))
                                      ? vlSelf->top__DOT__instrmem__DOT__rom_array
                                     [(0x1fU & ((IData)(2U) 
                                                + vlSelf->top__DOT__PC))]
                                      : 0U) << 8U) 
                                   | ((0x1bU >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->top__DOT__PC)))
                                       ? vlSelf->top__DOT__instrmem__DOT__rom_array
                                      [(0x1fU & ((IData)(3U) 
                                                 + vlSelf->top__DOT__PC))]
                                       : 0U))));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__Instr = (0x1fU & (vlSelf->top__DOT__Instr 
                                        >> 7U));
    vlSelf->top__DOT__RegWrite = 0U;
    if ((1U & (~ (IData)((0x1063U == (0x707fU & vlSelf->top__DOT__Instr)))))) {
        if ((3U == (0x7fU & vlSelf->top__DOT__Instr))) {
            vlSelf->top__DOT__RegWrite = 1U;
        } else if ((IData)((0x13U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__RegWrite = 1U;
        }
    }
    vlSelf->top__DOT__rd1 = (0x1fU & (vlSelf->top__DOT__Instr 
                                      >> 0xfU));
    vlSelf->top__DOT__ALUsrc = 1U;
    vlSelf->top__DOT__rd2 = (0x1fU & (vlSelf->top__DOT__Instr 
                                      >> 0x14U));
    vlSelf->top__DOT__ImmSrc = 0U;
    if ((IData)((0x1063U == (0x707fU & vlSelf->top__DOT__Instr)))) {
        vlSelf->top__DOT__ALUsrc = 0U;
        vlSelf->top__DOT__ImmSrc = 1U;
    } else if ((3U != (0x7fU & vlSelf->top__DOT__Instr))) {
        if ((IData)((0x13U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__ImmSrc = 0U;
        }
    }
    vlSelf->top__DOT__ImmOp = ((IData)(vlSelf->top__DOT__ImmSrc)
                                ? (((- (IData)((vlSelf->top__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->top__DOT__Instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__Instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__Instr 
                                                         >> 7U)))))
                                : (((- (IData)((vlSelf->top__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->top__DOT__Instr 
                                                >> 0x14U)));
    vlSelf->top__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                 ? vlSelf->top__DOT__ImmOp
                                 : vlSelf->top__DOT__rd2);
    if (VL_LIKELY((0U == (IData)(vlSelf->top__DOT__ALUctrlCU)))) {
        vlSelf->top__DOT____Vcellout__alu__Sum = (vlSelf->top__DOT__rd1 
                                                  + vlSelf->top__DOT__ALUop2);
    } else {
        vlSelf->top__DOT____Vcellout__alu__Sum = 0U;
        VL_WRITEF("invalid\n");
    }
    vlSelf->top__DOT__PCsrc = 0U;
    if ((IData)((0x1063U == (0x707fU & vlSelf->top__DOT__Instr)))) {
        if ((vlSelf->top__DOT__rd1 != vlSelf->top__DOT__ALUop2)) {
            vlSelf->top__DOT__PCsrc = 1U;
        }
    } else if ((3U != (0x7fU & vlSelf->top__DOT__Instr))) {
        if ((IData)((0x13U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    }
    vlSelf->top__DOT__pcreg__DOT__branch_PC = (vlSelf->top__DOT__PC 
                                               + vlSelf->top__DOT__ImmOp);
    vlSelf->top__DOT__pcreg__DOT__inc_PC = ((IData)(4U) 
                                            + vlSelf->top__DOT__PC);
    vlSelf->top__DOT__pcreg__DOT__next_PC = ((IData)(vlSelf->top__DOT__PCsrc)
                                              ? vlSelf->top__DOT__pcreg__DOT__branch_PC
                                              : vlSelf->top__DOT__pcreg__DOT__inc_PC);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__Instr ^ vlSelf->__Vchglast__TOP__top__DOT__Instr));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__Instr ^ vlSelf->__Vchglast__TOP__top__DOT__Instr))) VL_DBG_MSGF("        CHANGE: top.sv:14: top.Instr\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__Instr = vlSelf->top__DOT__Instr;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

VL_ATTR_COLD void VALU___024root___initial__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4b288a68__0;
    VlWide<4>/*127:0*/ __Vtemp_hb1ec63d3__0;
    // Body
    VL_WRITEF("Loading mem.\n");
    __Vtemp_h4b288a68__0[0U] = 0x2e6d656dU;
    __Vtemp_h4b288a68__0[1U] = 0x616d656dU;
    __Vtemp_h4b288a68__0[2U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h4b288a68__0)
                 ,  &(vlSelf->top__DOT__DataMem__DOT__data_mem_array)
                 , 0x10000U, ~0ULL);
    VL_WRITEF("Loading rom.\n");
    __Vtemp_hb1ec63d3__0[0U] = 0x2e6d656dU;
    __Vtemp_hb1ec63d3__0[1U] = 0x656e6365U;
    __Vtemp_hb1ec63d3__0[2U] = 0x65666572U;
    __Vtemp_hb1ec63d3__0[3U] = 0x72U;
    VL_READMEM_N(true, 8, 201064704, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hb1ec63d3__0)
                 ,  &(vlSelf->top__DOT__instrmem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VALU___024root___settle__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->top__DOT__read_data1__DOT__mem_array
        [0xaU];
    vlSelf->top__DOT__Instr = ((((0xbfc00ffU >= (0xfffffffU 
                                                 & vlSelf->top__DOT__PC))
                                  ? vlSelf->top__DOT__instrmem__DOT__rom_array
                                 [(0xfffffffU & vlSelf->top__DOT__PC)]
                                  : 0U) << 0x18U) | 
                               ((((0xbfc00ffU >= (0xfffffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->top__DOT__PC)))
                                   ? vlSelf->top__DOT__instrmem__DOT__rom_array
                                  [(0xfffffffU & ((IData)(1U) 
                                                  + vlSelf->top__DOT__PC))]
                                   : 0U) << 0x10U) 
                                | ((((0xbfc00ffU >= 
                                      (0xfffffffU & 
                                       ((IData)(2U) 
                                        + vlSelf->top__DOT__PC)))
                                      ? vlSelf->top__DOT__instrmem__DOT__rom_array
                                     [(0xfffffffU & 
                                       ((IData)(2U) 
                                        + vlSelf->top__DOT__PC))]
                                      : 0U) << 8U) 
                                   | ((0xbfc00ffU >= 
                                       (0xfffffffU 
                                        & ((IData)(3U) 
                                           + vlSelf->top__DOT__PC)))
                                       ? vlSelf->top__DOT__instrmem__DOT__rom_array
                                      [(0xfffffffU 
                                        & ((IData)(3U) 
                                           + vlSelf->top__DOT__PC))]
                                       : 0U))));
    vlSelf->top__DOT__RegWrite = 0U;
    vlSelf->top__DOT__ResultSrc = 0U;
    vlSelf->top__DOT__Addr_mode = 0U;
    vlSelf->top__DOT__MemWrite = 0U;
    vlSelf->top__DOT__ALUctrlCU = 0U;
    vlSelf->top__DOT__rd1 = ((0U == (0x1fU & (vlSelf->top__DOT__Instr 
                                              >> 0xfU)))
                              ? 0U : vlSelf->top__DOT__read_data1__DOT__mem_array
                             [(0x1fU & (vlSelf->top__DOT__Instr 
                                        >> 0xfU))]);
    vlSelf->top__DOT__ALUsrc = 0U;
    vlSelf->top__DOT__rd2 = ((0U == (0x1fU & (vlSelf->top__DOT__Instr 
                                              >> 0x14U)))
                              ? 0U : vlSelf->top__DOT__read_data1__DOT__mem_array
                             [(0x1fU & (vlSelf->top__DOT__Instr 
                                        >> 0x14U))]);
    vlSelf->top__DOT__ImmSrc = 0U;
    if ((IData)((0x13U == (0x707fU & vlSelf->top__DOT__Instr)))) {
        vlSelf->top__DOT__RegWrite = 1U;
        vlSelf->top__DOT__ALUsrc = 1U;
        vlSelf->top__DOT__ImmSrc = 1U;
    } else {
        if ((IData)((0x1013U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__RegWrite = 1U;
            vlSelf->top__DOT__ALUsrc = 1U;
        } else if ((IData)((0x2003U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__RegWrite = 1U;
            vlSelf->top__DOT__ALUsrc = 1U;
        } else if ((IData)((0x4003U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__RegWrite = 1U;
            vlSelf->top__DOT__ALUsrc = 1U;
        } else if ((IData)((0x67U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__RegWrite = 1U;
            vlSelf->top__DOT__ALUsrc = 1U;
        } else if ((1U & (~ (IData)((0x1063U == (0x707fU 
                                                 & vlSelf->top__DOT__Instr)))))) {
            if ((0x6fU == (0x7fU & vlSelf->top__DOT__Instr))) {
                vlSelf->top__DOT__RegWrite = 1U;
                vlSelf->top__DOT__ALUsrc = 1U;
            } else {
                if ((IData)((0x33U == (0x707fU & vlSelf->top__DOT__Instr)))) {
                    vlSelf->top__DOT__RegWrite = 1U;
                } else if ((0x37U == (0x7fU & vlSelf->top__DOT__Instr))) {
                    vlSelf->top__DOT__RegWrite = 1U;
                }
                if ((1U & (~ (IData)((0x33U == (0x707fU 
                                                & vlSelf->top__DOT__Instr)))))) {
                    if ((0x37U == (0x7fU & vlSelf->top__DOT__Instr))) {
                        vlSelf->top__DOT__ALUsrc = 1U;
                    } else if ((IData)((0x2023U == 
                                        (0x707fU & vlSelf->top__DOT__Instr)))) {
                        vlSelf->top__DOT__ALUsrc = 1U;
                    } else if ((IData)((0x23U == (0x707fU 
                                                  & vlSelf->top__DOT__Instr)))) {
                        vlSelf->top__DOT__ALUsrc = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (IData)((0x1013U == (0x707fU & vlSelf->top__DOT__Instr)))))) {
            if ((IData)((0x2003U == (0x707fU & vlSelf->top__DOT__Instr)))) {
                vlSelf->top__DOT__ImmSrc = 1U;
            } else if ((IData)((0x4003U == (0x707fU 
                                            & vlSelf->top__DOT__Instr)))) {
                vlSelf->top__DOT__ImmSrc = 1U;
            } else if ((IData)((0x67U == (0x707fU & vlSelf->top__DOT__Instr)))) {
                vlSelf->top__DOT__ImmSrc = 2U;
            } else if ((1U & (~ (IData)((0x1063U == 
                                         (0x707fU & vlSelf->top__DOT__Instr)))))) {
                if ((0x6fU == (0x7fU & vlSelf->top__DOT__Instr))) {
                    vlSelf->top__DOT__ImmSrc = 3U;
                } else if ((IData)((0x33U == (0x707fU 
                                              & vlSelf->top__DOT__Instr)))) {
                    vlSelf->top__DOT__ImmSrc = 1U;
                } else if ((0x37U == (0x7fU & vlSelf->top__DOT__Instr))) {
                    vlSelf->top__DOT__ImmSrc = 4U;
                }
            }
        }
    }
    vlSelf->top__DOT__ImmOp = ((4U & (IData)(vlSelf->top__DOT__ImmSrc))
                                ? ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                             ? 0U : 
                                            (0xfffff000U 
                                             & vlSelf->top__DOT__Instr)))
                                : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                        ? (((- (IData)(
                                                       (vlSelf->top__DOT__Instr 
                                                        >> 0x1fU))) 
                                            << 0x14U) 
                                           | ((0xff000U 
                                               & vlSelf->top__DOT__Instr) 
                                              | ((0x800U 
                                                  & (vlSelf->top__DOT__Instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->top__DOT__Instr 
                                                       >> 0x14U)))))
                                        : (((- (IData)(
                                                       (vlSelf->top__DOT__Instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->top__DOT__Instr 
                                              >> 0x14U)))
                                    : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                        ? (((- (IData)(
                                                       (vlSelf->top__DOT__Instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->top__DOT__Instr 
                                              >> 0x14U))
                                        : (((- (IData)(
                                                       (vlSelf->top__DOT__Instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->top__DOT__Instr 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->top__DOT__Instr 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->top__DOT__Instr 
                                                       >> 7U))))))));
    vlSelf->top__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                 ? vlSelf->top__DOT__ImmOp
                                 : vlSelf->top__DOT__rd2);
    vlSelf->top__DOT__PCsrc = 0U;
    if ((1U & (~ (IData)((0x13U == (0x707fU & vlSelf->top__DOT__Instr)))))) {
        if ((1U & (~ (IData)((0x1013U == (0x707fU & vlSelf->top__DOT__Instr)))))) {
            if ((IData)((0x2003U == (0x707fU & vlSelf->top__DOT__Instr)))) {
                vlSelf->top__DOT__ResultSrc = 1U;
            } else if ((IData)((0x4003U == (0x707fU 
                                            & vlSelf->top__DOT__Instr)))) {
                vlSelf->top__DOT__ResultSrc = 3U;
            } else if ((1U & (~ (IData)((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__Instr)))))) {
                if ((1U & (~ (IData)((0x1063U == (0x707fU 
                                                  & vlSelf->top__DOT__Instr)))))) {
                    if ((0x6fU == (0x7fU & vlSelf->top__DOT__Instr))) {
                        vlSelf->top__DOT__ResultSrc = 2U;
                    }
                }
            }
            if ((1U & (~ (IData)((0x2003U == (0x707fU 
                                              & vlSelf->top__DOT__Instr)))))) {
                if ((IData)((0x4003U == (0x707fU & vlSelf->top__DOT__Instr)))) {
                    vlSelf->top__DOT__Addr_mode = 1U;
                } else if ((1U & (~ (IData)((0x67U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__Instr)))))) {
                    if ((1U & (~ (IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__Instr)))))) {
                        if ((0x6fU != (0x7fU & vlSelf->top__DOT__Instr))) {
                            if ((1U & (~ (IData)((0x33U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__Instr)))))) {
                                if ((0x37U != (0x7fU 
                                               & vlSelf->top__DOT__Instr))) {
                                    if ((1U & (~ (IData)(
                                                         (0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__Instr)))))) {
                                        if ((IData)(
                                                    (0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__Instr)))) {
                                            vlSelf->top__DOT__Addr_mode = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (IData)((0x4003U == (0x707fU 
                                                  & vlSelf->top__DOT__Instr)))))) {
                    if ((1U & (~ (IData)((0x67U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__Instr)))))) {
                        if ((1U & (~ (IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__Instr)))))) {
                            if ((0x6fU != (0x7fU & vlSelf->top__DOT__Instr))) {
                                if ((1U & (~ (IData)(
                                                     (0x33U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__Instr)))))) {
                                    if ((0x37U != (0x7fU 
                                                   & vlSelf->top__DOT__Instr))) {
                                        if ((IData)(
                                                    (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__Instr)))) {
                                            vlSelf->top__DOT__MemWrite = 1U;
                                        } else if ((IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__Instr)))) {
                                            vlSelf->top__DOT__MemWrite = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((IData)((0x67U == (0x707fU 
                                           & vlSelf->top__DOT__Instr)))) {
                        vlSelf->top__DOT__PCsrc = 2U;
                    } else if ((IData)((0x1063U == 
                                        (0x707fU & vlSelf->top__DOT__Instr)))) {
                        if ((vlSelf->top__DOT__rd1 
                             != vlSelf->top__DOT__ALUop2)) {
                            vlSelf->top__DOT__PCsrc = 1U;
                        }
                    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__Instr))) {
                        vlSelf->top__DOT__PCsrc = 1U;
                    }
                }
            }
        }
        if ((IData)((0x1013U == (0x707fU & vlSelf->top__DOT__Instr)))) {
            vlSelf->top__DOT__ALUctrlCU = 1U;
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__ALUctrlCU))) {
        vlSelf->top__DOT__ALUresult = (vlSelf->top__DOT__rd1 
                                       + vlSelf->top__DOT__ALUop2);
    } else if (VL_LIKELY((1U == (IData)(vlSelf->top__DOT__ALUctrlCU)))) {
        vlSelf->top__DOT__ALUresult = (vlSelf->top__DOT__rd1 
                                       << 1U);
    } else {
        vlSelf->top__DOT__ALUresult = 0U;
        VL_WRITEF("invalid\n");
    }
    if ((1U & ((~ (IData)(vlSelf->top__DOT__MemWrite)) 
               & (~ (IData)(vlSelf->top__DOT__Addr_mode))))) {
        vlSelf->top__DOT__ReadData = ((0xffffff00U 
                                       & vlSelf->top__DOT__ReadData) 
                                      | vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                      [(0x1ffffU & vlSelf->top__DOT__ALUresult)]);
        vlSelf->top__DOT__ReadData = ((0xffff00ffU 
                                       & vlSelf->top__DOT__ReadData) 
                                      | (vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->top__DOT__ALUresult))] 
                                         << 8U));
        vlSelf->top__DOT__ReadData = ((0xff00ffffU 
                                       & vlSelf->top__DOT__ReadData) 
                                      | (vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                         [(0x1ffffU 
                                           & ((IData)(2U) 
                                              + vlSelf->top__DOT__ALUresult))] 
                                         << 0x10U));
        vlSelf->top__DOT__ReadData = ((0xffffffU & vlSelf->top__DOT__ReadData) 
                                      | (vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                         [(0x1ffffU 
                                           & ((IData)(3U) 
                                              + vlSelf->top__DOT__ALUresult))] 
                                         << 0x18U));
    }
    if (((~ (IData)(vlSelf->top__DOT__MemWrite)) & (IData)(vlSelf->top__DOT__Addr_mode))) {
        vlSelf->top__DOT__ReadData = ((0xffffff00U 
                                       & vlSelf->top__DOT__ReadData) 
                                      | ((2U & vlSelf->top__DOT__ALUresult)
                                          ? ((1U & vlSelf->top__DOT__ALUresult)
                                              ? vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                             [(0x1ffffU 
                                               & ((IData)(3U) 
                                                  + vlSelf->top__DOT__ALUresult))]
                                              : vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                             [(0x1ffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->top__DOT__ALUresult))])
                                          : ((1U & vlSelf->top__DOT__ALUresult)
                                              ? vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + vlSelf->top__DOT__ALUresult))]
                                              : vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                             [(0x1ffffU 
                                               & vlSelf->top__DOT__ALUresult)])));
    }
    vlSelf->top__DOT__Result = ((2U & (IData)(vlSelf->top__DOT__ResultSrc))
                                 ? ((1U & (IData)(vlSelf->top__DOT__ResultSrc))
                                     ? (0xffU & vlSelf->top__DOT__ReadData)
                                     : ((IData)(4U) 
                                        + vlSelf->top__DOT__PC))
                                 : ((1U & (IData)(vlSelf->top__DOT__ResultSrc))
                                     ? vlSelf->top__DOT__ReadData
                                     : vlSelf->top__DOT__ALUresult));
    vlSelf->top__DOT__next_PC = ((0U == (IData)(vlSelf->top__DOT__PCsrc))
                                  ? ((IData)(4U) + vlSelf->top__DOT__PC)
                                  : ((1U == (IData)(vlSelf->top__DOT__PCsrc))
                                      ? (vlSelf->top__DOT__PC 
                                         + vlSelf->top__DOT__ImmOp)
                                      : ((2U == (IData)(vlSelf->top__DOT__PCsrc))
                                          ? vlSelf->top__DOT__Result
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__PC))));
}

VL_ATTR_COLD void VALU___024root___eval_initial(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial\n"); );
    // Body
    VALU___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VALU___024root___eval_settle(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_settle\n"); );
    // Body
    VALU___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VALU___024root___final(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___final\n"); );
}

VL_ATTR_COLD void VALU___024root___ctor_var_reset(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUctrlCU = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUresult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ReadData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Addr_mode = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<201064704; ++__Vi0) {
        vlSelf->top__DOT__instrmem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__read_data1__DOT__mem_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

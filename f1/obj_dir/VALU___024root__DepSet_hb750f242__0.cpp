// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

VL_INLINE_OPT void VALU___024root___sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__read_data1__DOT__mem_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__read_data1__DOT__mem_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__read_data1__DOT__mem_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v4;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v5;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v6;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v7;
    // Body
    __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v0 = 0U;
    __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v4 = 0U;
    __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v5 = 0U;
    __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v6 = 0U;
    __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v7 = 0U;
    __Vdlyvset__top__DOT__read_data1__DOT__mem_array__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__MemWrite) & (~ (IData)(vlSelf->top__DOT__Addr_mode)))) {
        __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v0 
            = (0xffU & vlSelf->top__DOT__rd2);
        __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v0 
            = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUresult));
        __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v1 
            = (0xffU & (vlSelf->top__DOT__rd2 >> 8U));
        __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v1 
            = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUresult));
        __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v2 
            = (0xffU & (vlSelf->top__DOT__rd2 >> 0x10U));
        __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v2 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUresult));
        __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v3 
            = (vlSelf->top__DOT__rd2 >> 0x18U);
        __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v3 
            = (0x1ffffU & vlSelf->top__DOT__ALUresult);
    }
    if (((IData)(vlSelf->top__DOT__MemWrite) & (IData)(vlSelf->top__DOT__Addr_mode))) {
        if ((2U & vlSelf->top__DOT__ALUresult)) {
            if ((1U & vlSelf->top__DOT__ALUresult)) {
                __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v4 
                    = (0xffU & vlSelf->top__DOT__rd2);
                __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v4 = 1U;
                __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v4 
                    = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUresult));
            } else {
                __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v5 
                    = (0xffU & vlSelf->top__DOT__rd2);
                __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v5 = 1U;
                __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v5 
                    = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUresult));
            }
        } else if ((1U & vlSelf->top__DOT__ALUresult)) {
            __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v6 
                = (0xffU & vlSelf->top__DOT__rd2);
            __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v6 = 1U;
            __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v6 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUresult));
        } else {
            __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v7 
                = (0xffU & vlSelf->top__DOT__rd2);
            __Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v7 = 1U;
            __Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v7 
                = (0x1ffffU & vlSelf->top__DOT__ALUresult);
        }
    }
    if (((IData)(vlSelf->top__DOT__RegWrite) & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__Instr 
                                                    >> 7U))))) {
        __Vdlyvval__top__DOT__read_data1__DOT__mem_array__v0 
            = vlSelf->top__DOT__Result;
        __Vdlyvset__top__DOT__read_data1__DOT__mem_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__read_data1__DOT__mem_array__v0 
            = (0x1fU & (vlSelf->top__DOT__Instr >> 7U));
    }
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__next_PC);
    if (__Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v0) {
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v0] 
            = __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v0;
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v1] 
            = __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v1;
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v2] 
            = __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v2;
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v3] 
            = __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v3;
    }
    if (__Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v4) {
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v4] 
            = __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v4;
    }
    if (__Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v5) {
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v5] 
            = __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v5;
    }
    if (__Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v6) {
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v6] 
            = __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v6;
    }
    if (__Vdlyvset__top__DOT__DataMem__DOT__data_mem_array__v7) {
        vlSelf->top__DOT__DataMem__DOT__data_mem_array[__Vdlyvdim0__top__DOT__DataMem__DOT__data_mem_array__v7] 
            = __Vdlyvval__top__DOT__DataMem__DOT__data_mem_array__v7;
    }
    if (__Vdlyvset__top__DOT__read_data1__DOT__mem_array__v0) {
        vlSelf->top__DOT__read_data1__DOT__mem_array[__Vdlyvdim0__top__DOT__read_data1__DOT__mem_array__v0] 
            = __Vdlyvval__top__DOT__read_data1__DOT__mem_array__v0;
    }
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
    VL_WRITEF("Instr: %x\nPCSrc: %b\na0:  %10#\n",32,
              vlSelf->top__DOT__Instr,2,(IData)(vlSelf->top__DOT__PCsrc),
              32,vlSelf->a0);
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

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VALU___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

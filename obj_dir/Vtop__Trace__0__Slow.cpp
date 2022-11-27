// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBus(c+85,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+86,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBus(c+85,"a0", false,-1, 31,0);
    tracep->declBus(c+29,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+30,"PC", false,-1, 31,0);
    tracep->declBus(c+31,"Instr", false,-1, 31,0);
    tracep->declBit(c+32,"EQ", false,-1);
    tracep->declBus(c+33,"Result", false,-1, 31,0);
    tracep->declBit(c+34,"ResultSrc", false,-1);
    tracep->declBit(c+35,"RegWrite", false,-1);
    tracep->declBus(c+87,"ALUctrlCU", false,-1, 2,0);
    tracep->declBit(c+36,"ALUsrc", false,-1);
    tracep->declBit(c+37,"ImmSrc", false,-1);
    tracep->declBit(c+38,"PCsrc", false,-1);
    tracep->declBus(c+39,"rd1", false,-1, 31,0);
    tracep->declBus(c+40,"rd2", false,-1, 31,0);
    tracep->declBus(c+41,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+42,"ALUresult", false,-1, 31,0);
    tracep->declBus(c+43,"ReadData", false,-1, 31,0);
    tracep->declBit(c+88,"MemWrite", false,-1);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+31,"instr", false,-1, 31,0);
    tracep->declBit(c+32,"EQ", false,-1);
    tracep->declBit(c+88,"MemWrite", false,-1);
    tracep->declBit(c+35,"RegWrite", false,-1);
    tracep->declBus(c+87,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+36,"ALUsrc", false,-1);
    tracep->declBit(c+37,"ImmSrc", false,-1);
    tracep->declBit(c+38,"PCsrc", false,-1);
    tracep->declBit(c+34,"ResultSrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBus(c+89,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+88,"we", false,-1);
    tracep->declBus(c+44,"a", false,-1, 19,0);
    tracep->declBus(c+40,"wd", false,-1, 31,0);
    tracep->declBus(c+43,"ReadData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExt ");
    tracep->declBus(c+31,"instr", false,-1, 31,0);
    tracep->declBit(c+37,"ImmSrc", false,-1);
    tracep->declBus(c+29,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+90,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+41,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+87,"ALUctrlCU", false,-1, 2,0);
    tracep->declBus(c+42,"Sum", false,-1, 31,0);
    tracep->declBit(c+32,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instrmem ");
    tracep->declBus(c+86,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+91,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"PC", false,-1, 31,0);
    tracep->declBus(c+31,"Instr", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcreg ");
    tracep->declBus(c+86,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBit(c+38,"PCsrc", false,-1);
    tracep->declBus(c+30,"PC", false,-1, 31,0);
    tracep->declBus(c+45,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+46,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+47,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("read_data1 ");
    tracep->declBus(c+92,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"rs1", false,-1, 4,0);
    tracep->declBus(c+49,"rs2", false,-1, 4,0);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+35,"RegWrite", false,-1);
    tracep->declBus(c+33,"write_data3", false,-1, 31,0);
    tracep->declBus(c+39,"rd1", false,-1, 31,0);
    tracep->declBus(c+40,"rd2", false,-1, 31,0);
    tracep->declBus(c+85,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+51+i*1,"mem_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+86,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+40,"regOp2", false,-1, 31,0);
    tracep->declBus(c+29,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+36,"ALUsrc", false,-1);
    tracep->declBus(c+41,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__instrmem__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__instrmem__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__instrmem__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__instrmem__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__instrmem__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__instrmem__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__instrmem__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__instrmem__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__instrmem__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__instrmem__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__instrmem__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__instrmem__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__instrmem__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__instrmem__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__instrmem__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__instrmem__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__instrmem__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__instrmem__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__instrmem__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__instrmem__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__instrmem__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__instrmem__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__instrmem__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__instrmem__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__instrmem__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__instrmem__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__instrmem__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__instrmem__DOT__rom_array[27]),8);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__Instr),32);
    bufp->fullBit(oldp+32,((vlSelf->top__DOT__rd1 == vlSelf->top__DOT__ALUop2)));
    bufp->fullIData(oldp+33,(((IData)(vlSelf->top__DOT__ResultSrc)
                               ? ((vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                   [(0xfffffU & vlSelf->top__DOT__ALUresult)] 
                                   << 0x18U) | ((vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                                 [(0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__ALUresult))] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                                    [
                                                    (0xfffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->top__DOT__ALUresult))] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                                   [
                                                   (0xfffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelf->top__DOT__ALUresult))])))
                               : vlSelf->top__DOT__ALUresult)),32);
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__ResultSrc));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__ALUsrc));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__ImmSrc));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__PCsrc));
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__rd1),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__rd2),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ALUop2),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__ALUresult),32);
    bufp->fullIData(oldp+43,(((vlSelf->top__DOT__DataMem__DOT__data_mem_array
                               [(0xfffffU & vlSelf->top__DOT__ALUresult)] 
                               << 0x18U) | ((vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                             [(0xfffffU 
                                               & ((IData)(1U) 
                                                  + vlSelf->top__DOT__ALUresult))] 
                                             << 0x10U) 
                                            | ((vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                                [(0xfffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->top__DOT__ALUresult))] 
                                                << 8U) 
                                               | vlSelf->top__DOT__DataMem__DOT__data_mem_array
                                               [(0xfffffU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->top__DOT__ALUresult))])))),32);
    bufp->fullIData(oldp+44,((0xfffffU & vlSelf->top__DOT__ALUresult)),20);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__pcreg__DOT__branch_PC),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__pcreg__DOT__inc_PC),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__pcreg__DOT__next_PC),32);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__read_data1__DOT__mem_array[0]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__read_data1__DOT__mem_array[1]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__read_data1__DOT__mem_array[2]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__read_data1__DOT__mem_array[3]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__read_data1__DOT__mem_array[4]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__read_data1__DOT__mem_array[5]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__read_data1__DOT__mem_array[6]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__read_data1__DOT__mem_array[7]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__read_data1__DOT__mem_array[8]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__read_data1__DOT__mem_array[9]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__read_data1__DOT__mem_array[10]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__read_data1__DOT__mem_array[11]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__read_data1__DOT__mem_array[12]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__read_data1__DOT__mem_array[13]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__read_data1__DOT__mem_array[14]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__read_data1__DOT__mem_array[15]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__read_data1__DOT__mem_array[16]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__read_data1__DOT__mem_array[17]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__read_data1__DOT__mem_array[18]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__read_data1__DOT__mem_array[19]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__read_data1__DOT__mem_array[20]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__read_data1__DOT__mem_array[21]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__read_data1__DOT__mem_array[22]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__read_data1__DOT__mem_array[23]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__read_data1__DOT__mem_array[24]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__read_data1__DOT__mem_array[25]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__read_data1__DOT__mem_array[26]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__read_data1__DOT__mem_array[27]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__read_data1__DOT__mem_array[28]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__read_data1__DOT__mem_array[29]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__read_data1__DOT__mem_array[30]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__read_data1__DOT__mem_array[31]),32);
    bufp->fullBit(oldp+83,(vlSelf->clk));
    bufp->fullBit(oldp+84,(vlSelf->rst));
    bufp->fullIData(oldp+85,(vlSelf->a0),32);
    bufp->fullIData(oldp+86,(0x20U),32);
    bufp->fullCData(oldp+87,(0U),3);
    bufp->fullBit(oldp+88,(0U));
    bufp->fullIData(oldp+89,(0x14U),32);
    bufp->fullIData(oldp+90,(3U),32);
    bufp->fullIData(oldp+91,(8U),32);
    bufp->fullIData(oldp+92,(5U),32);
}

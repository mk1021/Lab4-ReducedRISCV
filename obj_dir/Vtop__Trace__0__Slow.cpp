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
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBus(c+51,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+52,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBus(c+51,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+3,"Instr", false,-1, 31,0);
    tracep->declBit(c+4,"EQ", false,-1);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBit(c+53,"ALUsrc", false,-1);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+54,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+55,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+53,"ALUsrc", false,-1);
    tracep->declBit(c+4,"EQ", false,-1);
    tracep->declBus(c+51,"a0", false,-1, 31,0);
    tracep->declBus(c+11,"rd1", false,-1, 31,0);
    tracep->declBus(c+12,"rd2", false,-1, 31,0);
    tracep->declBus(c+12,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+13,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+56,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+12,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+55,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+13,"Sum", false,-1, 31,0);
    tracep->declBit(c+4,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("read_data1 ");
    tracep->declBus(c+54,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBus(c+13,"write_data3", false,-1, 31,0);
    tracep->declBus(c+11,"rd1", false,-1, 31,0);
    tracep->declBus(c+12,"rd2", false,-1, 31,0);
    tracep->declBus(c+51,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,"mem_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+52,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"regOp2", false,-1, 31,0);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+53,"ALUsrc", false,-1);
    tracep->declBus(c+12,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBit(c+4,"EQ", false,-1);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBus(c+55,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+53,"ALUsrc", false,-1);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExt ");
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBit(c+6,"ImmSrc", false,-1);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instrmem ");
    tracep->declBus(c+57,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+3,"Instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcreg ");
    tracep->declBus(c+52,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"rst", false,-1);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+46,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+47,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+48,"next_PC", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(((IData)(vlSelf->top__DOT__ImmSrc)
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
                                  << 0xcU) | (0xfffU 
                                              & vlSelf->top__DOT__Instr)))),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__Instr),32);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__EQ));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__ImmSrc));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__PCsrc));
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->top__DOT__Instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->top__DOT__Instr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__ALU__DOT__rd1),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__ALU__DOT__rd2),32);
    bufp->fullIData(oldp+13,((vlSelf->top__DOT__ALU__DOT__rd1 
                              + vlSelf->top__DOT__ALU__DOT__rd2)),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[16]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[17]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[18]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[19]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[20]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[21]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[22]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[23]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[24]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[25]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[26]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[27]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[28]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[29]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[30]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__ALU__DOT__read_data1__DOT__mem_array[31]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__pcreg__DOT__branch_PC),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__pcreg__DOT__inc_PC),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__pcreg__DOT__next_PC),32);
    bufp->fullBit(oldp+49,(vlSelf->clk));
    bufp->fullBit(oldp+50,(vlSelf->rst));
    bufp->fullIData(oldp+51,(vlSelf->a0),32);
    bufp->fullIData(oldp+52,(0x20U),32);
    bufp->fullBit(oldp+53,(1U));
    bufp->fullIData(oldp+54,(5U),32);
    bufp->fullCData(oldp+55,(0U),3);
    bufp->fullIData(oldp+56,(3U),32);
    bufp->fullIData(oldp+57,(8U),32);
}

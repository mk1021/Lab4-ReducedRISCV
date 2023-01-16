// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub__TOP__0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBit(c+56,"rst", false,-1);
    tracep->declBus(c+57,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+58,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBit(c+56,"rst", false,-1);
    tracep->declBus(c+57,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+3,"Instr", false,-1, 31,0);
    tracep->declBit(c+4,"EQ", false,-1);
    tracep->declBus(c+5,"Result", false,-1, 31,0);
    tracep->declBus(c+6,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBus(c+8,"ALUctrlCU", false,-1, 2,0);
    tracep->declBit(c+9,"ALUsrc", false,-1);
    tracep->declBus(c+10,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+11,"PCsrc", false,-1, 1,0);
    tracep->declBus(c+12,"rd1", false,-1, 31,0);
    tracep->declBus(c+13,"rd2", false,-1, 31,0);
    tracep->declBus(c+14,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+15,"ALUresult", false,-1, 31,0);
    tracep->declBus(c+16,"ReadData", false,-1, 31,0);
    tracep->declBit(c+17,"MemWrite", false,-1);
    tracep->declBit(c+18,"Addr_mode", false,-1);
    tracep->declBus(c+19,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+3,"InstrD_in", false,-1, 31,0);
    tracep->declBit(c+4,"EQ_in", false,-1);
    tracep->declBit(c+17,"MemWrite_out", false,-1);
    tracep->declBit(c+18,"Addr_mode_out", false,-1);
    tracep->declBit(c+7,"RegWrite_out", false,-1);
    tracep->declBus(c+8,"ALUctrl_out", false,-1, 2,0);
    tracep->declBit(c+9,"ALUsrc_out", false,-1);
    tracep->declBus(c+10,"ImmSrc_out", false,-1, 2,0);
    tracep->declBus(c+11,"PCsrc_out", false,-1, 1,0);
    tracep->declBus(c+6,"ResultSrc_out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBus(c+58,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+55,"clk_in", false,-1);
    tracep->declBit(c+17,"we_in", false,-1);
    tracep->declBit(c+18,"addr_mode", false,-1);
    tracep->declBus(c+15,"a_in", false,-1, 31,0);
    tracep->declBus(c+13,"wd_in", false,-1, 31,0);
    tracep->declBus(c+16,"ReadData_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExt ");
    tracep->declBus(c+3,"instr_in", false,-1, 31,0);
    tracep->declBus(c+10,"ImmSrc_in", false,-1, 2,0);
    tracep->declBus(c+1,"ImmOp_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+59,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"ALUop1_in", false,-1, 31,0);
    tracep->declBus(c+14,"ALUop2_in", false,-1, 31,0);
    tracep->declBus(c+8,"ALUctrlCU_in", false,-1, 2,0);
    tracep->declBus(c+15,"Sum_out", false,-1, 31,0);
    tracep->declBit(c+4,"EQ_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instrmem ");
    tracep->declBus(c+58,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"PC_in", false,-1, 31,0);
    tracep->declBus(c+3,"Instr_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcreg ");
    tracep->declBus(c+58,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+55,"clk_in", false,-1);
    tracep->declBit(c+56,"rst_in", false,-1);
    tracep->declBus(c+2,"PC_out", false,-1, 31,0);
    tracep->declBus(c+19,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("read_data1 ");
    tracep->declBus(c+61,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"rs1_in", false,-1, 4,0);
    tracep->declBus(c+21,"rs2_in", false,-1, 4,0);
    tracep->declBus(c+22,"rd_in", false,-1, 4,0);
    tracep->declBit(c+55,"clk_in", false,-1);
    tracep->declBit(c+7,"RegWrite_in", false,-1);
    tracep->declBus(c+5,"write_data3_in", false,-1, 31,0);
    tracep->declBus(c+12,"rd1_out", false,-1, 31,0);
    tracep->declBus(c+13,"rd2_out", false,-1, 31,0);
    tracep->declBus(c+57,"a0_out", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+23+i*1,"mem_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"regOp2_in", false,-1, 31,0);
    tracep->declBus(c+1,"ImmOpE_in", false,-1, 31,0);
    tracep->declBit(c+9,"ALUsrc_in", false,-1);
    tracep->declBus(c+14,"ALUop2_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__Instr),32);
    bufp->fullBit(oldp+4,((vlSelf->top__DOT__rd1 == vlSelf->top__DOT__ALUop2)));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__Result),32);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__ResultSrc),2);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__RegWrite));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ALUctrlCU),3);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ALUsrc));
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__ImmSrc),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__PCsrc),2);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__rd1),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__rd2),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ALUop2),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ALUresult),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ReadData),32);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__MemWrite));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__Addr_mode));
    bufp->fullIData(oldp+19,(((0U == (IData)(vlSelf->top__DOT__PCsrc))
                               ? ((IData)(4U) + vlSelf->top__DOT__PC)
                               : ((1U == (IData)(vlSelf->top__DOT__PCsrc))
                                   ? (vlSelf->top__DOT__PC 
                                      + vlSelf->top__DOT__ImmOp)
                                   : ((2U == (IData)(vlSelf->top__DOT__PCsrc))
                                       ? vlSelf->top__DOT__Result
                                       : ((IData)(4U) 
                                          + vlSelf->top__DOT__PC))))),32);
    bufp->fullCData(oldp+20,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+21,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+22,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__read_data1__DOT__mem_array[0]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__read_data1__DOT__mem_array[1]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__read_data1__DOT__mem_array[2]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__read_data1__DOT__mem_array[3]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__read_data1__DOT__mem_array[4]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__read_data1__DOT__mem_array[5]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__read_data1__DOT__mem_array[6]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__read_data1__DOT__mem_array[7]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__read_data1__DOT__mem_array[8]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__read_data1__DOT__mem_array[9]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__read_data1__DOT__mem_array[10]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__read_data1__DOT__mem_array[11]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__read_data1__DOT__mem_array[12]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__read_data1__DOT__mem_array[13]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__read_data1__DOT__mem_array[14]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__read_data1__DOT__mem_array[15]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__read_data1__DOT__mem_array[16]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__read_data1__DOT__mem_array[17]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__read_data1__DOT__mem_array[18]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__read_data1__DOT__mem_array[19]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__read_data1__DOT__mem_array[20]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__read_data1__DOT__mem_array[21]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__read_data1__DOT__mem_array[22]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__read_data1__DOT__mem_array[23]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__read_data1__DOT__mem_array[24]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__read_data1__DOT__mem_array[25]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__read_data1__DOT__mem_array[26]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__read_data1__DOT__mem_array[27]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__read_data1__DOT__mem_array[28]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__read_data1__DOT__mem_array[29]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__read_data1__DOT__mem_array[30]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__read_data1__DOT__mem_array[31]),32);
    bufp->fullBit(oldp+55,(vlSelf->clk));
    bufp->fullBit(oldp+56,(vlSelf->rst));
    bufp->fullIData(oldp+57,(vlSelf->a0),32);
    bufp->fullIData(oldp+58,(0x20U),32);
    bufp->fullIData(oldp+59,(3U),32);
    bufp->fullIData(oldp+60,(8U),32);
    bufp->fullIData(oldp+61,(5U),32);
}

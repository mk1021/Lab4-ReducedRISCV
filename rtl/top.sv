module top#(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

logic       [WIDTH-1:0]         ImmOp;
logic       [WIDTH-1:0]         PC;
logic       [WIDTH-1:0]         Instr;
logic                           EQ;
logic       [WIDTH-1:0]         Result;
logic       [1:0]               ResultSrc;
logic                           RegWrite;
logic       [2:0]               ALUctrlCU;
logic                           ALUsrc;
logic       [2:0]               ImmSrc;
logic       [1:0]               PCsrc;
logic       [WIDTH-1:0]         rd1 ; // wire connecting RD1 output to ALUop1
logic       [WIDTH-1:0]         rd2 ; // wire connecting RD2 output to multiplexer
logic       [WIDTH-1:0]         ALUop2 ; // wire connecting multiplexer into input of ALU
logic       [WIDTH-1:0]         ALUresult ; // wire connecting output of ALU to regfile WD3
logic       [WIDTH-1:0]         ReadData;
logic                           MemWrite;// data_mem write enable
logic                           Addr_mode; //Picks between load/store word OR byte.
logic       [WIDTH-1:0]         next_PC; 

////////////////// Control signals /////////////////////////////////////
  
    always_comb begin
        case(PCsrc)
        2'b00: next_PC = PC +4; //addi/slli (normal increment)
        2'b01: next_PC = PC + ImmOp; //branch
        2'b10: next_PC = Result;  //jlr
        default: next_PC = PC +4;
        endcase 
    end


always_comb begin
    case(ResultSrc)
      2'b00: Result = ALUresult; //bne, addi, slli
      2'b01: Result = ReadData; //lw
      2'b10: Result = PC + 4; //jal 
      2'b11: Result = {{24'b0},{ReadData[7:0]}}; //lbu
      default: Result = ALUresult;
    endcase
  end

///////////////////////////////////////////////////////////////////////


pc pcreg(
    .clk_in(clk),
    .rst_in(rst),
    .PC_out(PC),
    .next_PC(next_PC)
);

instrmem instrmem(
    .PC_in(PC),
    .Instr_out(Instr)
);

controlunit CU(
    .ResultSrc_out(ResultSrc),
    .InstrD_in(Instr),
    .EQ_in(EQ),
    .MemWrite_out(MemWrite),
    .RegWrite_out(RegWrite),
    .Addr_mode_out(Addr_mode),
    .ALUctrl_out(ALUctrlCU),
    .ALUsrc_out(ALUsrc),
    .ImmSrc_out(ImmSrc),
    .PCsrc_out(PCsrc)
);

regfile read_data1 (
    .clk_in(clk),
    .rd1_out(rd1),
    .rs1_in(Instr[19:15]),
    .rs2_in(Instr[24:20]),
    .rd_in(Instr[11:7]),
    .RegWrite_in(RegWrite),
    .write_data3_in(Result),
    .rd2_out(rd2), 
    .a0_out(a0)
);

signextend SignExt(
    .instr_in(Instr),
    .ImmOp_out(ImmOp),
    .ImmSrc_in(ImmSrc)
);

ALUsrc src(
    .regOp2_in(rd2),
    .ALUsrc_in(ALUsrc),
    .ImmOpE_in(ImmOp),
    .ALUop2_out(ALUop2) 
);

ALU alu(
    .ALUctrlCU_in(ALUctrlCU),
    .ALUop1_in(rd1),
    .ALUop2_in(ALUop2), 
    .Sum_out(ALUresult),
    .EQ_out(EQ)
);

datamem DataMem(
    .clk_in(clk),
    .a_in(ALUresult),
    .ReadData_out(ReadData),
    .we_in(MemWrite),
    .addr_mode(Addr_mode),
    .wd_in(rd2)
);
 

endmodule 

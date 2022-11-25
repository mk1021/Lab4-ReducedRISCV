module top#(
    parameter WIDTH = 32
    //parameter A_WIDTH = 5
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

wire        [2:0]               _unused_top;

logic       [WIDTH-1:0]         ImmOp;
logic       [WIDTH-1:0]         PC;
logic       [WIDTH-1:0]         Instr;
logic                           EQ;
logic                           RegWrite;
//logic       [2:0]             ALUctrlCU;
logic                           ALUsrc;
logic                           ImmSrc;
logic                           PCsrc;
//logic       [A_WIDTH-1:0]     rd;
logic [WIDTH-1:0]               rd1 ; // wire connecting RD1 output to ALUop1
logic [WIDTH-1:0]               rd2 ; // wire connecting RD2 output to multiplexer
logic [WIDTH-1:0]               ALUop2 ; // wire connecting multiplexer into input of ALU
logic [WIDTH-1:0]               ALUresult ; // wire connecting output of ALU to regfile WD3
logic [WIDTH-1:0]               ReadData;
logic                           MemWrite; // data_mem write enable

pc pcreg(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .ImmOp(ImmOp),
    .PC(PC)
);

instrmem instrmem(
    .PC(PC),
    .Instr(Instr)
);

controlunit CU(
    .instr(Instr),
    .EQ(EQ),
    .RegWrite(RegWrite),
    .ALUctrl(_unused_top),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc),
    .MemWrite(MemWrite)
);

signextend SignExt(
    .instr(Instr),
    .ImmOp(ImmOp),
    .ImmSrc(ImmSrc)
);

datamem DataMem(
    .a(ALUresult),
    .ReadData(ReadData),
    .we(MemWrite),
    .wd(rd2)
);

regfile read_data1 (
    .clk(clk),
    //.rst(rst), need to include
    .rd1(rd1),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .RegWrite(RegWrite),
    .write_data3(ReadData),
    .rd2(rd2), 
    .a0(a0)
);

ALUsrc src(
    .regOp2(rd2),
    .ALUsrc(ALUsrc),
    .ImmOp(ImmOp),
    .ALUop2(ALUop2) // ALUop2
);

ALU alu(
    .ALUctrl(ALUctrl),
    .ALUop1(rd1),
    .ALUop2(ALUop2), // ALUop2
    .Sum(ALUout),
    .EQ(EQ)
);

endmodule 

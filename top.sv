module top#(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

logic       [WIDTH -1:0]      ImmOp;

logic       [WIDTH -1:0]      PC;
logic       [WIDTH-1:0]       Instr;
logic                         EQ;
logic                         RegWrite;
logic                         ALUctrl;
logic                         ALUsrc;
logic                         ImmSrc;
logic                         PCsrc;
logic       [D_WIDTH-1:0]     ALUout;
logic       [A_WIDTH-1:0]     rd;

PC pcreg(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .ImmOp(ImmOp),
    .PC(PC)
);

Instrmem IM(
    .PC(PC),
    .Instr(instr)
);

ControlUnit CU(
    .instr(instr),
    .EQ(EQ),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)
);

Signext SignExt(
    .instr(instr),
    .ImmOp(ImmOp),
    .Immsrc(immsrc)
);

ALUtop ALU(
    .ALUctrl(ALUctrl),
    .clk(clk),
    .immop(immop),
    .regwrite(regwrite),
    .rs1(instr[19:15]),
    .rs2(instr[24:20]),
    .rd(instr[11:7]),
    .a0(a0)
);

endmodule 

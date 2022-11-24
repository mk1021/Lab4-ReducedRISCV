module top#(
    parameter WIDTH = 32
    //parameter A_WIDTH = 5
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

wire        [2:0]            _unused_top;

logic       [WIDTH-1:0]      ImmOp;
logic       [WIDTH-1:0]       PC;
logic       [WIDTH-1:0]       Instr;
logic                         EQ;
logic                         RegWrite;
logic       [2:0]             ALUctrl;
logic                         ALUsrc;
logic                         ImmSrc;
logic                         PCsrc;
logic EQ;
//logic       [A_WIDTH-1:0]     rd;


pc pcreg(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .ImmOp(ImmOp),
    .PC(PC)
);

// pcreg register(
//         .clk(clk),
//         .rst(rst),
//         .next_PC(PC),
//         .PC(PC)
// );

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
    .PCsrc(PCsrc)
);

signextend SignExt(
    .instr(Instr),
    .ImmOp(ImmOp),
    .ImmSrc(ImmSrc)
);

ALUtop ALU(
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .clk(clk),
    .ImmOp(ImmOp),
    .RegWrite(RegWrite),
    .rs1(Instr[19:15]),
    .rs2(Instr[24:20]),
    .rd(Instr[11:7]),
    .EQ(EQ),
    .a0(a0)
);

endmodule 

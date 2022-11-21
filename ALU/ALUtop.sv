module ALUtop #(
    parameter       A_WIDTH = 5,
    parameter       D_WIDTH = 32,
)(
    input logic [A_WIDTH-1:0]   rs1,
    input logic [A_WIDTH-1:0]   rs2,
    input logic [A_WIDTH-1:0]   rd,
    input logic                 clk,
    input logic                 RegWrite,
    // input logic [D_WIDTH-1:0]   write_data3 - wire
    input logic [D_WIDTH-1:0]   ImmOp,
    // input logic [D_WIDTH-1:0]   ALUop2
    input logic [2:0]           ALUctrl, //needed?
    output logic [D_WIDTH-1:0]  ALUout,
    output logic                a0

);

logic [D_WIDTH-1:0]             rd1 ; // wire connecting RD1 output to ALUop1
logic [D_WIDTH-1:0]             rd2 ; // wire connecting RD2 output to multiplexer
logic [D_WIDTH-1:0]             ALUop2 ; // wire connecting multiplexer into input of ALU
logic [D_WIDTH-1:0]             ALUout ; // wire connecting output of ALU to regfile WD3

regfile read_data1 (
    .clk(clk),
    //.rst(rst), need to include
    .rd1(rd1),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .RegWrite(RegWrite),
    .write_data3(ALUout), //or should it be write_data3?
    .a0(a0)

);

//assign ALUop2 = ALUsrc ? ImmOp:regOp2;
//HOW TO SEND regop 2 USE A WIRE OR NOT?????????????????????/
//CAN I DO THE MULTIPLEXER STATEMENT HERE?
ALUsrc multiplexer(
    .regOp2(rd2),
    .ImmOp(Immop),
    .ALUop2(ALUop2)
)

ALU alu(
    .ALUctrl(),
    .ALUop1(rd1),
    .ALUop2(ALUop2),
    .ALUout(ALUout),
    .EQ(EQ)
)


endmodule
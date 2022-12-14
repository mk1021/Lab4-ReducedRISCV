module top#(
    parameter WIDTH = 32
    //parameter A_WIDTH = 5
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

always_comb 
    $display("a0: ", a0);

// logic        [2:0]               _unused_top;

logic       [WIDTH-1:0]          ImmOp;
logic       [WIDTH-1:0]         PC;
logic       [WIDTH-1:0]         Instr;
logic                           EQ;
logic       [WIDTH-1:0]         Result;
logic                           ResultSrc;
logic                           RegWrite;
logic       [2:0]             ALUctrlCU;
logic                           ALUsrc;
// logic                        sum;
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

//assign rd1 = Instr[19:15];
//assign rd2 = Instr[24:20];
//assign Instr = Instr[11:7];

controlunit CU(
    .ResultSrc(ResultSrc),
    .instr(Instr),
    .EQ(EQ),
    .MemWrite(MemWrite),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrlCU),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)
);

//result mux
assign Result = ResultSrc ? ReadData : ALUresult;

regfile read_data1 (
    .clk(clk),
    //.rst(rst), need to include
    .rd1(rd1),
    .rs1(Instr[19:15]),
    .rs2(Instr[24:20]),
    .rd(Instr[11:7]),
    .RegWrite(RegWrite),
    .write_data3(Result),
    .rd2(rd2), 
    .a0(a0)
);

signextend SignExt(
    .instr(Instr),
    .ImmOp(ImmOp),
    .ImmSrc(ImmSrc)
);

datamem DataMem(
    .clk(clk),
    .a(ALUresult[19:0]),
    .ReadData(ReadData),
    .we(MemWrite),
    .wd(rd2)
);

ALUsrc src(
    .regOp2(rd2),
    .ALUsrc(ALUsrc),
    .ImmOp(ImmOp),
    .ALUop2(ALUop2) // ALUop2
);

ALU alu(
    .ALUctrlCU(ALUctrlCU),
    .ALUop1(rd1),
    .ALUop2(ALUop2), // ALUop2
    .Sum(ALUresult),
    .EQ(EQ)
);

endmodule 

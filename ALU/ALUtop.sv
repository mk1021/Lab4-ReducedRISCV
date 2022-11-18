module ALU (
    input logic         ALUop1,
    input logic         ALUop2,
    input logic         ALUctrl,
    output logic        ALUout,
    output logic        EQ
);

assign 
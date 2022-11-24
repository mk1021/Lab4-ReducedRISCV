module controlunit(
    input  logic [31:0] instr,
    input  logic EQ,
    output logic RegWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic ImmSrc, //1
    output logic PCsrc
);

wire [21:0] _unused = {instr[31:15], instr[11:7]};

always_comb
    begin
        RegWrite = 0; ALUctrl = 0; ALUsrc = 1; ImmSrc = 0; PCsrc = 0;
        if (instr[6:0] == 7'b1100011 && instr[14:12] == 3'b1) // branch - bne
        begin  
            ImmSrc = 1; PCsrc = 1; 
        end
        else if (instr[6:0] == 7'h13 && instr[14:12] == 3'b0) // addi 
        begin
            RegWrite =1; 
        end
    end 

endmodule

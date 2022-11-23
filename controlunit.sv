module controlunit(
    input  logic [31:0] instr,
    input  logic EQ, // ERROR - signal not used
    output logic [22:1] dontneed, 
    output logic RegWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic ImmSrc, //1
    output logic PCsrc
);

// 'EQ is not used' - ERROR

always_comb
    begin
        RegWrite = 0; ALUctrl = 0; ALUsrc = 1; ImmSrc = 0; PCsrc = 0;
        if (instr[6:0] == 7'h69 && instr[14:12] == 3'b1) // branch - bne
        begin  
            ImmSrc = 1; PCsrc = 1; 
        end
        else if (instr[6:0] == 7'h13 && instr[14:12] == 3'b0) // addi 
        begin
            RegWrite =1; 
        end

        dontneed = {instr[31:15],instr[11:7]}; 
        // shouldn't actually need this however a warning keeps coming saying bits of the instr instruction are not being used

    end 
endmodule

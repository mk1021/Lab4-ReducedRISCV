module controlunit(
    input  logic [31:0] instr,
    input  logic EQ,
    output logic MemWrite,
    output logic RegWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic ImmSrc, //1
    output logic PCsrc,
    output logic ResultSrc
);

wire [21:0] _unused = {instr[31:15], instr[11:7]};

always_comb
    begin
<<<<<<< HEAD
        RegWrite = 0; ALUctrl = 0; ALUsrc = 1; ImmSrc = 1; PCsrc = 0; //default bne
=======
        RegWrite = 0; ALUctrl = 0; ALUsrc = 1; ImmSrc = 0; PCsrc = 0; MemWrite = 0; ResultSrc = 0;//default bne
>>>>>>> d4a97262c501f49c5058203dfaf4be0ead5d1a02
        if (instr[6:0] == 7'b1100011 && instr[14:12] == 3'b1) // branch - bne but inputs are equal
        begin 
            ResultSrc = 0;
            ImmSrc = 1; 
            ALUsrc = 0;
            if (!EQ) 
            begin    
                PCsrc = 1; 
            end
        end

        else if (instr[6:0] == 7'b0000011)
        begin 
            // load word instruction
            RegWrite = 1;
            ResultSrc = 1;
        end

        else if (instr[6:0] == 7'h13 && instr[14:12] == 3'b0) // addi 
        begin
            RegWrite = 1; 
            ImmSrc = 0;
            PCsrc = 0;
        end
    end 

endmodule

//PUT IN EQ CONDITION FOR THE BNE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!11
//right now it sees its a bne instr and just branches whether or not condition is chgit config ecked.

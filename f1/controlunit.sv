module controlunit(
    input  logic [31:0] InstrD_in,
    input  logic        EQ_in,
    output logic        MemWrite_out,
    output logic        Addr_mode_out, //controls whether it is a load/store word or byte (0- word, 1-byte)
    output logic        RegWrite_out,
    output logic [2:0]  ALUctrl_out,
    output logic        ALUsrc_out,
    output logic [2:0]  ImmSrc_out, 
    output logic [1:0]  PCsrc_out,
    output logic [1:0]  ResultSrc_out
);

wire [21:0] _unused = {InstrD_in[31:15], InstrD_in[11:7]};

always_comb      
    begin
        //default control signals set to 0
        RegWrite_out = 0; 
        ALUctrl_out = 3'b0; 
        ALUsrc_out = 1'b0; 
        ImmSrc_out = 3'b000; 
        PCsrc_out = 2'b00; 
        MemWrite_out = 1'b0; 
        Addr_mode_out = 1'b0;
        ResultSrc_out = 2'b00; 

        ///////////////////////////// I- type ////////////////////////////////

        if (InstrD_in[6:0] == 7'h13 && InstrD_in[14:12] == 3'b0) // addi 
        begin
            RegWrite_out = 1; 
            ImmSrc_out = 3'b001;
            ALUsrc_out = 1'b1;
        end

         else if (InstrD_in[6:0] == 7'b0010011 && InstrD_in[14:12] == 3'b001) // SSLI
        begin
            RegWrite_out = 1;
            ALUsrc_out = 1'b1;
            ALUctrl_out = 3'b001;
        end

         else if (InstrD_in[6:0] == 7'b0000011 && InstrD_in[14:12] == 3'b010) // load word instruction
        begin 
            RegWrite_out = 1;
            ResultSrc_out = 2'b01;
            ALUsrc_out = 1'b1;
            ImmSrc_out = 3'b001;
        end

         else if (InstrD_in[6:0] == 7'b0000011 && InstrD_in[14:12] == 3'b100) // lbu
        begin 
            RegWrite_out = 1;
            ALUsrc_out = 1'b1;
            ImmSrc_out = 3'b001;
            ResultSrc_out = 2'b11;
            Addr_mode_out = 1'b1;
        end

         else if (InstrD_in[6:0] == 7'b1100111 && InstrD_in[14:12] == 3'b0) // JALR
        begin
            ImmSrc_out = 3'b010;
            PCsrc_out = 2'b10;
            RegWrite_out = 1'b1;  
            ALUsrc_out = 1'b1;
        end

        ///////////////////////////// B- type ////////////////////////////////

        else if (InstrD_in[6:0] == 7'b1100011 && InstrD_in[14:12] == 3'b001) // bne
        begin
            if (!EQ_in)
                begin 
                    PCsrc_out = 2'b01;  
                end
        end

        ///////////////////////////// J- type ////////////////////////////////

        else if (InstrD_in[6:0] == 7'b1101111) // JAL
        begin
            PCsrc_out = 2'b01; 
            ImmSrc_out = 3'b011;
            RegWrite_out = 1'b1;
            ResultSrc_out = 2'b10;
            ALUsrc_out = 1'b1;
        end

        ///////////////////////////// R- type ////////////////////////////////


       else if (InstrD_in[6:0] == 7'b0110011 && InstrD_in[14:12] == 3'b0) // add
        begin
            RegWrite_out = 1; 
            ImmSrc_out = 3'b001;
        end

        ///////////////////////////// U- type ////////////////////////////////

        else if (InstrD_in[6:0] == 7'b0110111) // lui
        begin
            RegWrite_out = 1; 
            ALUsrc_out = 1'b1;
            ImmSrc_out = 3'b100;
        end

        ///////////////////////////// S- type ////////////////////////////////
        
        else if (InstrD_in[6:0] == 7'b0100011 && InstrD_in[14:12] == 3'b010) // store word 
        begin 
            MemWrite_out = 1'b1;
            ALUsrc_out = 1'b1;
        end

         else if (InstrD_in[6:0] == 7'b0100011 && InstrD_in[14:12] == 3'b000) // store byte (sb)
        begin 
            MemWrite_out = 1'b1;
            ALUsrc_out = 1'b1;
            Addr_mode_out = 1'b1;
        end
    
    end 
endmodule

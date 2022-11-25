module ALU #(
    parameter 
                    ADDRESS_WIDTH =3,
                    DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0]        ALUop1,
    input logic [DATA_WIDTH-1:0]        ALUop2,
    input logic [ADDRESS_WIDTH-1:0]     ALUctrlCU,
    output logic [DATA_WIDTH-1:0]       Sum,
    output logic                        EQ
);

    always_comb begin
        case(ALUctrlCU)
            3'b000: Sum = ALUop1+ALUop2;
            //3'b001: ALUout = ALUop1-ALUop2;
            //3'b010: ALUout = ALUop1 && ALUop2;
            //3'b011: ALUout = ALUop1 || ALUop2;
            //3'b101 ALUout = SLT?
            default: begin
                Sum = 0;
                $display("invalid"); //not valid opcode 
            end
        endcase
    end 

    always EQ = ALUop1 == ALUop2;

endmodule

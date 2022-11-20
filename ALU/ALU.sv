module ALU #(
    parameter 
                    ADDRESS_WIDTH =3;
                    DATA_WIDTH = 32;
)(
    input logic [DATA_WIDTH-1:0]        ALUop1,
    input logic [DATA_WIDTH-1:0]        ALUop2,
    input logic   [ADDRESS_WIDTH-1:0]   ALUctrl,
    output logic [DATA_WIDTH-1:9]       ALUout,
    output logic                            EQ /
);

    always_comb begin
        case(ALUctrl)
            3'b000: ALUout = ALUop1+ALUop2;
            default: begin
                ALUout = 0;
            end
        endcase
    end 

    always EQ = ALUop1 == ALUop2;

endmodule
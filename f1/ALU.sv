module ALU #(
    parameter 
        ADDRESS_WIDTH =3,
        DATA_WIDTH = 32
)(
    input  logic  [DATA_WIDTH-1:0]        ALUop1_in,
    input  logic  [DATA_WIDTH-1:0]        ALUop2_in,
    input  logic  [ADDRESS_WIDTH-1:0]     ALUctrlCU_in,
    output logic  [DATA_WIDTH-1:0]        Sum_out,
    output logic                          EQ_out
);

    always_comb begin
        case(ALUctrlCU_in)
            3'b000: Sum_out = ALUop1_in+ALUop2_in;//add
            3'b001: Sum_out = ALUop1_in << 1; //slli
            default: begin
                Sum_out = 0;
                $display("invalid"); //not valid opcode 
            end
        endcase
    end 
   
    always EQ_out = ALUop1_in == ALUop2_in;

endmodule

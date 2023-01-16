module ALUsrc #(
    parameter DATA_WIDTH = 32

)(
    input  logic [DATA_WIDTH-1:0]        regOp2_in,
    input  logic [DATA_WIDTH-1:0]        ImmOpE_in,
    input  logic                         ALUsrc_in,
    output logic [DATA_WIDTH-1:0]        ALUop2_out
);

assign ALUop2_out = ALUsrc_in ? ImmOpE_in : regOp2_in;


endmodule

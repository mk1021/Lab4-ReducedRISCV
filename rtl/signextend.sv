module signextend(
  input  logic [31:0] instr_in,
  input  logic [2:0]  ImmSrc_in,
  output reg   [31:0] ImmOp_out
);

  logic [31:0] _unused_ok;

  assign _unused_ok = instr_in[31:0];

  always_comb begin
    case(ImmSrc_in)
      3'b000: ImmOp_out = {{20{instr_in[31]}},{instr_in[7]},{instr_in[30:25]},{instr_in[11:8]}, {1'b0}}; //bne
      3'b001: ImmOp_out = {{20{instr_in[31]}},{instr_in[31:20]}}; //addi / lw
      3'b010: ImmOp_out = {{20{instr_in[31]}},{instr_in[31:20]}}; //jalr - i type instruction so addi and jal are same
      3'b011: ImmOp_out = {{12{instr_in[31]}},{instr_in[19:12]},{instr_in[20]}, {instr_in[30:21]}, {1'b0}}; //jal
      3'b100: ImmOp_out = {{instr_in[31:12]},{12'b0}}; //lui
      default: ImmOp_out = 32'b0;
    endcase
  end

endmodule

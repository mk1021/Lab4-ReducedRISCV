module signextend(
  input logic [31:0] instr,
  input logic ImmSrc,
  output reg [31:0] ImmOp
);

always_comb 
    
    ImmOpp = ImmSrc ? {{21{instr[31]}},{instr[7]},{instr[30:25]},{instr[11:8]}} : {20{instr[31]},{instr[31:12]}}

endmodule
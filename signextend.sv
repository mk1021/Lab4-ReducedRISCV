module signextend(
  input logic [31:0] instr,
  input logic ImmSrc,
  output reg [31:0] ImmOp
);

wire [12:0] _unused_ok = instr[24:12];

always_comb 
  case 
    ImmOp = ImmSrc ? {{20{instr[31]}},{instr[7]},{instr[30:25]},{instr[11:8]}, 1'b0} : {{20{instr[31]}},{instr[11:7]},{instr[6:0]}};  //0 - branch, 1 addi
    default: ImmOp = {32{1'b0}};
  endcase 
endmodule

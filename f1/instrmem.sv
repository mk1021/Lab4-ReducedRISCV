module instrmem #(
    parameter   A_WIDTH =32,
                D_WIDTH =8
)(

    input logic  [A_WIDTH-1:0] PC_in,
    output logic [A_WIDTH-1:0] Instr_out
);

logic [D_WIDTH-1:0] rom_array [32'hBFC00FF:0]; 

initial begin
        $display("Loading rom.");
        $readmemh("instrmem.mem", rom_array);
end

always_comb begin
    //output is asynchronous
    Instr_out = {{rom_array[PC_in]},{rom_array[PC_in+1]},{rom_array[PC_in+2]},{rom_array[PC_in+3]}};
end 

endmodule 

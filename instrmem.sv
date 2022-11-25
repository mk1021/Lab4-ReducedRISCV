module instrmem #(
        parameter   ADDRESS_WIDTH =32,
                    DATA_WIDTH =8
)(

    input logic [ADDRESS_WIDTH-1:0] PC,
    output logic [ADDRESS_WIDTH-1:0] Instr
);

logic [DATA_WIDTH-1:0] rom_array [27:0];

initial begin
        $display("Loading rom.");
        $readmemh("instrmem.mem", rom_array);
end

always_comb begin
    //output is asynchronous
    rd = {{rom_array[a]},{rom_array[a+1]},{rom_array[a+2]},{rom_array[a+3]}};
end
endmodule 

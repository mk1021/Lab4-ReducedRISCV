module instrmem #(
        parameter   ADDRESS_WIDTH =20,
                    DATA_WIDTH =8
)(

    input logic [ADDRESS_WIDTH-1:0] PC,
    output logic [4*DATA_WIDTH-1:0] Instr
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("instrmem.mem", rom_array);
end

assign Instr = rom_array [PC>>2]; //32 bit word address, shift the bits by 2 to divide by 4

endmodule 

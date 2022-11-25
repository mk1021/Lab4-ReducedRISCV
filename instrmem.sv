module instrmem #(
        parameter   ADDRESS_WIDTH =20,
                    DATA_WIDTH =32
)(

    input logic [31:0] PC,
    output logic [DATA_WIDTH-1:0] Instr
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("instrmem.mem", rom_array);
end

assign Instr = rom_array [PC>>2]; //32 bit word address, shift the bits by 2 to divide by 4

endmodule 

module #(
    parameter  ADDRESS_WIDTH =32,
               DATA_WIDTH = 32
)(
    //input logic             clk,
    input logic             we,
    input logic  [ADDRESS_WIDTH-1:]  a,
    input logic   [ADDRESSS_WIDTH-1:0] wd,
    output logic [DATA_WIDTH] ReadData
);

logic [DATA_WIDTH-1:0] data_mem_array [2**ADDRESS_WIDTH-1:0]; //32x32 bit memory

//purely combinational only loading 

initial begin
        $display("Loading mem.");
        $readmemh("datamem.mem", data_mem_array);
end

assign ReadData = data_mem_array [PC>>2]; //32 bit word address, shift the bits by 2 to divide by 4


endmodule

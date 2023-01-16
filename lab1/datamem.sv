module datamem#(
    parameter  ADDRESS_WIDTH = 20,
               DATA_WIDTH = 32
)(
    input logic             clk,
    input logic             we,
    input logic  [ADDRESS_WIDTH-1:0]  a,
    input logic   [DATA_WIDTH-1:0] wd,
    output logic [DATA_WIDTH-1:0] ReadData
);

logic [7:0] data_mem_array [2**ADDRESS_WIDTH-1:0]; //32x32 bit memory

//purely combinational only loading 

initial begin
        $display("Loading mem.");
        $readmemh("datamem.mem", data_mem_array);
end

always_ff @(posedge clk)
    if (we) begin
        data_mem_array[a+3] <= wd[7:0]; 
        data_mem_array[a+2] <= wd[15:8]; 
        data_mem_array[a+1] <= wd[23:16]; 
        data_mem_array[a]   <= wd[31:24]; 
    end

assign ReadData = {data_mem_array[a],data_mem_array[a+1],data_mem_array[a+2],data_mem_array[a+3]}; //32 bit word address, shift the bits by 2 to divide by 4

endmodule

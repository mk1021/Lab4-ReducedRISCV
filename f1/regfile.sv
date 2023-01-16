module regfile#(
    parameter A_WIDTH = 5,
              D_WIDTH = 32
)(
    input logic  [A_WIDTH-1:0]      rs1_in, 
    input logic  [A_WIDTH-1:0]      rs2_in, 
    input logic  [A_WIDTH-1:0]      rd_in,  
    input logic                     clk_in,
    input logic                     RegWrite_in, //WE3
    input logic  [D_WIDTH-1:0]      write_data3_in,  //WD3
    output logic [D_WIDTH-1:0]      rd1_out, //RD1
    output logic [D_WIDTH-1:0]      rd2_out, //RD2
    output logic [D_WIDTH-1:0]      a0_out // reg10

);

logic [D_WIDTH-1:0] mem_array [2**A_WIDTH-1:0];

//synchronus write
always_ff @(posedge clk_in) 
    begin 
        if (RegWrite_in && rd_in != 0) //ensure reg0 can't be overwritten
        mem_array[rd_in] <= write_data3_in;
    end

//asynchronus read
always_comb 
    begin
        a0_out = mem_array[5'd10]; //return value loaded here
    end

always rd1_out= rs1_in == 0 ? 0 : mem_array[rs1_in];
always rd2_out= rs2_in == 0 ? 0 : mem_array[rs2_in];

endmodule

module regfile#(
    parameter A_WIDTH = 5,
              D_WIDTH = 32
)(
    input logic  [A_WIDTH-1:0]       rs1, //AD1
    input logic  [A_WIDTH-1:0]       rs2, //AD2
    input logic [A_WIDTH-1:0]        rd,  //AD3
    input logic                     clk,
    input logic                     RegWrite, //WE3
    input logic  [D_WIDTH-1:0]      write_data3,  //WD3
    output logic [D_WIDTH-1:0]      read_data1, //RD1
    output logic [D_WIDTH-1:0]      read_data2, //RD2
    output logic [D_WIDTH-1:0]      a0 // reg10...return value is loaded here so the TB can inspect the state of the CPU (see value of a0)

);

//include rst 
//have to make sure a0 stays 0

logic [D_WIDTH-1:0] mem_array [(2**[A_WIDTH])-1:0]; 


always_ff @(posedge clk) begin // begin...end used for multiple statements

    if (RegWrite == 1'b1)
        mem_array[rd] <= write_data3;
end

always a0 = mem_array[10];
always mem_array[0] = 0;
always read_data1 = rs1;
always read_data2 = rs2;


endmodule

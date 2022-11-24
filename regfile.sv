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
    output logic [D_WIDTH-1:0]      rd1, //RD1
    output logic [D_WIDTH-1:0]      rd2, //RD2
    output logic [D_WIDTH-1:0]      a0 // reg10...return value is loaded here so the TB can inspect the state of the CPU (see value of a0)

);

//include rst 

logic [D_WIDTH-1:0] mem_array [2**A_WIDTH-1:0];  //CHECK??????????????????? (32x32 bit reg?)


//synchronus write
always_ff @(posedge clk) begin 

    if (RegWrite == 1'b1)
        mem_array[rd] <= write_data3;
end

//asynchronus read
always_comb 
    begin
        a0 = mem_array[5'd10]; //return value loaded here
        //mem_array[0] = 0;
        rd1 = mem_array[rs1];
        rd2 = mem_array[rs2];
    end

assign mem_array[0] = 0;

endmodule

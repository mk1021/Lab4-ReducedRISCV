module pcreg #(

    parameter DataSize = 32

)(

    input logic       [DataSize-1:0]    next_PC,
    input logic                         clk, 
    input logic                         rst,
    output logic                        PC

);

   always_ff @(posedge ck) 
        if (rst) PC <= 0; 
        else PC <= next_PC;


endmodule

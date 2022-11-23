module pc#(
    parameter D_WIDTH = 32
)(

    input logic        [D_WIDTH-1:0]       ImmOp,
    input logic                            clk,
    input logic                            rst,
    input logic                            PCsrc,
    output logic       [D_WIDTH-1:0]       PC
);

    logic               [D_WIDTH-1:0]    branch_PC;
    logic               [D_WIDTH-1:0]    inc_PC;
    logic               [D_WIDTH-1:0]    next_PC;
    
    
    always_ff @(posedge clk) begin
        if (rst) PC <= 0; 
        else PC <= next_PC;
    end
    
    
    always_comb begin
        branch_PC = PC + ImmOp;
        inc_PC = PC + 4;
        next_PC = PCsrc ? branch_PC : inc_PC; 
    end

    /*pcreg register(
        .clk(clk),
        .rst(rst),
        .next_PC(next_PC),
        .PC(PC)
    );*/
    
endmodule

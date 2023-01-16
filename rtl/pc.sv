module pc#(
    parameter D_WIDTH = 32
)(
    input  logic                            clk_in,
    input  logic                            rst_in,
    output logic        [D_WIDTH-1:0]       PC_out,
    input  logic        [D_WIDTH-1:0]       next_PC
    
);

    always_ff @(posedge clk_in) begin
        if (rst_in) PC_out <= 0; 
        else PC_out <= next_PC;
    end
    
    // always_comb begin
    //     $display("\n\n\nPC:  ", PC_out);
    // end

endmodule

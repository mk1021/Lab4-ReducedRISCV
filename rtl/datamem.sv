module datamem#(
    parameter  D_WIDTH = 32
)(
    input logic                 clk_in,
    input logic                 we_in,
    input logic                 addr_mode,
    input logic   [D_WIDTH-1:0] a_in,
    input logic   [D_WIDTH-1:0] wd_in,
    output logic  [D_WIDTH-1:0] ReadData_out
);

logic [7:0] data_mem_array [32'h1ffff:0]; 

initial begin
        $display("Loading mem.");
        $readmemh("datamem.mem", data_mem_array, 32'h10000);
end

always_ff @(posedge clk_in) begin
    
    //store word
     if (we_in == 1'b1 && addr_mode == 1'b0) begin
        data_mem_array[a_in+3] <= wd_in[7:0]; 
        data_mem_array[a_in+2] <= wd_in[15:8]; 
        data_mem_array[a_in+1] <= wd_in[23:16]; 
        data_mem_array[a_in]   <= wd_in[31:24]; 
    end

    //store byte
    if (we_in == 1'b1 && addr_mode == 1'b1) begin
        case (a_in[1:0]) 
            2'b00: data_mem_array[a_in] <= wd_in[7:0]; 
            2'b01: data_mem_array[a_in+1] <= wd_in[7:0];
            2'b10: data_mem_array[a_in+2] <= wd_in[7:0];
            2'b11: data_mem_array[a_in+3] <= wd_in[7:0];
            default: 
                data_mem_array[a_in] <= wd_in[7:0]; 
        endcase
    end
end

always_latch begin

    //load word:
    if(we_in == 1'b0 && addr_mode == 1'b0) begin 
        ReadData_out[7:0] = data_mem_array[a_in];
        ReadData_out[15:8] = data_mem_array[a_in+1];
        ReadData_out[23:16] = data_mem_array[a_in+2];
        ReadData_out[31:24] = data_mem_array[a_in+3];
    end
    
    //load byte
    if (we_in == 1'b0 && addr_mode == 1'b1) begin  
        case (a_in[1:0])
            2'b00: ReadData_out[7:0] = data_mem_array[a_in]; 
            2'b01: ReadData_out[7:0] = data_mem_array[a_in+1]; 
            2'b10: ReadData_out[7:0] = data_mem_array[a_in+2]; 
            2'b11: ReadData_out[7:0] = data_mem_array[a_in+3]; 
            default: ReadData_out[7:0] = data_mem_array[a_in]; 
        endcase
    end
end

endmodule

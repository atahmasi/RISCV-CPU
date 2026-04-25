import CPU_DEFS::*;

module top (
    input  logic MAX10_CLK1_50,
    input  logic [1:0] KEY,
    output logic [9:0] LEDR,
    output logic [7:0] HEX0,
    output logic [7:0] HEX1,
    output logic [7:0] HEX2,
    output logic [7:0] HEX3,
    output logic [7:0] HEX4,
    output logic [7:0] HEX5
);

    logic clk;
    logic rst;
    assign clk = MAX10_CLK1_50;
    assign rst = ~KEY[0];

    logic        mem_write;
    logic [31:0] mem_addr;
    logic [31:0] mem_wdata;

    cpu cpu0 (
        .clk            (clk),
        .rst            (rst),
        .debug_x1       (),
        .mem_write_out  (mem_write),
        .mem_address_out(mem_addr),
        .mem_wdata_out  (mem_wdata)
    );

    logic [9:0] led_reg;
    assign LEDR = led_reg;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            led_reg <= 10'b0;
        else if (mem_write && mem_addr == 32'h80000000)
            led_reg <= mem_wdata[9:0];
    end

    // HEX displays are active-low, tie off all segments
    assign HEX0 = 8'hFF;
    assign HEX1 = 8'hFF;
    assign HEX2 = 8'hFF;
    assign HEX3 = 8'hFF;
    assign HEX4 = 8'hFF;
    assign HEX5 = 8'hFF;

endmodule
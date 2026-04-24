import CPU_DEFS::*;

module top (
    input  logic MAX10_CLK1_50,
    input  logic [1:0] KEY,
    output logic [9:0] LEDR
);

logic clk;
logic rst;

assign clk = CLOCK_50;
assign rst = ~KEY[0];

logic mem_write;
logic [31:0] mem_addr;
logic [31:0] mem_wdata;

cpu cpu0 (
    .clk(clk),
    .rst(rst),
    .debug_x1(),

    .mem_write_out(mem_write),
    .mem_address_out(mem_addr),
    .mem_wdata_out(mem_wdata)
);

logic [9:0] led_reg;
assign LEDR = led_reg;

always_ff @(posedge clk) begin
    if (rst)
        led_reg <= 10'b0;
    else if (mem_write && mem_addr == 32'h80000000)
        led_reg <= mem_wdata[9:0];
end

endmodule
module register (
    input  logic        clk,
    input  logic        rst,
    input  logic        we,        // write enable
    input  logic [4:0]  rs1,       // source register 1
    input  logic [4:0]  rs2,       // source register 2
    input  logic [4:0]  rd,        // destination register
    input  logic [31:0] wd,        // write data

    output logic [31:0] rd1,       // read data 1
    output logic [31:0] rd2        // read data 2
);

    logic [31:0] regs [31:0];

    // Read ports (combinational)
    always_comb begin
        rd1 = (rs1 == 0) ? 32'b0 : regs[rs1];
        rd2 = (rs2 == 0) ? 32'b0 : regs[rs2];
    end

    // Write port (synchronous)
    always_ff @(posedge clk) begin
       if (rst) begin
            // Clear all registers on reset
            integer i;
            for (i = 0; i < 32; i = i + 1)
                regs[i] <= 32'b0;
        end else if (we && rd != 0)
            regs[rd] <= wd;
    end

endmodule

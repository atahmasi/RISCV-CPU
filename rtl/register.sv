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

    //32 bit vector array
    logic [31:0] regs [31:0];
    //assign regs[1] = 10;
    //assign regs[2] = 20;


    // Read ports (combinational)
    always_comb begin
        //check if rs1/rs2 address is 0. If 0, set value to 0. 
        //Otherwise, store value found in rs1/rs2 address.
        rd1 = (rs1 == 0) ? 32'b0 : regs[rs1];
        rd2 = (rs2 == 0) ? 32'b0 : regs[rs2];
    end

    // Write port (synchronous)
    always_ff @(posedge clk or posedge rst) begin
       if (rst) begin
            // Clear all registers on reset
            integer i;
            for (i = 0; i < 32; i = i + 1)
                regs[i] <= 32'b0;
        end else if (we && rd != 0) begin
            //If valid write enable and destination, set regs[rd] to write value.
            //$display("Writing x%0d <= %08h", rd, wd);
            regs[rd] <= wd;
            //$display("regs[rd] = %08h", regs[rd-1]);
        end
    end

endmodule

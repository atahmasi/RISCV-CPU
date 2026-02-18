module alu (
    input  logic [31:0] a,      // operand 1
    input  logic [31:0] b,      // operand 2
    input  logic [3:0]  op, // ALU control
    output logic [31:0] y,      // result
    output logic        zero    // y == 0 flag
);

    // ALU op encoding
    localparam ALU_ADD = 4'b0000;
    localparam ALU_SUB = 4'b0001;
    localparam ALU_AND = 4'b0010;
    localparam ALU_OR  = 4'b0011;
    localparam ALU_XOR = 4'b0100;
    localparam ALU_SLT = 4'b0101; // signed <
    localparam ALU_SLL = 4'b0110; // logical left shift
    localparam ALU_SRL = 4'b0111; // logical right shift
    localparam ALU_SRA = 4'b1000; // arithmetic right shift

    always_comb begin
        unique case (op)
            ALU_ADD: y = a + b;
            ALU_SUB: y = a - b;
            ALU_AND: y = a & b;
            ALU_OR:  y = a | b;
            ALU_XOR: y = a ^ b;
            ALU_SLT: y = ($signed(a) < $signed(b)) ? 32'd1 : 32'd0;
            ALU_SLL: y = a << b[4:0];
            ALU_SRL: y = a >> b[4:0];
            ALU_SRA: y = $signed(a) >>> b[4:0];
            default: y = 32'b0;
        endcase
    end

    assign zero = (y == 32'b0);

endmodule

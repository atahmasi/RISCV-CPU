import CPU_DEFS::*;


module alu (
    input  logic [31:0] rd1,      // reg 1
    input  logic [31:0] rd2,      // reg 2
    input  logic [31:0] imm,      // immediate
    input  logic [4:0]  alu_ctrl, // ALU control
    output logic [31:0] y,      // result
    output logic        zero    // y == 0 flag
);

   /* // ALU op encoding
    localparam ALU_ADD = 4'b0000;
    localparam ALU_SUB = 4'b0001;
    localparam ALU_AND = 4'b0010;
    localparam ALU_OR  = 4'b0011;
    localparam ALU_XOR = 4'b0100;
    localparam ALU_SLT = 4'b0101; // signed <
    localparam ALU_SLL = 4'b0110; // logical left shift
    localparam ALU_SRL = 4'b0111; // logical right shift
    localparam ALU_SRA = 4'b1000; // arithmetic right shift*/

    always_comb begin
        unique case (alu_ctrl)
            // R-type operations (rd2 as second operand)
            ALU_ADD: y = rd1 + rd2;
            ALU_SUB: y = rd1 - rd2;
            ALU_AND: y = rd1 & rd2;
            ALU_OR: y = rd1 | rd2;
            ALU_XOR: y = rd1 ^ rd2;
            ALU_SLT: y = ($signed(rd1) < $signed(rd2)) ? 32'd1 : 32'd0;
            ALU_SLTU: y = (rd1 < rd2) ? 32'd1 : 32'd0;
            ALU_SLL: y = rd1 << rd2[4:0];
            ALU_SRL: y = rd1 >> rd2[4:0];
            ALU_SRA: y = $signed(rd1) >>> rd2[4:0];
            
            
            // I-type operations (imm as second operand)
            ALU_ADDI: y = rd1 + imm;
            ALU_ANDI: y = rd1 & imm;
            ALU_ORI: y = rd1 | imm;
            ALU_XORI: y = rd1 ^ imm;
            ALU_SLTI: y = ($signed(rd1) < $signed(imm)) ? 32'd1 : 32'd0;
            ALU_SLTIU: y = (rd1 < imm) ? 32'd1 : 32'd0;
            ALU_SLLI: y = rd1 << imm[4:0];
            ALU_SRLI: y = rd1 >> imm[4:0];
            ALU_SRAI: y = $signed(rd1) >>> imm[4:0];
            
            // Branch operations (if you want ALU to compute comparisons)
            ALU_BEQ: y = (rd1 == rd2) ? 32'd1 : 32'd0;
            ALU_BNE: y = (rd1 != rd2) ? 32'd1 : 32'd0;
            ALU_BLT: y = ($signed(rd1) < $signed(rd2)) ? 32'd1 : 32'd0;
            ALU_BLTU: y = (rd1 < rd2) ? 32'd1 : 32'd0;
            ALU_BGE: y = ($signed(rd1) >= $signed(rd2)) ? 32'd1 : 32'd0;
            ALU_BGEU: y = (rd1 >= rd2) ? 32'd1 : 32'd0;


            // Default catch-all for unimplemented operations
            default: y = 32'b0;
        endcase
    end

    assign zero = (y == 32'b0);

endmodule

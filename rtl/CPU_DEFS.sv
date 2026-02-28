package CPU_DEFS;

    // Internal ALU function notation; for readability
    localparam ALU_ADD = 4'b0000;
    localparam ALU_SUB = 4'b0001;
    localparam ALU_AND = 4'b0010;
    localparam ALU_OR  = 4'b0011;
    localparam ALU_XOR = 4'b0100;
    localparam ALU_SLT = 4'b0101; // signed <
    localparam ALU_SLL = 4'b0110; // logical left shift
    localparam ALU_SRL = 4'b0111; // logical right shift
    localparam ALU_SRA = 4'b1000; // arithmetic right shift

    // Standard RISCV opcodes; used in decoder
    localparam OP_LUI    = 7'b0110111;  // Load Upper Immediate
    localparam OP_AUIPC  = 7'b0010111;  // Add Upper Immediate to PC
    localparam OP_JAL    = 7'b1101111;  // Jump and Link
    localparam OP_JALR   = 7'b1100111;  // Jump and Link Register
    localparam OP_BRANCH = 7'b1100011;  // Branch instructions
    localparam OP_LOAD   = 7'b0000011;  // Load instructions
    localparam OP_STORE  = 7'b0100011;  // Store instructions
    localparam OP_IMM    = 7'b0010011;  // Immediate arithmetic
    localparam OP_REG    = 7'b0110011;  // Register-register arithmetic

endpackage

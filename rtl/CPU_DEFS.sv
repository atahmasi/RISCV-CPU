package CPU_DEFS;

    // ALU function width
    localparam ALU_WIDTH = 5;


    // R-type (register-register)
    localparam ALU_ADD  = 5'b00000;
    localparam ALU_SUB  = 5'b00001;
    localparam ALU_AND  = 5'b00010;
    localparam ALU_OR   = 5'b00011;
    localparam ALU_XOR  = 5'b00100;
    localparam ALU_SLT  = 5'b00101; // signed <
    localparam ALU_SLTU = 5'b00110; // unsigned <
    localparam ALU_SLL  = 5'b00111;
    localparam ALU_SRL  = 5'b01000;
    localparam ALU_SRA  = 5'b01001;

    // I-type (immediate)
    localparam ALU_ADDI  = 5'b01010;
    localparam ALU_ANDI  = 5'b01011;
    localparam ALU_ORI   = 5'b01100;
    localparam ALU_XORI  = 5'b01101;
    localparam ALU_SLTI  = 5'b01110;
    localparam ALU_SLTIU = 5'b01111;
    localparam ALU_SLLI  = 5'b10000;
    localparam ALU_SRLI  = 5'b10001;
    localparam ALU_SRAI  = 5'b10010;

    // Branch (comparison)
    localparam ALU_BEQ  = 5'b10011;
    localparam ALU_BNE  = 5'b10100;
    localparam ALU_BLT  = 5'b10101;
    localparam ALU_BGE  = 5'b10110;
    localparam ALU_BLTU = 5'b10111;
    localparam ALU_BGEU = 5'b11000;


    localparam ALU_PASS  = 5'b11001; // pass-through (rd1 or imm)
    localparam ALU_PC4   = 5'b11010; // PC + 4 (for JAL/JALR writeback)

    // RISC-V opcodes
    localparam OP_LUI    = 7'b0110111;
    localparam OP_AUIPC  = 7'b0010111;
    localparam OP_JAL    = 7'b1101111;
    localparam OP_JALR   = 7'b1100111;
    localparam OP_BRANCH = 7'b1100011;
    localparam OP_LOAD   = 7'b0000011;
    localparam OP_STORE  = 7'b0100011;
    localparam OP_IMM    = 7'b0010011;
    localparam OP_REG    = 7'b0110011;

endpackage

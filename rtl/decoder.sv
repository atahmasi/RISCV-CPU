import CPU_DEFS::*;

module decoder (
    input  logic [31:0] instruction,
    output logic [6:0]  opcode,
    output logic [4:0]  rd,
    output logic [4:0]  rs1,
    output logic [4:0]  rs2,
    output logic [2:0]  funct3,
    output logic [6:0]  funct7,
    output logic [31:0] imm
);

    // Define RISC-V opcodes as an enum for readability
   /* typedef enum logic [6:0] {
        OP_LUI    = 7'b0110111,  // Load Upper Immediate
        OP_AUIPC  = 7'b0010111,  // Add Upper Immediate to PC
        OP_JAL    = 7'b1101111,  // Jump and Link
        OP_JALR   = 7'b1100111,  // Jump and Link Register
        OP_BRANCH = 7'b1100011,  // Branch instructions
        OP_LOAD   = 7'b0000011,  // Load instructions
        OP_STORE  = 7'b0100011,  // Store instructions
        OP_IMM    = 7'b0010011,  // Immediate arithmetic
        OP_REG    = 7'b0110011   // Register-register arithmetic
    } opcode_t;
*/
    always_comb begin
        // Extract common fields
        opcode = instruction[6:0];
        rd     = instruction[11:7];
        funct3 = instruction[14:12];
        rs1    = instruction[19:15];
        rs2    = instruction[24:20];
        funct7 = instruction[31:25];
        
        // Decode immediate based on instruction type
        case (opcode)
            OP_IMM,    // I-type (ADDI, SLTI, XORI, etc.)
            OP_LOAD,   // I-type (LB, LH, LW, etc.)
            OP_JALR:   // I-type (JALR)
                // Sign-extend 12-bit immediate
                imm = {{20{instruction[31]}}, instruction[31:20]};
                
            OP_STORE:  // S-type (SB, SH, SW)
                // Sign-extend and reconstruct immediate
                imm = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};
                
            OP_BRANCH: // B-type (BEQ, BNE, BLT, etc.)
                // Sign-extend and reconstruct branch offset
                imm = {{19{instruction[31]}}, instruction[31], instruction[7], 
                       instruction[30:25], instruction[11:8], 1'b0};
                
            OP_LUI,    // U-type (LUI)
            OP_AUIPC:  // U-type (AUIPC)
                // Upper immediate (already shifted left by 12)
                imm = {instruction[31:12], 12'b0};
                
            OP_JAL:    // J-type (JAL)
                // Sign-extend and reconstruct jump offset
                imm = {{11{instruction[31]}}, instruction[31], instruction[19:12],
                       instruction[20], instruction[30:21], 1'b0};
                
            OP_REG:    // R-type (ADD, SUB, AND, OR, etc.)
                // R-type has no immediate field
                imm = 32'b0;
                
            default: 
                imm = 32'b0;
        endcase
    end

endmodule
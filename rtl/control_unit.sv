import CPU_DEFS::*;

module control_unit (
    input  logic [6:0] opcode,
    input  logic [2:0] funct3,
    input  logic [6:0] funct7,

    output logic       reg_write,
    output logic       branch,
    output logic       jal,
    output logic       jalr,
    output logic       mem_read,
    output logic       mem_write,
    output logic [4:0] alu_ctrl
);

    always_comb begin
        reg_write = 0;
        branch    = 0;
        jal       = 0;
        jalr      = 0;
        mem_read  = 0;
        mem_write = 0;
        alu_ctrl  = ALU_ADD;

        // Decode
        case (opcode)

            // R-type
            OP_REG: begin
                reg_write = 1;

                case ({funct7, funct3})
                    {7'b0000000,3'b000}: alu_ctrl = ALU_ADD;
                    {7'b0100000,3'b000}: alu_ctrl = ALU_SUB;
                    {7'b0000000,3'b111}: alu_ctrl = ALU_AND;
                    {7'b0000000,3'b110}: alu_ctrl = ALU_OR;
                    {7'b0000000,3'b100}: alu_ctrl = ALU_XOR;
                    {7'b0000000,3'b010}: alu_ctrl = ALU_SLT;
                    {7'b0000000,3'b011}: alu_ctrl = ALU_SLTU;
                    {7'b0000000,3'b001}: alu_ctrl = ALU_SLL;
                    {7'b0000000,3'b101}: alu_ctrl = ALU_SRL;
                    {7'b0100000,3'b101}: alu_ctrl = ALU_SRA;
                    default: alu_ctrl = ALU_ADD;
                endcase
            end

            // I-type
            OP_IMM: begin
                reg_write = 1;

                case (funct3)
                    3'b000: alu_ctrl = ALU_ADDI;
                    3'b111: alu_ctrl = ALU_ANDI;
                    3'b110: alu_ctrl = ALU_ORI;
                    3'b100: alu_ctrl = ALU_XORI;
                    3'b010: alu_ctrl = ALU_SLTI;
                    3'b011: alu_ctrl = ALU_SLTIU;
                    3'b001: alu_ctrl = ALU_SLLI;

                    3'b101: begin
                        if (funct7 == 7'b0000000)
                            alu_ctrl = ALU_SRLI;
                        else
                            alu_ctrl = ALU_SRAI;
                    end

                    default: alu_ctrl = ALU_ADDI;
                endcase
            end

            // LOAD
            OP_LOAD: begin
                reg_write = 1;
                mem_read  = 1;
                alu_ctrl  = ALU_ADDI; // address calc
            end

            // STORE
            OP_STORE: begin
                mem_write = 1;
                alu_ctrl = ALU_ADDI; // address calc
            end

            // BRANCH
            OP_BRANCH: begin
                branch = 1;

                case (funct3)
                    3'b000: alu_ctrl = ALU_BEQ;
                    3'b001: alu_ctrl = ALU_BNE;
                    3'b100: alu_ctrl = ALU_BLT;
                    3'b101: alu_ctrl = ALU_BGE;
                    3'b110: alu_ctrl = ALU_BLTU;
                    3'b111: alu_ctrl = ALU_BGEU;
                    default: alu_ctrl = ALU_BEQ;
                endcase
            end

            // JAL
            OP_JAL: begin
                jal       = 1;
                reg_write = 1;
            end

            // JALR
            OP_JALR: begin
                jalr      = 1;
                reg_write = 1;
            end

            // LUI
            OP_LUI:  begin
                 alu_ctrl = ALU_LUI;
                 reg_write = 1;
            end
            //AUIPC
            OP_AUIPC: begin
                alu_ctrl = ALU_AUIPC;
                reg_write = 1;
            end
            // Default
            default: begin
                alu_ctrl = ALU_ADD;
            end

        endcase
    end

endmodule

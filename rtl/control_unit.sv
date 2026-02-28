import CPU_DEFS::*;


module control_unit (
    input  logic [6:0] opcode,
    input  logic [2:0] funct3,
    input  logic [6:0] funct7,
    input  logic       zero,

    output logic       reg_write,
    output logic       mem_write,
    output logic       mem_read,
    output logic       alu_src,
    output logic       mem_to_reg,
    output logic       branch,
    output logic       jal,
    output logic       jalr,
    output logic [3:0] alu_ctrl
);

    always_comb begin

        // Default values 
        reg_write  = 0;
        mem_write  = 0;
        mem_read   = 0;
        alu_src    = 0;
        mem_to_reg = 0;
        branch     = 0;
        jal        = 0;
        jalr       = 0;
        alu_ctrl   = 4'b0000;

        case (opcode)

            OP_REG: begin // R-type
                reg_write = 1;

                case ({funct7, funct3})
                    {7'b0000000,3'b000}: alu_ctrl = ALU_ADD; 
                    {7'b0100000,3'b000}: alu_ctrl = ALU_SUB; 
                    {7'b0000000,3'b111}: alu_ctrl = ALU_AND; 
                    {7'b0000000,3'b110}: alu_ctrl = ALU_OR; 
                    {7'b0000000,3'b100}: alu_ctrl = ALU_XOR; 
                    {7'b0000000,3'b010}: alu_ctrl = ALU_SLT; 
                endcase
            end

            OP_IMM: begin // I-type 
                reg_write = 1;
                alu_src   = 1;

                case (funct3)
                    3'b000: alu_ctrl = ALU_ADD; 
                    3'b111: alu_ctrl = ALU_AND; 
                    3'b110: alu_ctrl = ALU_OR; 
                    3'b100: alu_ctrl = ALU_XOR; 
                    3'b010: alu_ctrl = ALU_SLT; 
                endcase
            end

            OP_LOAD: begin // LOAD (LW)
                reg_write  = 1;
                mem_read   = 1;
                mem_to_reg = 1;
                alu_src    = 1;
                alu_ctrl   = ALU_ADD; // address = rs1 + imm
            end

            OP_STORE: begin // STORE (SW)
                mem_write = 1;
                alu_src   = 1;
                alu_ctrl  = ALU_ADD;
            end

            OP_BRANCH: begin // BRANCH
                branch   = 1;
                alu_ctrl = ALU_SUB; // SUB for comparison
            end

            OP_JAL: begin // JAL
                jal       = 1;
                reg_write = 1;
            end

            OP_JALR: begin // JALR
                jalr      = 1;
                reg_write = 1;
                alu_src   = 1;
            end

        endcase
    end

endmodule

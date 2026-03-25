import CPU_DEFS::*;

module cpu (
    input  logic clk,
    input  logic rst
);

    // Program Counter
    logic [31:0] pc, pc_next;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            pc <= 32'b0;
        else
            pc <= pc_next;
    end


    // Instruction Memory
    logic [31:0] imem [0:255];
    logic [31:0] instruction;

    assign instruction = imem[pc[9:2]];

    // Decode
    logic [6:0] opcode;
    logic [4:0] rd, rs1, rs2;
    logic [2:0] funct3;
    logic [6:0] funct7;
    logic [31:0] imm;

    decoder dec (
        .instruction(instruction),
        .opcode(opcode),
        .rd(rd),
        .rs1(rs1),
        .rs2(rs2),
        .funct3(funct3),
        .funct7(funct7),
        .imm(imm)
    );

    // Control Unit
    logic reg_write, branch, jal, jalr;
    logic [4:0] alu_ctrl;

    control_unit controller0 (
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .reg_write(reg_write),
        .branch(branch),
        .jal(jal),
        .jalr(jalr),
        .alu_ctrl(alu_ctrl)
    );

    // Register 
    logic [31:0] rd1, rd2;
    logic [31:0] write_data;

    register rf (
        .clk(clk),
        .rst(rst),
        .we(reg_write),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .wd(write_data),
        .rd1(rd1),
        .rd2(rd2)
    );


    // ALU
    logic [31:0] alu_y;

    alu alu0 (
        .rd1(rd1),
        .rd2(rd2),
        .imm(imm),
        .alu_ctrl(alu_ctrl),
        .y(alu_y),
        .zero() 
    );

    // Writeback 
    always_comb begin
        write_data = alu_y;

        if (jal || jalr)
            write_data = pc + 32'd4;
    end

    // PC Control Logic
    always_comb begin
        pc_next = pc + 32'd4;

        // priority: JALR > JAL > BRANCH
        if (jalr)
            pc_next = (rd1 + imm) & 32'hFFFFFFFE;
        else if (jal)
            pc_next = pc + imm;
        else if (branch && alu_y == 32'd1)
            pc_next = pc + imm;
    end

    // Memory Init
    initial begin
        imem[0] = 32'h002081B3; // ADD x3, x1, x2
        imem[1] = 32'h00118233; // ADD x4, x3, x1
        imem[2] = 32'h00000013; // NOP
    end

endmodule
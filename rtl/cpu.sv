import CPU_DEFS::*;

module cpu (
    input  logic clk,
    input  logic rst,
    output logic [31:0] debug_x1,

    output logic        mem_write_out,
    output logic [31:0] mem_address_out,
    output logic [31:0] mem_wdata_out
);

    // Program Counter
    logic [31:0] pc, pc_next;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            pc <= 32'b0;
        else
            pc <= pc_next;
    end

    // Data Memory, Instruction Memory
    logic [31:0] dmem [0:1023];
    logic [31:0] imem [0:255];

    // Instruction Fetch
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
    logic mem_read, mem_write;

    control_unit controller0 (
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .reg_write(reg_write),
        .branch(branch),
        .jal(jal),
        .jalr(jalr),
        .mem_read(mem_read),
        .mem_write(mem_write),
        .alu_ctrl(alu_ctrl)
    );

    //Datapath signals
    logic [31:0] rd1, rd2;
    logic [31:0] write_data;
    logic [31:0] alu_y;
    logic [31:0] mem_read_data;

    // Register 
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

    logic [31:0] alu_in1;
    assign alu_in1 = (alu_ctrl == ALU_AUIPC) ? pc : rd1;

    // ALU
    alu alu0 (
        .rd1(alu_in1),
        .rd2(rd2),
        .imm(imm),
        .alu_ctrl(alu_ctrl),
        .y(alu_y),
        .zero()
    );

    // Memory Read / Write
	always_ff @(posedge clk) begin
		if (mem_write && (alu_y[31:12] == 20'b0))
            dmem[alu_y[11:2]] <= rd2;
        if (mem_read)
            mem_read_data <= dmem[alu_y[11:2]];
    end
    // Writeback
    always_comb begin
        if (jal || jalr)
            write_data = pc + 32'd4;
        else if (mem_read)
            write_data = mem_read_data;
        else
            write_data = alu_y;
    end

    // PC Control Logic
    always_comb begin
        if (jalr)
            pc_next = (rd1 + imm) & 32'hFFFFFFFC;
        else if (jal)
            pc_next = pc + imm;
        else if (branch && (alu_y != 32'd0))
            pc_next = pc + imm;
        else 
            pc_next = pc + 32'd4;
    end

    // expose memory bus
    assign mem_write_out   = mem_write;
    assign mem_address_out = alu_y;
    assign mem_wdata_out   = rd2;

    // Memory Init
    initial begin
        $readmemh("sw/program.hex", imem);
    end
	 /*initial begin
		 for (int i = 0; i < 256; i++) begin
			  imem[i] = 32'h00000013;
			  dmem[i] = 32'h00000000;
		 end
		 imem[0] = 32'h800002B7; // lui  t0, 0x80000
		 imem[1] = 32'h0AA00513; // addi a0, x0, 0xAA
		 imem[2] = 32'h00A2A023; // sw   a0, 0(t0)
		 imem[3] = 32'h0000006F; // jal  x0, 0
	 end*/
	 /*initial begin
    for (int i = 0; i < 256; i++) begin
        imem[i] = 32'h00000013; // nop
        dmem[i] = 32'h00000000;
    end
    // lui  t0, 0x80000     → t0  = 0x80000000
    // addi a0, x0, 0xFF    → a0  = 0xFF (bottom 8 LEDs all on)
    // sw   a0, 0(t0)       → mem[0x80000000] = 0xFF
    // jal  x0, 0           → halt
    imem[0] = 32'h800002B7; // lui  t0, 0x80000
    imem[1] = 32'h0FF00513; // addi a0, x0, 0xFF
    imem[2] = 32'h00A2A023; // sw   a0, 0(t0)
    imem[3] = 32'h0000006F; // jal  x0, 0
end*/

endmodule
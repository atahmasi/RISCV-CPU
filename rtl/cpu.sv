module cpu (
    input  logic clk,
    input  logic rst
);

    // -----------------------
    // Program Counter
    // -----------------------
    logic [31:0] pc;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            pc <= 32'b0;
        else //index instruction address
            pc <= pc + 32'd4;
    end

    // -----------------------
    // Instruction Memory
    // -----------------------
    logic [31:0] imem [0:255];
    logic [31:0] instruction;

     // word aligned instruction store (bits 1:0 are junk), only need max size of 256
 
     assign instruction = imem[pc[9:2]]; 

    // -----------------------
    // Decode
    // -----------------------
    logic [6:0] opcode;
    logic [4:0] rd, rs1, rs2;
    logic [2:0] funct3;
    logic [6:0] funct7;
    logic [31:0] imm;

    decoder dec (
        .instruction(instruction),
        .opcode(opcode), //output
        .rd(rd), //output
        .rs1(rs1), //output
        .rs2(rs2), //output
        .funct3(funct3), //output
        .funct7(funct7), //output
        .imm(imm) //output
    );

    // -----------------------
    // Register File
    // -----------------------
    logic [31:0] rd1, rd2;

    register rf (
        .clk(clk),
        .rst(rst),
        .we(opcode == 7'b0110011), // R-type only
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .wd(alu_y),
        .rd1(rd1), //output
        .rd2(rd2) //output
    );

    // -----------------------
    // ALU
    // -----------------------
    logic [31:0] alu_y;
    logic zero;

    alu alu0 (
        .a(rd1),
        .b(rd2),
        .op(4'b0000), // ADD only for now
        .y(alu_y),
        .zero(zero)
    );

    initial begin
        imem[0] = 32'h002081B3; // ADD x3, x1, x2
        imem[1] = 32'h00118233; // ADD x4, x3, x1
        imem[2] = 32'h00000013; // NOP
    end

endmodule

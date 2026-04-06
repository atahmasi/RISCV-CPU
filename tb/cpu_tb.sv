module cpu_tb;

    logic clk = 0;
    logic rst = 1;

    cpu dut(.clk(clk), .rst(rst));
    
    always #5 clk = ~clk;

    initial begin
        $dumpfile("cpu.vcd");
        $dumpvars(0, cpu_tb);

        // -------------------------
        // Program
        // -------------------------

        // Setup
        dut.imem[0] = 32'h00A00093; // ADDI x1, x0, 10
        dut.imem[1] = 32'h00A00113; // ADDI x2, x0, 10

        // Branch test (BEQ x1 == x2 → take branch)
        dut.imem[2] = 32'h00208463; // BEQ x1, x2, +8
        dut.imem[3] = 32'h06300193; // ADDI x3, x0, 99 (SHOULD SKIP)
        dut.imem[4] = 32'h02A00193; // ADDI x3, x0, 42

        // JAL test
        dut.imem[5] = 32'h008002EF; // JAL x5, +8 (to instr 7)
        dut.imem[6] = 32'h06F00213; // ADDI x4, x0, 111 (SKIP)
        dut.imem[7] = 32'h03700213; // ADDI x4, x0, 55

        // JALR test (jump to x1 = 10 → instruction index 2)
        dut.imem[8] = 32'h00008367; // JALR x6, x1, 0

        // -------------------------
        // Reset sequence
        // -------------------------
        repeat (2) @(posedge clk);
        rst = 0;

        // Run enough cycles
        repeat (20) @(posedge clk);

        // -------------------------
        // Results
        // -------------------------
        $display("x1 = %0d (expect 10)", dut.rf.regs[1]);
        $display("x2 = %0d (expect 10)", dut.rf.regs[2]);

        $display("x3 = %0d (expect 42 if branch worked)", dut.rf.regs[3]);
        $display("x4 = %0d (expect 55 if jal worked)", dut.rf.regs[4]);

        $display("x5 = %0d (return addr from JAL)", dut.rf.regs[5]);
        $display("x6 = %0d (return addr from JALR)", dut.rf.regs[6]);

        $display("Final PC = %h", dut.pc);

        $finish;
    end

endmodule
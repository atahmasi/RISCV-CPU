/*module cpu_tb;

    logic clk = 0;
    logic rst = 1;

    cpu dut(.clk(clk), .rst(rst));
    
    always #5 clk = ~clk;

    // -------------------------
    // Debug Monitor
    // -------------------------
    always @(posedge clk) begin
        if (dut.mem_write)
            $display("STORE: addr=%0d data=%0d", dut.alu_y, dut.rd2);

        if (dut.mem_read)
            $display("LOAD: addr=%0d data=%0d", dut.alu_y, dut.mem_read_data);

        if (dut.opcode == OP_LUI)
            $display("LUI: x%0d = 0x%08h", dut.rd, dut.alu_y);

        if (dut.opcode == OP_AUIPC)
            $display("AUIPC: x%0d = 0x%08h wd = 0x%08h rd = %0d  regsval = ", dut.rd, dut.alu_y, dut.rf.wd, dut.rf.rd, dut.rf.regs[dut.rf.rd] );
    end

    initial begin
        $dumpfile("cpu.vcd");
        $dumpvars(0, cpu_tb);

        // =====================================================
        // PROGRAM LAYOUT
        // =====================================================
        // 0–4   → ALU + Branch
        // 5–7   → Memory (LW/SW)
        // 8–10  → JAL
        // 11–12 → LUI / AUIPC
        // 13    → JALR (loop)
        // =====================================================

        // -------------------------
        // ALU + Branch
        // -------------------------
        dut.imem[0] = 32'h00A00093; // ADDI x1, x0, 10
        dut.imem[1] = 32'h00A00113; // ADDI x2, x0, 10

        dut.imem[2] = 32'h00208463; // BEQ x1, x2, +8
        dut.imem[3] = 32'h06300193; // ADDI x3, x0, 99 (SKIP)
        dut.imem[4] = 32'h02A00193; // ADDI x3, x0, 42

        // -------------------------
        // Memory Test
        // -------------------------
        dut.imem[5] = 32'h07B00393; // ADDI x7, x0, 123
        dut.imem[6] = 32'h00702023; // SW x7, 0(x0)
        dut.imem[7] = 32'h00002403; // LW x8, 0(x0)

        // -------------------------
        // JAL Test
        // -------------------------
        dut.imem[8]  = 32'h008002EF; // JAL x5, +8 (to instr 10)
        dut.imem[9]  = 32'h06F00213; // ADDI x4, x0, 111 (SKIP)
        dut.imem[10] = 32'h03700213; // ADDI x4, x0, 55

        // -------------------------
        // LUI / AUIPC (FIXED REGS)
        // -------------------------
        dut.imem[11] = 32'h123454B7; // LUI x9, 0x12345  → x9 = 0x12345000
        dut.imem[12] = 32'h00100517; // AUIPC x10, 0x100 → x10 = PC + offset

        // -------------------------
        // JALR Test (uses x1 safely)
        // -------------------------
        dut.imem[13] = 32'h00008367; // JALR x6, x1, 0

        // -------------------------
        // Reset
        // -------------------------
        repeat (2) @(posedge clk);
        rst = 0;

        // Run simulation
        repeat (25) @(posedge clk);

        // -------------------------
        // RESULTS
        // -------------------------
        #5;

        $display("\n===== REGISTER DUMP =====");
        for (int i = 0; i < 32; i++) begin
            $display("x%0d = %0d (0x%08h)", i, dut.rf.regs[i], dut.rf.regs[i]);
        end

        $display("\n===== EXPECTED =====");
        $display("x1  = 10");
        $display("x2  = 10");
        $display("x3  = 42 (branch worked)");
        $display("x4  = 55 (JAL worked)");
        $display("x5  = return addr (JAL)");
        $display("x6  = return addr (JALR)");
        $display("x7  = 123 (store)");
        $display("x8  = 123 (load)");
        $display("x9  = 0x12345000 (LUI)");
        $display("x10 = PC + offset (AUIPC)");

        $display("\nFinal PC = %h", dut.pc);

        $finish;
    end

endmodule


module cpu_tb;

    logic clk = 0;
    logic rst = 1;

    cpu dut(.clk(clk), .rst(rst));
    
    always #5 clk = ~clk;

    // -------------------------
    // Debug Monitor
    // -------------------------
    logic [31:0] last_regs[31:0];

    always @(posedge clk) begin
        // Detect register writes
        if (dut.reg_write && dut.rd != 0) begin
            $display("CTRL: PC=%08h opcode=%07b reg_write=%0d rd=%0d write_data=%08h",
                     dut.pc, dut.opcode, dut.reg_write, dut.rd, dut.rf.wd);
            $display("Writing x%0d <= %08h", dut.rd, dut.rf.wd);
            if (last_regs[dut.rd] !== dut.rf.wd) begin
                $display("regs[rd] changed: %08h -> %08h", last_regs[dut.rd], dut.rf.wd);
                last_regs[dut.rd] = dut.rf.wd;
            end
        end

        // Memory
        if (dut.mem_write)
            $display("STORE: addr=%0d data=%0d", dut.alu_y, dut.rd2);
        if (dut.mem_read)
            $display("LOAD: addr=%0d data=%0d", dut.alu_y, dut.mem_read_data);

        // Special instructions
        if (dut.opcode == OP_LUI)
            $display("LUI: x%0d = 0x%08h", dut.rd, dut.alu_y);
        if (dut.opcode == OP_AUIPC)
            $display("AUIPC: x%0d = 0x%08h (wd=%08h rd=%0d regsval=%08h)", 
                     dut.rd, dut.alu_y, dut.rf.wd, dut.rf.rd, dut.rf.regs[dut.rf.rd]);
    end

    // -------------------------
    // Initial Block
    // -------------------------
    initial begin
        $dumpfile("cpu.vcd");
        $dumpvars(0, cpu_tb);

        // -------------------------
        // PROGRAM LAYOUT
        // -------------------------
        // 0–4   → ALU + Branch
        // 5–7   → Memory (LW/SW)
        // 8–10  → JAL
        // 11–12 → LUI / AUIPC
        // 13    → JALR (loop)
        // -------------------------

        // ALU + Branch
        dut.imem[0] = 32'h00A00093; // ADDI x1, x0, 10
        dut.imem[1] = 32'h00A00113; // ADDI x2, x0, 10
        dut.imem[2] = 32'h00208463; // BEQ x1, x2, +8
        dut.imem[3] = 32'h06300193; // ADDI x3, x0, 99 (SKIP)
        dut.imem[4] = 32'h02A00193; // ADDI x3, x0, 42

        // Memory
        dut.imem[5] = 32'h07B00393; // ADDI x7, x0, 123
        dut.imem[6] = 32'h00702023; // SW x7, 0(x0)
        dut.imem[7] = 32'h00002403; // LW x8, 0(x0)

        // JAL
        dut.imem[8]  = 32'h008002EF; // JAL x5, +8
        dut.imem[9]  = 32'h06F00213; // ADDI x4, x0, 111 (SKIP)
        dut.imem[10] = 32'h03700213; // ADDI x4, x0, 55

        // LUI / AUIPC
        dut.imem[11] = 32'h123454B7; // LUI x9, 0x12345
        dut.imem[12] = 32'h00100517; // AUIPC x10, 0x100

        // JALR
        dut.imem[13] = 32'h00008367; // JALR x6, x1, 0

        // Reset
        repeat (2) @(posedge clk);
        rst = 0;

        // Run simulation
        repeat (25) @(posedge clk);

        // -------------------------
        // REGISTER DUMP + ASSERTS
        // -------------------------
        #5;
        $display("\n===== REGISTER DUMP =====");
        for (int i = 0; i < 32; i++) begin
            $display("x%0d = %0d (0x%08h)", i, dut.rf.regs[i], dut.rf.regs[i]);
        end

        // -------------------------
        // EXPECTED VALUES
        // -------------------------
        $display("\n===== EXPECTED =====");
        $display("x1  = 10");
        $display("x2  = 10");
        $display("x3  = 42 (branch worked)");
        $display("x4  = 55 (JAL worked)");
        $display("x5  = return addr (JAL)");
        $display("x6  = return addr (JALR)");
        $display("x7  = 123 (store)");
        $display("x8  = 123 (load)");
        $display("x9  = 0x12345000 (LUI)");
        $display("x10 = PC + offset (AUIPC)");

        // -------------------------
        // ASSERTIONS
        // -------------------------
        assert(dut.rf.regs[1]  == 10)        else $fatal("x1 failed");
        assert(dut.rf.regs[2]  == 10)        else $fatal("x2 failed");
        assert(dut.rf.regs[3]  == 42)        else $fatal("x3 failed");
        assert(dut.rf.regs[4]  == 55)        else $fatal("x4 failed");
        assert(dut.rf.regs[7]  == 123)       else $fatal("x7 failed");
        assert(dut.rf.regs[8]  == 123)       else $fatal("x8 failed");
        assert(dut.rf.regs[9]  == 32'h12345000) else $fatal("x9 failed");
        assert(dut.rf.regs[10] == 32'h00100030) else $fatal("x10 failed");

        // JAL return address: PC of next instruction after JAL
        assert(dut.rf.regs[5] == 32'h0000000C) else $fatal("x5 (JAL return) failed");

        // JALR return address: PC of next instruction after JALR
        assert(dut.rf.regs[6] == 32'h00000034) else $fatal("x6 (JALR return) failed");

        $display("\nAll register checks PASSED!");
        $display("Final PC = %h", dut.pc);

        $finish;
    end

endmodule
*/
module cpu_tb;

    logic clk = 0;
    logic rst = 1;

    logic mem_write;
    logic [31:0] mem_addr;
    logic [31:0] mem_wdata;
    logic [31:0] debug_x1;

    cpu dut(
        .clk(clk),
        .rst(rst),
        .debug_x1(debug_x1),
        .mem_write_out(mem_write),
        .mem_address_out(mem_addr),
        .mem_wdata_out(mem_wdata)
    );
    
    always #5 clk = ~clk;

    // -------------------------
    // Debug Monitor
    // -------------------------
    logic [31:0] last_regs[31:0];

    always @(posedge clk) begin
        // Detect register writes
        if (dut.reg_write && dut.rd != 0) begin
            $display("CTRL: PC=%08h opcode=%07b reg_write=%0d rd=%0d write_data=%08h",
                     dut.pc, dut.opcode, dut.reg_write, dut.rd, dut.rf.wd);
            $display("Writing x%0d <= %08h", dut.rd, dut.rf.wd);
            if (last_regs[dut.rd] !== dut.rf.wd) begin
                $display("regs[rd] changed: %08h -> %08h", last_regs[dut.rd], dut.rf.wd);
                last_regs[dut.rd] = dut.rf.wd;
            end
        end

        // Memory
        if (mem_write)
            $display("STORE: addr=%h data=%h", mem_addr, mem_wdata);

        if (dut.mem_read)
            $display("LOAD: addr=%0d data=%0d", dut.alu_y, dut.mem_read_data);

        // Special instructions
        if (dut.opcode == OP_LUI)
            $display("LUI: x%0d = 0x%08h", dut.rd, dut.alu_y);
        if (dut.opcode == OP_AUIPC)
            $display("AUIPC: x%0d = 0x%08h (wd=%08h rd=%0d regsval=%08h)", 
                     dut.rd, dut.alu_y, dut.rf.wd, dut.rf.rd, dut.rf.regs[dut.rf.rd]);
    end

    // -------------------------
    // Initial Block
    // -------------------------
    initial begin
        $dumpfile("cpu.vcd");
        $dumpvars(0, cpu_tb);

        // -------------------------
        // PROGRAM LAYOUT
        // -------------------------
        // 0–4   → ALU + Branch
        // 5–7   → Memory (LW/SW)
        // 8–10  → JAL
        // 11–12 → LUI / AUIPC
        // 13    → JALR (loop)
        // -------------------------

        // ALU + Branch
        dut.imem[0] = 32'h00A00093; // ADDI x1, x0, 10
        dut.imem[1] = 32'h00A00113; // ADDI x2, x0, 10
        dut.imem[2] = 32'h00208463; // BEQ x1, x2, +8
        dut.imem[3] = 32'h06300193; // ADDI x3, x0, 99 (SKIP)
        dut.imem[4] = 32'h02A00193; // ADDI x3, x0, 42

        // Memory
        dut.imem[5] = 32'h07B00393; // ADDI x7, x0, 123
        dut.imem[6] = 32'h00702023; // SW x7, 0(x0)
        dut.imem[7] = 32'h00002403; // LW x8, 0(x0)

        // JAL
        dut.imem[8]  = 32'h008002EF; // JAL x5, +8
        dut.imem[9]  = 32'h06F00213; // ADDI x4, x0, 111 (SKIP)
        dut.imem[10] = 32'h03700213; // ADDI x4, x0, 55

        // LUI / AUIPC
        dut.imem[11] = 32'h123454B7; // LUI x9, 0x12345
        dut.imem[12] = 32'h00100517; // AUIPC x10, 0x100

        // JALR
        dut.imem[13] = 32'h00008367; // JALR x6, x1, 0

        // Reset
        repeat (2) @(posedge clk);
        rst = 0;

        // Run simulation
        repeat (25) @(posedge clk);

        // -------------------------
        // REGISTER DUMP + ASSERTS
        // -------------------------
        #5;
        $display("\n===== REGISTER DUMP =====");
        for (int i = 0; i < 32; i++) begin
            $display("x%0d = %0d (0x%08h)", i, dut.rf.regs[i], dut.rf.regs[i]);
        end

        // -------------------------
        // EXPECTED VALUES
        // -------------------------
        $display("\n===== EXPECTED =====");
        $display("x1  = 10");
        $display("x2  = 10");
        $display("x3  = 42 (branch worked)");
        $display("x4  = 55 (JAL worked)");
        $display("x5  = return addr (JAL)");
        $display("x6  = return addr (JALR)");
        $display("x7  = 123 (store)");
        $display("x8  = 123 (load)");
        $display("x9  = 0x12345000 (LUI)");
        $display("x10 = PC + offset (AUIPC)");

        // -------------------------
        // ASSERTIONS
        // -------------------------
        assert(dut.rf.regs[1]  == 10)        else $fatal("x1 failed");
        assert(dut.rf.regs[2]  == 10)        else $fatal("x2 failed");
        assert(dut.rf.regs[3]  == 42)        else $fatal("x3 failed");
        assert(dut.rf.regs[4]  == 55)        else $fatal("x4 failed");
        assert(dut.rf.regs[7]  == 123)       else $fatal("x7 failed");
        assert(dut.rf.regs[8]  == 123)       else $fatal("x8 failed");
        assert(dut.rf.regs[9]  == 32'h12345000) else $fatal("x9 failed");
        assert(dut.rf.regs[10] == 32'h00100030) else $fatal("x10 failed");

        // JAL return address: PC of next instruction after JAL
        assert(dut.rf.regs[5] == 32'h0000000C) else $fatal("x5 (JAL return) failed");

        // JALR return address: PC of next instruction after JALR
        assert(dut.rf.regs[6] == 32'h00000034) else $fatal("x6 (JALR return) failed");

        $display("\nAll register checks PASSED!");
        $display("Final PC = %h", dut.pc);

        $finish;
    end

endmodule
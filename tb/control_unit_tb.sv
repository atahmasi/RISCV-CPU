`timescale 1ns/1ps
module control_unit_tb;

    // Inputs
    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;
    logic       zero;

    // Outputs
    logic       reg_write;
    logic       mem_write;
    logic       mem_read;
    logic       alu_src;
    logic       mem_to_reg;
    logic       branch;
    logic       jal;
    logic       jalr;
    logic [3:0] alu_ctrl;

    // Instantiate the DUT
    control_unit dut (
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .zero(zero),
        .reg_write(reg_write),
        .mem_write(mem_write),
        .mem_read(mem_read),
        .alu_src(alu_src),
        .mem_to_reg(mem_to_reg),
        .branch(branch),
        .jal(jal),
        .jalr(jalr),
        .alu_ctrl(alu_ctrl)
    );

    // Test tracking
    localparam int TOTAL_TESTS = 6;
    int tests_passed = 0;

    initial begin
        $dumpfile("control_unit.vcd");
        $dumpvars(0, control_unit_tb);

        $display("\n=== Control Unit Test ===\n");

        // ------------------------
        // Test 1: R-type ADD
        // ------------------------
        begin
            automatic int ok = 0;
            $display("Test 1: R-type ADD");
            opcode = 7'b0110011; // R-type
            funct3 = 3'b000;
            funct7 = 7'b0000000;
            #1;
            if (reg_write === 1) ok++; else $display(" ✗ reg_write wrong");
            if (alu_ctrl === 4'b0000) ok++; else $display(" ✗ alu_ctrl wrong");
            if (ok == 2) begin
                $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // ------------------------
        // Test 2: I-type ADDI
        // ------------------------
        begin
            automatic int ok = 0;
            $display("Test 2: I-type ADDI");
            opcode = 7'b0010011; // I-type
            funct3 = 3'b000;
            funct7 = 7'b0000000;
            #1;
            if (reg_write === 1) ok++; else $display(" ✗ reg_write wrong");
            if (alu_src === 1) ok++; else $display(" ✗ alu_src wrong");
            if (alu_ctrl === 4'b0000) ok++; else $display(" ✗ alu_ctrl wrong");
            if (ok == 3) begin
                $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // ------------------------
        // Test 3: Load (LW)
        // ------------------------
        begin
            automatic int ok = 0;
            $display("Test 3: LOAD LW");
            opcode = 7'b0000011;
            funct3 = 3'b010; // LW
            #1;
            if (reg_write === 1) ok++; else $display(" ✗ reg_write wrong");
            if (mem_read === 1) ok++; else $display(" ✗ mem_read wrong");
            if (mem_to_reg === 1) ok++; else $display(" ✗ mem_to_reg wrong");
            if (alu_src === 1) ok++; else $display(" ✗ alu_src wrong");
            if (ok == 4) begin
                $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // ------------------------
        // Test 4: Store (SW)
        // ------------------------
        begin
            automatic int ok = 0;
            $display("Test 4: STORE SW");
            opcode = 7'b0100011;
            funct3 = 3'b010; // SW
            #1;
            if (mem_write === 1) ok++; else $display(" ✗ mem_write wrong");
            if (alu_src === 1) ok++; else $display(" ✗ alu_src wrong");
            if (ok == 2) begin
                $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // ------------------------
        // Test 5: Branch BEQ
        // ------------------------
        begin
            automatic int ok = 0;
            $display("Test 5: BRANCH BEQ");
            opcode = 7'b1100011;
            funct3 = 3'b000; // BEQ
            zero = 1;
            #1;
            if (branch === 1) ok++; else $display(" ✗ branch wrong");
            if (alu_ctrl === 4'b0001) ok++; else $display(" ✗ alu_ctrl wrong");
            if (ok == 2) begin
                $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // ------------------------
        // Test 6: JAL
        // ------------------------
        begin
            automatic int ok = 0;
            $display("Test 6: JAL");
            opcode = 7'b1101111;
            #1;
            if (jal === 1) ok++; else $display(" ✗ jal wrong");
            if (reg_write === 1) ok++; else $display(" ✗ reg_write wrong");
            if (ok == 2) begin
                $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // ------------------------
        // Summary
        // ------------------------
        $display("================================");
        $display("Tests passed: %0d/%0d", tests_passed, TOTAL_TESTS);
        if (tests_passed == TOTAL_TESTS)
            $display("Status: ✓ ALL TESTS PASSED");
        else
            $fatal(1, "Some tests failed");
        $display("================================\n");

        #10 $finish;
    end

endmodule

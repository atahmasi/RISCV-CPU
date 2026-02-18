module register_tb;

    logic clk;
    logic rst;

    logic we;
    logic [4:0] rs1, rs2, rd;
    logic [31:0] wd;
    logic [31:0] rd1, rd2;

    localparam int TOTAL_TESTS = 8;
    int tests_passed = 0;

    // DUT
    register dut (
        .clk(clk),
        .rst(rst),
        .we(we),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .wd(wd),
        .rd1(rd1),
        .rd2(rd2)
    );

    // Clock
    always #5 clk = ~clk;

    initial begin
        clk = 0;
        rst = 1;
        we  = 0;
        rs1 = 0;
        rs2 = 0;
        rd  = 0;
        wd  = 0;

        $dumpfile("register.vcd");
        $dumpvars(0, register);

        $display("\n=== Register File Test ===\n");

        #10 rst = 0;

        // Test 1: x0 always 0
        begin
            automatic int ok = 0;
            $display("Test 1: x0 is always zero");
            rs1 = 0;
            #1;
            if (rd1 === 0) ok++; else $display(" ✗ x0 != 0 (%h)", rd1);
            if (ok == 1) begin $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // Test 2: Write x1 = 10
        begin
            automatic int ok = 0;
            $display("Test 2: Write x1 = 10");
            @(posedge clk);
            rd = 1; wd = 10; we = 1;
            @(posedge clk);
            we = 0;
            rs1 = 1; #1;
            if (rd1 === 10) ok++; else $display(" ✗ Expected 10, got %0d", rd1);
            if (ok == 1) begin $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // Test 3: Write x2 = 20
        begin
            automatic int ok = 0;
            $display("Test 3: Write x2 = 20");
            @(posedge clk);
            rd = 2; wd = 20; we = 1;
            @(posedge clk);
            we = 0;
            rs1 = 2; #1;
            if (rd1 === 20) ok++; else $display(" ✗ Expected 20, got %0d", rd1);
            if (ok == 1) begin $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // Test 4: Read two registers
        begin
            automatic int ok = 0;
            $display("Test 4: Read x1 and x2 together");
            @(posedge clk);
            rs1 = 1; rs2 = 2; #1;
            if (rd1 === 10) ok++; else $display(" ✗ x1 wrong");
            if (rd2 === 20) ok++; else $display(" ✗ x2 wrong");
            if (ok == 2) begin $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // Test 5: Overwrite x1
        begin
            automatic int ok = 0;
            $display("Test 5: Overwrite x1 = 99");
            @(posedge clk);
            rd = 1; wd = 99; we = 1;
            @(posedge clk);
            we = 0;
            rs1 = 1; #1;
            if (rd1 === 99) ok++; else $display(" ✗ Expected 99, got %0d", rd1);
            if (ok == 1) begin $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // Test 6: Attempt write to x0
        begin
            automatic int ok = 0;
            $display("Test 6: Write to x0 ignored");
            @(posedge clk);
            rd = 0; wd = 1234; we = 1;
            @(posedge clk);
            we = 0;
            rs1 = 0; #1;
            if (rd1 === 0) ok++; else $display(" ✗ x0 changed!");
            if (ok == 1) begin $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // Test 7: Read & write same reg same cycle
        begin
            automatic int ok = 0;
            $display("Test 7: Read and write x3 same cycle");
            @(posedge clk);
            rd = 3; wd = 55; we = 1;
            rs1 = 3;
            @(posedge clk);
            we = 0;
            #1;
            if (rd1 === 55) ok++; else $display(" ✗ Expected 55, got %0d", rd1);
            if (ok == 1) begin $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        // Test 8: Reset clears regs
        begin
            automatic int ok = 0;
            $display("Test 8: Reset clears registers");
            @(posedge clk);
            rst = 1; @(posedge clk); rst = 0;
            rs1 = 1; #1;
            if (rd1 === 0) ok++; else $display(" ✗ x1 not cleared");
            if (ok == 1) begin $display(" ✓ PASS\n"); tests_passed++; end
            else $display(" ✗ FAIL\n");
        end

        $display("================================");
        $display("Tests passed: %0d/%0d", tests_passed, TOTAL_TESTS);
        if (tests_passed == TOTAL_TESTS)
            $display("Status: ✓ ALL TESTS PASSED");
        else
            $display( "Some tests failed");
        $display("================================\n");

        #10 $finish;
    end
endmodule

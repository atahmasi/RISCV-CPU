module decoder_tb;
    logic [31:0] instruction;
    logic [6:0]  opcode;
    logic [4:0]  rd, rs1, rs2;
    logic [2:0]  funct3;
    logic [6:0]  funct7;
    logic [31:0] imm;
    
    localparam int TOTAL_TESTS = 12;
    int tests_passed = 0;
    int local_checks;

    // DUT
    decoder dut (
        .instruction(instruction),
        .opcode(opcode),
        .rd(rd),
        .rs1(rs1),
        .rs2(rs2),
        .funct3(funct3),
        .funct7(funct7),
        .imm(imm)
    );

    // helper task (module scope)
    task reset_instr;
        begin
            instruction = 32'b0;
            #1;
        end
    endtask

    initial begin
        $dumpfile("decoder.vcd");
        $dumpvars(0, decoder_tb);
        $display("\n=== RISC-V Decoder Test ===\n");

        // ---------- Test 1 ----------
       // reset_instr(); 
        local_checks = 0;
        $display("Test 1: ADDI x1, x0, 10");
        instruction = 32'h00A00093; #10;
        if (opcode===7'b0010011) local_checks++;
        if (rd===1) local_checks++;
        if (rs1===0) local_checks++;
        if ($signed(imm)===10) local_checks++;
        if (local_checks==4) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 2 ----------
       // reset_instr();
        local_checks = 0;
        $display("Test 2: ADD x3, x1, x2");
        instruction = 32'h002081B3; #10;
        if (opcode===7'b0110011) local_checks++;
        if (rd===3) local_checks++;
        if (rs1===1) local_checks++;
        if (rs2===2) local_checks++;
        if (funct3===3'b000) local_checks++;
        if (funct7===7'b0000000) local_checks++;
        if (local_checks==6) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 3 ----------
        //reset_instr();
         local_checks = 0;
        $display("Test 3: BEQ x1, x2, 8");
        instruction = 32'h00208463; #10;
        if (opcode===7'b1100011) local_checks++;
        if (rs1===1) local_checks++;
        if (rs2===2) local_checks++;
        if ($signed(imm)===8) local_checks++;
        if (local_checks==4) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 4 ----------
        //reset_instr();
        local_checks = 0;
        $display("Test 4: LUI x5, 0x12345");
        instruction = 32'h123452B7; #10;
        if (opcode===7'b0110111) local_checks++;
        if (rd===5) local_checks++;
        if (imm===32'h12345000) local_checks++;
        if (local_checks==3) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 5 ----------
       // reset_instr(); 
        local_checks = 0;
        $display("Test 5: JAL x1, 100");
        instruction = 32'h064000EF; #10;
        if (opcode===7'b1101111) local_checks++;
        if (rd===1) local_checks++;
        if ($signed(imm)===100) local_checks++;
        if (local_checks==3) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 6 ----------
       // reset_instr();
        local_checks = 0;
        $display("Test 6: SW x2, 4(x1)");
        instruction = 32'h0020A223; #10;
        if (opcode===7'b0100011) local_checks++;
        if (rs1===1) local_checks++;
        if (rs2===2) local_checks++;
        if ($signed(imm)===4) local_checks++;
        if (local_checks==4) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 7 ----------
       // reset_instr();
        local_checks = 0;
        $display("Test 7: ADDI x3, x0, -1");
        instruction = 32'hFFF00193; #10;
        if (opcode===7'b0010011) local_checks++;
        if (rd===3) local_checks++;
        if ($signed(imm)===-1) local_checks++;
        if (local_checks==3) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 8 ----------
       // reset_instr();
        local_checks = 0;
        $display("Test 8: BEQ x0, x0, -4");
        instruction = 32'hFE000CE3; #10;
        if (opcode===7'b1100011) local_checks++;
        if ($signed(imm)===-4) local_checks++;
        if (local_checks==2) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 9 ----------
       // reset_instr();
        local_checks = 0;
        $display("Test 9: JALR x1, 0(x2)");
        instruction = 32'h000100E7; #10;
        if (opcode===7'b1100111) local_checks++;
        if (rd===1) local_checks++;
        if (rs1===2) local_checks++;
        if ($signed(imm)===0) local_checks++;
        if (local_checks==4) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 10 ----------
       // reset_instr();
        local_checks = 0;
        $display("Test 10: SLLI x4, x1, 3");
        instruction = 32'h00309213; #10;
        if (opcode===7'b0010011) local_checks++;
        if (rd===4) local_checks++;
        if (funct3===3'b001) local_checks++;
        if (imm[4:0]===3) local_checks++;
        if (local_checks==4) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 11 ----------
       // reset_instr();
        local_checks = 0;
        $display("Test 11: SLTI x6, x1, 7");
        instruction = 32'h0070A313; #10;
        if (opcode===7'b0010011) local_checks++;
        if (rd===6) local_checks++;
        if (funct3===3'b010) local_checks++;
        if (imm===7) local_checks++;
        if (local_checks==4) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Test 12 ----------
       // reset_instr();
        local_checks = 0;
        $display("Test 12: LB x3, 1(x2)");
        instruction = 32'h00110183; #10;
        if (opcode===7'b0000011) local_checks++;
        if (rd===3) local_checks++;
        if (rs1===2) local_checks++;
        if (funct3===3'b000) local_checks++;
        if (imm===1) local_checks++;
        if (local_checks==5) begin $display("  ✓ PASS\n"); tests_passed++; end else $display("  ✗ FAIL\n");

        // ---------- Summary ----------
        $display("================================");
        $display("Tests passed: %0d/%0d", tests_passed, TOTAL_TESTS);
        if (tests_passed == TOTAL_TESTS)
            $display("Status: ✓ ALL TESTS PASSED");
        else
            $fatal(1, "✗ SOME TESTS FAILED");
        $display("================================\n");

        #10 $finish;
    end
endmodule
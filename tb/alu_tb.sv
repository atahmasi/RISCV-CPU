module alu_tb;

    logic [31:0] a, b;
    logic [3:0]  op;
    logic [31:0] y;
    logic        zero;

    int tests = 0;
    int pass  = 0;

    // DUT
    alu dut (
        .a(a),
        .b(b),
        .op(op),
        .y(y),
        .zero(zero)
    );

    task check(input [31:0] exp);
        tests++;
        #1;
        if (y === exp) begin
            $display(" ✓ PASS: y = %0d", y);
            pass++;
        end else begin
            $display(" ✗ FAIL: expected %0d, got %0d", exp, y);
        end
    endtask

    initial begin
        $dumpfile("alu.vcd");
        $dumpvars(0, alu_tb);

        $display("\n=== ALU TESTS ===\n");

        // ADD
        $display("ADD");
        op = 4'b0000;
        a = 10; b = 20; check(30);

        // SUB
        $display("SUB");
        op = 4'b0001;
        a = 50; b = 20; check(30);

        // AND
        $display("AND");
        op = 4'b0010;
        a = 32'hF0F0; b = 32'h0FF0; check(32'h00F0);

        // OR
        $display("OR");
        op = 4'b0011;
        a = 32'hF0F0; b = 32'h0FF0; check(32'hFFF0);

        // XOR
        $display("XOR");
        op = 4'b0100;
        a = 32'hAAAA; b = 32'h5555; check(32'hFFFF);

        // SLT signed
        $display("SLT");
        op = 4'b0101;
        a = -5; b = 10; check(1);
        a = 10; b = -5; check(0);

        // SLL
        $display("SLL");
        op = 4'b0110;
        a = 1; b = 4; check(16);

        // SRL
        $display("SRL");
        op = 4'b0111;
        a = 32'h80000000; b = 1; check(32'h40000000);

        // Zero flag test
        $display("ZERO flag");
        op = 4'b0001;
        a = 10; b = 10;
        #1;
        if (zero) begin
            $display(" ✓ PASS: zero flag set");
            pass++;
        end else begin
            $display(" ✗ FAIL: zero flag not set");
        end
        tests++;

        $display("\n===============================");
        $display("Passed %0d / %0d tests", pass, tests);
        if (pass == tests) $display("Status: ✓ ALL TESTS PASSED");
        else $fatal(1, "Some tests failed");
        $display("===============================\n");

        #5 $finish;
    end

endmodule

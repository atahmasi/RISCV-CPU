module cpu_tb;

    logic clk = 0;
    logic rst = 1;

    cpu dut(.clk(clk), .rst(rst));

    always #5 clk = ~clk;

    initial begin
        $dumpfile("cpu.vcd");
        $dumpvars(0, cpu_tb);

        #10 rst = 0;

        // preload registers
        dut.rf.regs[1] = 10; // x1
        dut.rf.regs[2] = 20; // x2

        #50;

        $display("x3 = %0d", dut.rf.regs[3]); // expect 30
        $display("x4 = %0d", dut.rf.regs[4]); // expect 40

        $finish;
    end
endmodule

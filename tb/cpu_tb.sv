module cpu_tb;

    logic clk = 0;
    logic rst = 1;

    cpu dut(.clk(clk), .rst(rst));
    
    always #5 clk = ~clk;

    initial begin
        $dumpfile("cpu.vcd");
        $dumpvars(0, cpu_tb);
/*
        #25 assign rst = 0;

        // preload registers
        
        dut.rf.regs[1] = 10; // x1
        dut.rf.regs[2] = 20; // x2

        #50;

        $display("x1 = %0d", dut.rf.regs[1]); // expect 10
        $display("x2 = %0d", dut.rf.regs[2]); // expect 20
        $display("x3 = %0d", dut.rf.regs[3]); // expect 30
        $display("x4 = %0d", dut.rf.regs[4]); // expect 40
        $display("Initial PC = %h", dut.pc);
        */
        dut.imem[0] = 32'h00A00093; // ADDI x1, x0, 10
        dut.imem[1] = 32'h01400113; // ADDI x2, x0, 20
        dut.imem[2] = 32'h002081B3; // ADD  x3, x1, x2
        dut.imem[3] = 32'h00118233; // ADD  x4, x3, x1

       // rst = 1;
        repeat (2) @(posedge clk);
        rst = 0;

        repeat (6) @(posedge clk);

        $display("x1 = %0d", dut.rf.regs[1]);
        $display("x2 = %0d", dut.rf.regs[2]);
        $display("x3 = %0d", dut.rf.regs[3]);
        $display("x4 = %0d", dut.rf.regs[4]);
        $display("Initial PC = %h", dut.pc);//dependant on how long waited after rst=0

        $finish;
    end
endmodule

module top_tb;

    logic CLOCK_50 = 0;
    logic [1:0] KEY = 2'b11;
    logic [9:0] LEDR;

    top dut (
        .CLOCK_50(CLOCK_50),
        .KEY(KEY),
        .LEDR(LEDR)
    );

    always #5 CLOCK_50 = ~CLOCK_50;

    // -------------------------
    // Monitor
    // -------------------------
    always @(posedge CLOCK_50) begin
        if (dut.mem_write && dut.mem_addr == 32'h80000000) begin
            $display("LED WRITE: addr=%h data=%h LEDR=%b",
                     dut.mem_addr, dut.mem_wdata, LEDR);
        end
    end

    // -------------------------
    // Initial Block
    // -------------------------
    initial begin
        $dumpfile("top.vcd");
        $dumpvars(0, top_tb);

        // Reset
        repeat (2) @(posedge CLOCK_50);
        KEY[0] = 0; // assert reset
        repeat (2) @(posedge CLOCK_50);
        KEY[0] = 1; // release reset

        // Simple program to toggle LED
        // write 1 to 0x80000000
        dut.cpu0.imem[0] = 32'h00100093; // ADDI x1, x0, 1
        dut.cpu0.imem[1] = 32'h80000137; // LUI x2, 0x80000
        dut.cpu0.imem[2] = 32'h00112023; // SW x1, 0(x2)

        // write 0 to 0x80000000
        dut.cpu0.imem[3] = 32'h00000093; // ADDI x1, x0, 0
        dut.cpu0.imem[4] = 32'h00112023; // SW x1, 0(x2)

        // loop forever
        dut.cpu0.imem[5] = 32'h0000006F; // JAL x0, 0

        // Run simulation
        repeat (30) @(posedge CLOCK_50);

        $display("Final LEDR = %b", LEDR);

        $finish;
    end

endmodule
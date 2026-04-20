module uart_tx_tb;

    logic clk = 0;
    logic rst = 1;

    logic tx_start;
    logic [7:0] tx_data;
    logic tx;
    logic tx_busy;

    // Instantiate DUT
    uart_tx #(.CLKS_PER_BIT(16'd10)) dut ( // small for fast sim
        .clk(clk),
        .rst(rst),
        .tx_start(tx_start),
        .tx_data(tx_data),
        .tx(tx),
        .tx_busy(tx_busy)
    );

    // Clock
    always #5 clk = ~clk;

    initial begin
        $dumpfile("uart_tx.vcd");
        $dumpvars(0, uart_tx_tb);

        tx_start = 0;
        tx_data  = 8'h00;

        // Reset
        repeat (5) @(posedge clk);
        rst = 0;

        // -------------------------
        // Send 'A' (0x41)
        // -------------------------
        @(posedge clk);
        tx_data  = 8'h41; // 'A'
        tx_start = 1;

        @(posedge clk);
        tx_start = 0;

        // Wait until done
        wait (tx_busy == 0);

        // -------------------------
        // Send 'Z' (0x5A)
        // -------------------------
        repeat (5) @(posedge clk);

        @(posedge clk);
        tx_data  = 8'h5A; // 'Z'
        tx_start = 1;

        @(posedge clk);
        tx_start = 0;

        wait (tx_busy == 0);

        // Done
        repeat (20) @(posedge clk);

        $display("UART TX simulation complete.");
        $finish;
    end

endmodule
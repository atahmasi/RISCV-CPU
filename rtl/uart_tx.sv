module uart_tx #(
    parameter logic [15:0] CLKS_PER_BIT = 16'd434  // 50MHz / 115200
)(
    input  logic clk,
    input  logic rst,

    input  logic tx_start,
    input  logic [7:0] tx_data,

    output logic tx,
    output logic tx_busy
);

    typedef enum logic [2:0] {
        IDLE,
        START,
        DATA,
        STOP
    } state_t;

    state_t state;

    logic [15:0] clk_count;
    logic [2:0]  bit_index;
    logic [7:0]  data_reg;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state      <= IDLE;
            clk_count  <= 0;
            bit_index  <= 0;
            data_reg   <= 0;
            tx         <= 1; // idle = high
            tx_busy    <= 0;
        end else begin
            case (state)

                IDLE: begin
                    tx <= 1;
                    tx_busy <= 0;
                    clk_count <= 0;
                    bit_index <= 0;

                    if (tx_start) begin
                        data_reg <= tx_data;
                        tx_busy  <= 1;
                        state    <= START;
                    end
                end

                START: begin
                    tx <= 0; // start bit

                    if (clk_count < CLKS_PER_BIT - 1) begin
                        clk_count <= clk_count + 1;
                    end else begin
                        clk_count <= 0;
                        state <= DATA;
                    end
                end

                DATA: begin
                    tx <= data_reg[bit_index];

                    if (clk_count < CLKS_PER_BIT - 1) begin
                        clk_count <= clk_count + 1;
                    end else begin
                        clk_count <= 0;

                        if (bit_index < 7) begin
                            bit_index <= bit_index + 1;
                        end else begin
                            bit_index <= 0;
                            state <= STOP;
                        end
                    end
                end

                STOP: begin
                    tx <= 1; // stop bit

                    if (clk_count < CLKS_PER_BIT - 1) begin
                        clk_count <= clk_count + 1;
                    end else begin
                        clk_count <= 0;
                        state <= IDLE;
                    end
                end

                default: begin
                    state <= IDLE;
                end

            endcase
        end
    end

endmodule
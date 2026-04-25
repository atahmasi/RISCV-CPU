#define LED_REG (*(volatile unsigned int *)0x80000000)

int add(int a, int b) {
    return a + b;        // ADD, JALR (return), JAL (call)
}

int main() {
    // R-type: ADD, SUB, AND, OR, XOR, SLL, SRL
    int a = 5, b = 3;
    int r_add  = a + b;       // ADD  → 8
    int r_sub  = a - b;       // SUB  → 2
    int r_and  = a & b;       // AND  → 1
    int r_or   = a | b;       // OR   → 7
    int r_xor  = a ^ b;       // XOR  → 6
    int r_sll  = a << 1;      // SLL  → 10
    int r_srl  = a >> 1;      // SRL  → 2

    // LW: store then load back
    volatile int mem_test = 42;
    int loaded = mem_test;    // SW then LW

    // Branch: BEQ, BNE, BLT
    int branch_ok = 0;
    if (loaded == 42)         // BEQ
        branch_ok = 1;
    if (r_sub != 0)           // BNE
        branch_ok++;
    if (r_and < r_or)         // BLT
        branch_ok++;

    // JALR: indirect function call
    int sum = add(r_add, r_sub);  // JAL + JALR on return

    // Show result on LEDs — if everything worked, branch_ok=3, sum=10
    // LED pattern: low 4 bits = branch_ok, high 4 bits = sum
    LED_REG = (sum << 4) | branch_ok;

    while(1);
    return 0;
}
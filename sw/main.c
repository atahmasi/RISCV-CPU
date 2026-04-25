#define LED_REG (*(volatile unsigned int *)0x80000000)

int main() {
    // Test 1: Basic I-type — if you see 0x05, this works
    int a = 5;
    LED_REG = a;
    for(volatile int i = 0; i < 2000000; i++);

    // Test 2: R-type ADD — if you see 0x08, ADD works
    int b = 3;
    int r = a + b;
    LED_REG = r;
    for(volatile int i = 0; i < 2000000; i++);

    // Test 3: R-type SUB — if you see 0x02, SUB works
    r = a - b;
    LED_REG = r;
    for(volatile int i = 0; i < 2000000; i++);

    // Test 4: Branch — if you see 0x01, BEQ works
    int branch_ok = 0;
    if (a == 5)
        branch_ok = 1;
    LED_REG = branch_ok;
    for(volatile int i = 0; i < 2000000; i++);

    // Test 5: LW — if you see 0x2A (42), load works
    volatile int mem_test = 42;
    int loaded = mem_test;
    LED_REG = loaded;
    for(volatile int i = 0; i < 2000000; i++);

    // Final: flash 0xFF to signal done
    LED_REG = 0xFF;
    while(1);
    return 0;
}
#define LED_REG (*(volatile unsigned int *)0x80000000)

void delay() {
    for(volatile int i = 0; i < 5000000; i++);
}

int main() {
    // Test 1: Basic I-type — expect 0x05
    int a = 5;
    LED_REG = a;
    delay();

    // Test 2: R-type ADD — expect 0x08
    int b = 3;
    int r = a + b;
    LED_REG = r;
    delay();

    // Test 3: R-type SUB — expect 0x02
    r = a - b;
    LED_REG = r;
    delay();

    // Test 4: Branch BEQ — expect 0x01
    int branch_ok = 0;
    if (a == 5)
        branch_ok = 1;
    LED_REG = branch_ok;
    delay();

    // Test 5: LW — expect 0x2A (42)
    volatile int mem_test = 42;
    int loaded = mem_test;
    LED_REG = loaded;
    delay();

    // Done — expect 0xFF
    LED_REG = 0xFF;
    while(1);
    return 0;
}
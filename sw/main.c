#define LED_REG (*(volatile unsigned int *)0x80000000)

// simple function to test jal/jalr + stack
int add(int a, int b) {
    int c = a + b;
    return c;
}

void delay(volatile int count) {
    while (count--) {
        asm volatile("nop");
    }
}

int main() {

    // ---------------------------
    // TEST 1: immediate MMIO write
    // ---------------------------
    LED_REG = 0x1;
    delay(10000000);

    // ---------------------------
    // TEST 2: overwrite pattern
    // ---------------------------
    LED_REG = 0x3;
    delay(10000000);

    // ---------------------------
    // TEST 3: arithmetic + function call
    // (tests jal/jalr + stack)
    // ---------------------------
    int x = add(10, 20);   // expect 30
    LED_REG = x;           // should show 0x1E
    delay(10000000);

    // ---------------------------
    // TEST 4: load/store behavior
    // ---------------------------
    volatile int *ptr = (volatile int *)0x80000000;
    *ptr = 0x55;
    delay(10000000);

    int y = *ptr;          // read-back test
    LED_REG = y;           // should still be 0x55
    delay(10000000);

    // ---------------------------
    // TEST 5: loop pattern test
    // ---------------------------
    for (int i = 0; i < 10; i++) {
        LED_REG = i;
        delay(5000000);
    }

    // ---------------------------
    // FINAL STATE
    // ---------------------------
    LED_REG = 0xFF;

    while (1) {
        // halt loop (PC stability test)
        asm volatile("nop");
    }

    return 0;
}
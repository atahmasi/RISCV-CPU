#define LED_REG (*(volatile unsigned int *)0x80000000)

void delay() {
    for(volatile int i = 0; i < 5000000; i++);
}

int main() {
    LED_REG = 5;        // expect 00000101
    delay();

    LED_REG = 5 + 3;    // expect 00001000
    delay();

    LED_REG = 5 - 3;    // expect 00000010
    delay();

    LED_REG = 5 & 3;    // expect 00000001
    delay();

    LED_REG = 5 | 3;    // expect 00000111
    delay();

    LED_REG = 0xFF;     // expect 11111111
    while(1);
    return 0;
}
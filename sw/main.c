#define LED_REG (*(volatile unsigned int *)0x80000000)

volatile int a = 5;
volatile int b = 3;
volatile int r = 0;
volatile int mem_test = 42;

void delay() {
    for(volatile int i = 0; i < 5000000; i++);
}

int main() {
    LED_REG = a;        // expect 0x05
    delay();

    r = a + b;
    LED_REG = r;        // expect 0x08
    delay();

    r = a - b;
    LED_REG = r;        // expect 0x02
    delay();

    r = a & b;
    LED_REG = r;        // expect 0x01
    delay();

    LED_REG = mem_test; // expect 0x2A
    delay();

    LED_REG = 0xFF;
    while(1);
    return 0;
}
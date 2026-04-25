#define LED_REG (*(volatile unsigned int *)0x80000000)

volatile int i;

int main() {
    LED_REG = 5;
    for(i = 0; i < 5000000; i++);

    LED_REG = 8;
    for(i = 0; i < 5000000; i++);

    LED_REG = 2;
    for(i = 0; i < 5000000; i++);

    LED_REG = 1;
    for(i = 0; i < 5000000; i++);

    LED_REG = 7;
    for(i = 0; i < 5000000; i++);

    LED_REG = 0xFF;
    while(1);
    return 0;
}
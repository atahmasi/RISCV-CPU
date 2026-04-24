#define LED_REG (*(volatile unsigned int *)0x80000000)

int main() {
    LED_REG = 0xAA;
    while(1);
    return 0;
}

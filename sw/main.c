#define LED_REG (*(volatile unsigned int *)0x80000000)

int main() {
    LED_REG = 0xFF;
    while(1);
    return 0;
}
#define LED_REG (*(volatile unsigned int *)0x80000000)

int main() {
    for(int i = 0; i < 50000000; i++);
    LED_REG = 0xFF;
    while(1);
    return 0;
}
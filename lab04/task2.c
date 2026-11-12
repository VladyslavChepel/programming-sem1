#include <stdio.h>

unsigned int set_bit(unsigned int reg, int n);
unsigned int clear_bit(unsigned int reg, int n);
unsigned int toggle_bit(unsigned int reg, int n);
int check_bit(unsigned int reg, int n);
void print_binary(unsigned int reg);

int main(void)
{
    unsigned int reg = 0xA5A5A5A5;

    printf("Початковий регістр:\n");
    print_binary(reg);

    reg = set_bit(reg, 14);
    printf("Встановлено біт 14:\n");
    print_binary(reg);

    reg = clear_bit(reg, 10);
    printf("Скинуто біт 10:\n");
    print_binary(reg);

    reg = toggle_bit(reg, 6);
    printf("Інвертовано біт 6:\n");
    print_binary(reg);

    printf("Біт 28 = %d\n", check_bit(reg, 28));
    printf("Кінцевий регістр: 0x%08X\n", reg);

    return 0;
}

unsigned int set_bit(unsigned int reg, int n)
{
    return reg | (1u << n);
}

unsigned int clear_bit(unsigned int reg, int n)
{
    return reg & ~(1u << n);
}

unsigned int toggle_bit(unsigned int reg, int n)
{
    return reg ^ (1u << n);
}

int check_bit(unsigned int reg, int n)
{
    if (reg & (1u << n)) {
        return 1;
    }
    return 0;
}

void print_binary(unsigned int reg)
{
    for (int i = 31; i >= 0; i--) {
        printf("%u", (reg >> i) & 1);
        if (i % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

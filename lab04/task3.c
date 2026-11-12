#include <stdio.h>

unsigned int pack(unsigned int op, unsigned int r1, unsigned int r2);
void unpack(unsigned int word, unsigned int *op, unsigned int *r1, unsigned int *r2);

int main(void)
{
    unsigned int op, r1, r2;
    unsigned int op2, r1_2, r2_2;
    unsigned int word;

    printf("Код операції (0..15): ");
    scanf("%u", &op);
    printf("Перший регістр (0..63): ");
    scanf("%u", &r1);
    printf("Другий регістр (0..63): ");
    scanf("%u", &r2);

    if (op > 15 || r1 > 63 || r2 > 63) {
        printf("значення поза діапазоном\n");
        return 1;
    }

    word = pack(op, r1, r2);
    printf("Слово: 0x%04X\n", word);

    unpack(word, &op2, &r1_2, &r2_2);
    printf("Після розпакування: op = %u, r1 = %u, r2 = %u\n", op2, r1_2, r2_2);

    if (op == op2 && r1 == r1_2 && r2 == r2_2) {
        printf("Значення збігаються\n");
    } else {
        printf("Значення не збігаються\n");
    }

    return 0;
}

unsigned int pack(unsigned int op, unsigned int r1, unsigned int r2)
{
    return (op & 0xF) | ((r1 & 0x3F) << 4) | ((r2 & 0x3F) << 10);
}

void unpack(unsigned int word, unsigned int *op, unsigned int *r1, unsigned int *r2)
{
    *op = word & 0xF;
    *r1 = (word >> 4) & 0x3F;
    *r2 = (word >> 10) & 0x3F;
}

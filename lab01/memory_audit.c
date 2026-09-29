#include <stdio.h>

int main(void) {
    printf("розміри типів данних\n");
    printf("sizeof(char)      = %zu\n", sizeof(char));
    printf("sizeof(short)     = %zu\n", sizeof(short));
    printf("sizeof(int)       = %zu\n", sizeof(int));
    printf("sizeof(long)      = %zu\n", sizeof(long));
    printf("sizeof(long long) = %zu\n", sizeof(long long));
    printf("sizeof(float)     = %zu\n", sizeof(float));
    printf("sizeof(double)    = %zu\n", sizeof(double));
    printf("sizeof(void*)     = %zu\n", sizeof(void*));

    unsigned char byte_test = 255;

    printf("\n інтеджер оверфлоу \n");
    printf("Начальное значение:\n");
    printf("Десятичный формат:     %u\n", byte_test);
    printf("Шестнадцатеричный:     0x%02X\n", byte_test);

    byte_test = byte_test + 1;

    printf("\n інтеджер оверфлоу + 1 \n");
    printf("Десятичный формат:     %u\n", byte_test);
    printf("Шестнадцатеричный:     0x%02X\n", byte_test);

    return 0;
}
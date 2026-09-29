#include <stdio.h>
#include <math.h>
int main(void) {
    double m = 0.0; // Маса тягарця (кг)
    double k = 0.0; // Жорсткість пружини (Н/м)
    // 1. Введення маси
    printf("Введіть масу: ");
    if (scanf("%lf", &m) != 1) {
        printf("некоректні дані (очікувалося число)\n");
        return 1;
    }

    if (m <= 0.0) {
        printf("некоректні дані (очікувалося число більше за 0)\n");
        return 1;
    }

    printf("Вкажіть жорсткість пружини: ");
    if (scanf("%lf", &k) != 1) {
        printf("некоректні дані (очікувалося число)\n");
        return 1;
    }

    if (k <= 0.0) {
        printf("некоректні дані (очікувалося число більше за 0)\n");
        return 1;
    }
    double T = 2.0 * M_PI * sqrt(m / k);

    printf("m = %.3f кг\n", m);
    printf("k = %.3f Н/м\n", k);
    printf("T = %.3f с\n", T);
    return 0;
}
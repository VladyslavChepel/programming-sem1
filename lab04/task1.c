#include <stdio.h>

double paralel(double r1, double r2);
double min_opir(double r);

int main(void)
{
    int n;
    double r1, r2, r, rmin;

    printf("Скільки пар резисторів: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nПара %d\n", i);
        printf("R1 = ");
        scanf("%lf", &r1);
        printf("R2 = ");
        scanf("%lf", &r2);

        if (r1 <= 0 || r2 <= 0) {
            printf("опір має бути більше 0\n");
            continue;
        }

        r = paralel(r1, r2);
        rmin = min_opir(r);

        printf("Опір: %.2lf Ом\n", r);
        printf("Мінімальний опір: %.2lf Ом\n", rmin);
    }

    return 0;
}

double paralel(double r1, double r2)
{
    return r1 * r2 / (r1 + r2);
}

double min_opir(double r)
{
    static double min = -1;

    if (min < 0 || r < min) {
        min = r;
    }
    return min;
}

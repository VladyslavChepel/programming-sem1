#include <stdio.h>
#include <math.h>

int main()
{
    double x, epsilon, sum, a, exact, pohybka;
    int n, kilkist;

    printf("введіть X: ");
    scanf("%lf", &x);
    printf("введіть точність епсілон: ");
    scanf("%lf", &epsilon);

    sum = 1;
    a = -x * x;
    n = 1;
    kilkist = 0;
    if (epsilon <= 0) {
        printf("епсілон має бути більше за 0\n");
        return 1;
    }

    while (fabs(a) >= epsilon) {
        sum = sum + a;
        n++;
        kilkist++;
        a = a * (-4 * x * x) / ((2 * n - 1) * (2 * n));
        if (kilkist > 100000) {
            printf("ряд не сбігаєтся\n");
            break;
        }
    }

    exact = cos(x) * cos(x);
    pohybka = fabs(sum - exact);

    printf("сума ряду: %lf\n", sum);
    printf("точне значення: %lf\n", exact);
    printf("похибка: %lf\n", pohybka);
    printf("кількість ітерацій: %d\n", kilkist);

    return 0;
}
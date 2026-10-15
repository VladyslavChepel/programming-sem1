#include <stdio.h>
#include <math.h>

int main(void)
{
    double x_start, x_end, dx, x, y;

    printf("Введіть Xstart: ");
    if (scanf("%lf", &x_start) != 1) {
    printf(" некоректна відповідь\n"); return 1;
    }
    printf("Введіть Xend: ");
    if (scanf("%lf", &x_end) != 1) {
    printf(" некоректна відповідь\n"); return 1;
    }
    printf("Введіть крок dX: ");
    if (scanf("%lf", &dx) != 1) {
    printf(" некоректна відповідь\n"); return 1;
    }

    if (x_start >= x_end) { printf("Xstart має бути більше Xend\n"); return 1; }
    if (dx <= 0)          { printf("крок має бути більше 0\n"); return 1; }


     for (x = x_start; x <= x_end; x += dx) {
        if (x <= 0) {
            y = 2 * x;
            printf("%10.2lf , %11.4lf\n", x, y);
        }
        else if (x <= 3) {
            if (x + 1 == 0) {
                printf("%10.2lf , [Не визначено]\n", x);
            }
            else {
                y = 1 / (x + 1);
                printf("%10.2lf , %11.4lf\n", x, y);
            }
        }
        else {
            if (x - 3 < 0) {
                printf("%10.2lf , [Не визначено]\n", x);
            }
            else {
                y = sqrt(x - 3);
                printf("%10.2lf , %11.4lf \n", x, y);
            }
        }
    }
    return 0;
}
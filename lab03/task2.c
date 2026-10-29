#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

static void printMatrix(int m[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%6d", m[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int m[N][N];

    srand((unsigned)time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            m[i][j] = rand() % 19 - 9;
        }
    }

    printf("Матриця до обробки:\n");
    printMatrix(m);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i > j) {
                m[i][j] = 0;
            }
        }
    }

    printf("\nМатриця після обробки (верхньотрикутна):\n");
    printMatrix(m);

    return 0;
}

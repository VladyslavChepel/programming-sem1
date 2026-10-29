#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

int main(void)
{
    int a[SIZE];

    srand((unsigned)time(NULL));

    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 101 - 50;
    }

    printf("Масив: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");

    
    int maxLen = 1;    
    int curLen = 1;     
    int maxStart = 0;  

    for (int i = 1; i < SIZE; i++) {
        if (a[i] == a[i - 1]) {
            curLen++;
        } else {
            curLen = 1;
        }
        if (curLen > maxLen) {
            maxLen = curLen;
            maxStart = i - curLen + 1;
        }
    }

    printf("Довжина найдовшої послідовності однакових чисел: %d\n", maxLen);
    printf("Значення: %d, починається з індексу %d\n", a[maxStart], maxStart);

    return 0;
}

#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
    char str[MAX_LEN + 1];
    int letters = 0, digits = 0, punct = 0;

    printf("Введіть текст: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            letters++;
        } else if (c >= '0' && c <= '9') {
            digits++;
        } else if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) ||
                   (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) {
            punct++;
        }
    }

    printf("Літер: %d\nЦифр: %d\nРозділових знаків: %d\n", letters, digits, punct);

    return 0;
}

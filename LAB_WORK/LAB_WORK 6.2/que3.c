#include <stdio.h>

int main() {
    int N, i = 2;

    printf("Enter any number: ");
    scanf("%d", &N);

    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= N);

    return 0;
}


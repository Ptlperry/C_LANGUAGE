#include <stdio.h>

int main() {
    int N;

    printf("Enter any number: ");
    scanf("%d", &N);
    if (N % 2 == 0) {
        N--;
    }

    while (N >= 1) {
        printf("%d \n", N);
        N -= 2; 
    }
    return 0;
}


#include <stdio.h>

int main() {
    int N, i = 1;

    printf("Enter any number: ");
    scanf("%d", &N);

 
    while (i <= N) {
        printf("%d \n", i);
        i++;
    }
    
    return 0;
}


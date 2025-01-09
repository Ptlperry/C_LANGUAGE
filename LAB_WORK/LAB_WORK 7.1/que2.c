#include <stdio.h>

int main() {
    int i,j,k = 5; 

    for (i = k; i >= 1; i--) {
        for (j= i; j <= k; j++) {
            printf("%d ", j);
        }
        printf("\n"); 
    }
}


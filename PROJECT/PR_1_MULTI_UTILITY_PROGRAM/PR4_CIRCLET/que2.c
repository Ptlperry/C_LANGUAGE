#include <stdio.h>

int main() {
    int i,j,k = 11; 
    int l = k; 

    for (i = 1; i <= 4; i++) { 
        for (j = 1; j <= i; j++) { 
            printf("%d ", l); 
            l++; 
        }
        printf("\n"); 
    }

    return 0;
}



#include <stdio.h>

int main() {
    int i,j,rows = 6; 

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            
            if (i == 1 || i == 4 || (j == 1 && i > 1) || (j == rows && i < 4))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


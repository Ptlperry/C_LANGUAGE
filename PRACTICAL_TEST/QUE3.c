#include <stdio.h>

int main() {
    int rows = 5;  
    int num = 10; 
	int i,j,k;
    for (i = 0; i < rows; i++) {

        for (j = 0; j < i; j++) {
            printf("_ ");
        }
        for (k = num - i; k >= 6; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}


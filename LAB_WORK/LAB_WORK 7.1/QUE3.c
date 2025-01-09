#include <stdio.h>

int main() {
    int i,j,k = 5; 
    
    for (i = k; i >= 1; i--) {
    	
        for (j = k; j >= i; j--) {
        	
            printf("%d ", i);
        }
        
           printf("\n");
    }
}


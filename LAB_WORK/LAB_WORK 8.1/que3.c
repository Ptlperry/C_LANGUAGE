#include <stdio.h>

int main() {
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int A[n], B[n], C[n];
    printf("Enter Array A's elements:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &A[i]);
    }


    printf("Enter Array B's elements:\n");
    for (i = 0; i < n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &B[i]);
    }

    
    for (i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
    }

    printf("Array C is: ");
    for (i = 0; i < n; i++) {
        printf("%d", C[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

}


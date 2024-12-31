#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter array size: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = sum / n;
    printf("Average of an Array: %.1f\n", average);

  
}


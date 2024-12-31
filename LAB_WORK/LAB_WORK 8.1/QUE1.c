#include <stdio.h>

int main() {
    int i,size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("Length of the array: %d\n", size);

    return 0;
}


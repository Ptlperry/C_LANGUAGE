#include <stdio.h>

main() {
    int first_side, second_side, third_side;
    printf("Enter the first angle: ");
    scanf("%d", &first_side);
    printf("Enter the second angle: ");
    scanf("%d", &second_side);
    third_side = 180 - (first_side + second_side);
    printf("The third angle is: %d", third_side);
}


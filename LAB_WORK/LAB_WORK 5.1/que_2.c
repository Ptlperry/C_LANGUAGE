#include <stdio.h>

main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is Positive.\n");
    } else if (number < 0) {
        printf("The number is Negative.\n");
    } else {
        printf("The number is Neutral.\n");
    }
}

#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;


    printf("Enter any number: ");
    scanf("%d", &number);


    if (number < 0) {
        number = -number;
    }

    lastDigit = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;


    printf("The sum of the first and the last digit: %d\n", firstDigit + lastDigit);

    return 0;
}


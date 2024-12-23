#include <stdio.h>

int main() {
    double length, area;

    printf("Enter the length of a side of the square: ");
    scanf("%lf", &length);

    area = length * length;

    printf("The area of the square is: %.2lf\n", area);

    return 0;
}


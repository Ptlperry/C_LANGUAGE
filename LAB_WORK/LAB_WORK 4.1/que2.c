#include <stdio.h>

main() {
   
    double x, y, result;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of y: ");
    scanf("%lf", &y);

    result = (x - y) * (x - y);

    printf("The result of the formula (x + y)^2 is: %.2lf\n", result);

}


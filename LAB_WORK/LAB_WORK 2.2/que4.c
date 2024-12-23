#include <stdio.h>

int main() {
    float p, r, n, simple_interest;

 
    printf("Enter the principal amount (P): ");
    scanf("%f", &p);

    printf("Enter the interest rate (R) in percentage: ");
    scanf("%f", &r);

    printf("Enter the time period (N) in months: ");
    scanf("%f", &n);

    simple_interest = (p * r * n) / 100;


    printf("The Simple Interest is: %.2f\n", simple_interest);

    return 0;
}


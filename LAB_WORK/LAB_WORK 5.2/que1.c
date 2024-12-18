#include <stdio.h>

int main() {
    int num1, num2, num3, min_value;

    printf("Enter a value of the first number: ");
    scanf("%d", &num1);

    printf("Enter a value of the second number: ");
    scanf("%d", &num2);

    printf("Enter a value of the third number: ");
    scanf("%d", &num3);

    
    if (num1 < num2) {
        if (num1 < num3) {
            min_value = num1;
        } else {
            min_value = num3;
        }
    } else {
        if (num2 < num3) {
            min_value = num2;
        } else {
            min_value = num3;
        }
}
    printf("The minimum value is: %d\n", min_value);

}


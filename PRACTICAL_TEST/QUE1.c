#include <stdio.h>

int main() {
    int num, first_num, last_num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999) {
    	
        printf("Invalid input\n");
    } else {
        last_num = num % 10;
        first_num = num / 100;
        sum = first_num + last_num;

        printf("Sum of the first and last digit: %d\n", sum);
    }

    return 0;
}

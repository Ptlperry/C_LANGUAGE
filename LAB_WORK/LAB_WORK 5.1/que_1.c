#include <stdio.h>

int main() {
    int first_num, second_num;

    printf("Enter a value of the first number: ");
    scanf("%d", &first_num);

    printf("Enter a value of the second number: ");
    scanf("%d", &second_num);


    if (first_num < second_num) {
        printf("The minimum value is: %d\n", first_num);
    } else {
        printf("The minimum value is: %d\n",second_num);
    }

}


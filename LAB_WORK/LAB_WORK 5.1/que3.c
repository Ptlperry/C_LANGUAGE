#include <stdio.h>

int main() {
    int maths, english, science;
    float average;
    
    printf("Enter Maths marks: ");
    scanf("%d", &maths);

    printf("Enter English marks: ");
    scanf("%d", &english);

    printf("Enter Science marks: ");
    scanf("%d", &science);


    average = (maths + english + science) / 3.0;


    printf("Average marks: %f\n", average);

}


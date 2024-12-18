#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);


    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

 
    printf("Your grade is %c. ", grade);

    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job!\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'E':
            printf("You passed, but need significant improvement.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

    return 0;
}



#include <stdio.h>

int main() {
    int score;
    char grade;
    printf("Enter your score: ");
    scanf("%d", &score);
    
    grade = (score >= 90) ? 'A1' :
            (score >= 80) ? 'B1' :
            (score >= 70) ? 'C1' :
            (score >= 60) ? 'D1' :
            (score >= 50) ? 'E1' : 'F1';

    printf("Your grade is %c\n",grade);
return 0;
}


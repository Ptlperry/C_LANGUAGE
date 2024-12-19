#include<stdio.h>

int main(){
    int first_year,second_year;
    printf("Enter First Number:");
    scanf("%d",&first_year);

     printf("Enter Second Number:");
    scanf("%d",&second_year);

    while(first_year<=second_year){
        if(first_year%4==0){
            printf("%d\n",first_year);
        }
        first_year++;
    }

}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    int len;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    printf("\nLength of the string is: %d", len);
    getch();
    return 0;
}

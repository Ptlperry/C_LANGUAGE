#include <stdio.h>
#include <string.h>
int main()
{

    char str[30];
    int n = 0, count = 0, i = 0, j = 0;
    printf("Enter String:");
    scanf("%s", &str);
    n = strlen(str);
    for (i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            count = 1;
            break;
        }
    }

    if (count == 1)
        printf("The given string is not a palindrome");
    else
        printf("The given string is a palindrome");

    return 0;
}


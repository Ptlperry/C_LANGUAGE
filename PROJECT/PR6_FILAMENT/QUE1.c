#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int i, length = 0, isPalindrome = 1;

    // Input the string
    printf("Enter any string: ");
    scanf("%s", str);

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string manually
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Check if the original string and reversed string are the same
    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}


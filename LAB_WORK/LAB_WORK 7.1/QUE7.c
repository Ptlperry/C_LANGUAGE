#include <stdio.h>

int main() {
    int i, j;
    char ch;

    // Outer loop for the number of rows
    for (i = 1; i <= 5; i++) {
        ch = 'A' + i - 1; // Initialize the character for the current row

        // Inner loop for printing the characters in reverse
        for (j = 1; j <= i; j++) {
            printf("%c ", ch--);
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}


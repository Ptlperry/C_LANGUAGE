#include <stdio.h>

int main() {
    int i,j,rows = 5; // Set the number of rows
    int number = 1; // Initialize the starting number

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (j = 1; j <= i; j++) {
            printf("%d ", number); // Print the current number
            number++; // Increment the number
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; // Indicate successful execution
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char sentence[256];

    // Open the first file to write
    file1 = fopen("file1.txt", "w");
    if (file1 == NULL) {
        perror("Error opening file1.txt");
        return EXIT_FAILURE;
    }

    // Get a sentence from the user
    printf("Enter a sentence to write into file1.txt: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Write the sentence into file1.txt
    fprintf(file1, "%s", sentence);
    fclose(file1);

    // Open file1.txt to read
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        perror("Error reopening file1.txt");
        return EXIT_FAILURE;
    }

    // Read the sentence from file1.txt
    fgets(sentence, sizeof(sentence), file1);
    fclose(file1);

    // Open the second file to write
    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        perror("Error opening file2.txt");
        return EXIT_FAILURE;
    }

    // Write the sentence into file2.txt
    fprintf(file2, "%s", sentence);
    fclose(file2);

    printf("The sentence has been written into file2.txt successfully.\n");

    return 0;
}

#include <stdio.h>

int i;
int main() {
    FILE *even_file, *odd_file;
    even_file = fopen("even_file.txt", "w");
    odd_file = fopen("odd_file.txt", "w");

    if (even_file == NULL || odd_file == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    
    for (i = 50; i <= 70; i += 2) {
        fprintf(even_file, "%d ", i);
    }
    for (i = 51; i <= 69; i += 2) {
        fprintf(odd_file, "%d ", i);
    }
    fclose(even_file);
    fclose(odd_file);

    printf("Even numbers written to even_file.txt\n");
    printf("Odd numbers written to odd_file.txt\n");

    return 0;
}

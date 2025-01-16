#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, freq[256] = {0};

    printf("Enter any string: ");
    scanf("%s", str); 

    len = strlen(str);

    // Calculate frequency of each character
    for (i = 0; i < len; i++) {
        freq[str[i]]++;
    }

    printf("\nFrequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, l, count[256] = {0};

    printf("Enter any string: ");
    scanf("%s", str); 

    l = strlen(str);

    for (i = 0; i < l; i++) {
        count[str[i]]++;
    }

    printf("\nFrequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("%c => %d\n", i, count[i]);
        }
    }

    return 0;
}

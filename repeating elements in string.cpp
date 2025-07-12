#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);  // Simple input without spaces

    printf("Repeating characters: ");

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%c ", str[i]);
                break;  // Print once and stop
            }
        }
    }

    return 0;
}


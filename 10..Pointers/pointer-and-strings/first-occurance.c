#include <stdio.h>

int main() {
    char str[100], ch, *p;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    p = str;

    while (*p != '\0') {
        if (*p == ch) {
            printf("Character found.");
            return 0;
        }
        p++;
    }

    printf("Character not found.");

    return 0;
}
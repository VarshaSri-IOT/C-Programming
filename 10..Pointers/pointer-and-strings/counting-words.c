#include <stdio.h>

int main() {
    char str[100], *p;
    int words = 1;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    p = str;

    while (*p != '\0') {
        if (*p == ' ')
            words++;
        p++;
    }

    printf("Words = %d", words);

    return 0;
}
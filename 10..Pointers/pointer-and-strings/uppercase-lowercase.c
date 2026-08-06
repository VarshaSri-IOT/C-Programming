#include <stdio.h>

int main() {
    char str[100], *p;
    int upper=0, lower=0, digit=0, special=0;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    p = str;

    while (*p != '\0') {
        if (*p >= 'A' && *p <= 'Z')
            upper++;
        else if (*p >= 'a' && *p <= 'z')
            lower++;
        else if (*p >= '0' && *p <= '9')
            digit++;
        else
            special++;

        p++;
    }

    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d\n", lower);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", special);

    return 0;
}
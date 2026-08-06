#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *start, *end;

    printf("Enter string: ");
    scanf("%s", str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            printf("Not a Palindrome");
            return 0;
        }
        start++;
        end--;
    }

    printf(" It is Palindrome");

    return 0;
}
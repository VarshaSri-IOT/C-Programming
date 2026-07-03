// leap year program//
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))// number should be dividible by 4 or 400 but not by 100//
        printf("%d is a Leap Year.", year);
    else
        printf("%d is Not a Leap Year.", year);

    return 0;
}
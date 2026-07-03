#include <stdio.h>
#include <limits.h>

int main()
{
    int max = INT_MAX;
    int min = INT_MIN;

    printf("Before Overflow  : %d\n", max);
    max++;
    printf("After Overflow   : %d\n\n", max);

    printf("Before Underflow : %d\n", min);
    min--;
    printf("After Underflow  : %d\n", min);

    return 0;
}
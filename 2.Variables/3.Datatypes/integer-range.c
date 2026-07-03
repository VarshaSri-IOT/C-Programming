#include <stdio.h>
#include <limits.h>

int main()
{
    printf("CHAR_MIN   = %d\n", CHAR_MIN);
    printf("CHAR_MAX   = %d\n\n", CHAR_MAX);

    printf("SHRT_MIN   = %d\n", SHRT_MIN);
    printf("SHRT_MAX   = %d\n\n", SHRT_MAX);

    printf("INT_MIN    = %d\n", INT_MIN);
    printf("INT_MAX    = %d\n\n", INT_MAX);

    printf("LONG_MIN   = %ld\n", LONG_MIN);
    printf("LONG_MAX   = %ld\n", LONG_MAX);

    return 0;
}
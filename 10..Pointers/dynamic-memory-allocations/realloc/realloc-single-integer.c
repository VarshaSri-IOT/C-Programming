#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    *ptr = 10;
    printf("Before realloc: %d\n", *ptr);

    ptr = (int *)realloc(ptr, sizeof(int));

    *ptr = 50;
    printf("After realloc: %d\n", *ptr);

    free(ptr);

    return 0;
}
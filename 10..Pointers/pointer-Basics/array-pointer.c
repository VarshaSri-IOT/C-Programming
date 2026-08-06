#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("%d\n", *ptr);//1st index value

    ptr++;
    printf("%d\n", *ptr);//incremented from first value

    ptr = ptr + 2;
    printf("%d\n", *ptr);//to the second one from 1st value above

    ptr--;
    printf("%d\n", *ptr);//from the above index to back a value

    return 0;
}
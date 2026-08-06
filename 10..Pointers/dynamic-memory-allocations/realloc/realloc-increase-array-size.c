#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, i;

    arr = (int *)malloc(3 * sizeof(int));

    for(i = 0; i < 3; i++)
        arr[i] = i + 1;

    arr = (int *)realloc(arr, 5 * sizeof(int));

    arr[3] = 4;
    arr[4] = 5;

    printf("Array elements:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
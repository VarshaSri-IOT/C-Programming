#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, newn, i, largest;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter new size: ");
    scanf("%d", &newn);

    arr = (int *)realloc(arr, newn * sizeof(int));

    if(newn > n)
    {
        printf("Enter %d new elements:\n", newn - n);
        for(i = n; i < newn; i++)
            scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(i = 1; i < newn; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest element = %d", largest);

    free(arr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, newn, i, sum = 0;

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

    for(i = 0; i < newn; i++)
        sum += arr[i];

    printf("Sum = %d", sum);

    free(arr);

    return 0;
}
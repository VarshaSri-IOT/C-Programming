#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    p = p + 2;//30
    *p = 100;//30 100

    p--;//20
    *p = 200;//20=100

    printf("%d %d %d %d %d\n",
           arr[0], arr[1], arr[2], arr[3], arr[4]);

    return 0;
}
#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    p += 3;
    *p += 10;
    p -= 2;
    *p *= 2;
    printf("%d %d %d %d %d",arr[0], arr[1], arr[2], arr[3], arr[4]);
    return 0;
}
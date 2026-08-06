#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], arr3[10];
    int *p1=arr1, *p2=arr2, *p3=arr3;
    int i;

    printf("Enter 5 elements of first array:\n");

    for(i=0;i<5;i++)
        scanf("%d", p1+i);

    printf("Enter 5 elements of second array:\n");

    for(i=0;i<5;i++)
        scanf("%d", p2+i);

    for(i=0;i<5;i++)
        *(p3+i)=*(p1+i);

    for(i=0;i<5;i++)
        *(p3+5+i)=*(p2+i);

    printf("Merged array:\n");

    for(i=0;i<10;i++)
        printf("%d ", *(p3+i));

    return 0;
}
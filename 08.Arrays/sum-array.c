#include<stdio.h>

int main()
{
    int a[2];
    int i,sum=0;

    printf("Enter the elements:");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<2;i++)
    {
        sum += a[i];
    }

    printf("Sum = %d",sum);

    return 0;
}
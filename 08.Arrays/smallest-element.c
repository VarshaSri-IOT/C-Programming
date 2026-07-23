#include<stdio.h>
int main()
{
    int a[2];
    int i ,smallest;
    printf("enter the numbers ");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=1;i<2;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("smallest=%d",a[i]);
    return 0;
}
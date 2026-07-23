#include<stdio.h>
int main()
{
    int a[3];
    int i,largest;
    printf("enter the numbers ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    largest =a[0];
    for(i=1;i<3;i++)
    {
        if (a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("largest=%d",largest);
    return 0;
}

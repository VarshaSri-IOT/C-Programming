#include<stdio.h>
int main()
{
    int a[5];
    int i;
    float average;
    int sum=0;
    printf("Enter the numbers ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=1;i<5;i++)
    {
       average=(float)sum/5;
    }
    printf(" float average=%.2f\n",average);
    return 0;
}
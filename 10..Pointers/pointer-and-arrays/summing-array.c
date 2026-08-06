#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int *ptr=arr;
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("sum =%d",sum);
    return 0;
}
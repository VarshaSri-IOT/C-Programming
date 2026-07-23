#include<stdio.h>
int main()
{
    int i,a[2];
    int reverse;
    printf("Enter two numbers");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reversed arrray:\n");
    for(i=1;i>=0;i--)
    {
        printf(" %d",a[i]);
    }
    return 0;

}
#include<stdio.h>
int add(int ,int );
int main()
{
    int a,b,sum;
    printf("enter a number:");
    scanf("%d%d",&a,&b);
    sum= add(a,b);
    printf("sum=%d",sum);
    return 0;
}
int add(int a ,int b)
{
    return a+b;
}
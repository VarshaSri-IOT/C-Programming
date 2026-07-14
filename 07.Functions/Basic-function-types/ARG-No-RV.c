#include<stdio.h>
void multiply(int,int);
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    multiply(a,b);
    return 0;
}
void multiply(int a,int b)
{
    printf("product=%d",a*b);
}

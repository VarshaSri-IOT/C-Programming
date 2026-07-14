#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    printf("sum=%d",a+b);
}
#include<stdio.h>
int main()
{
    int num,sum,rem;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
    sum=num%10;
    sum=sum*10+rem;
    num=num/10;
    }
    printf("the sum of the digits is %d",sum);
    return 0;

}
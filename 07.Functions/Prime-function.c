#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<=1)
     return 0;
     for(i=2;i<=n/2;i++)
     {
        if(n%i==0)
        return 0;
     }
     return 1;
}
int main()
{
    int num;

    printf("enter a number:");
    scanf("%d",&num);

    if(prime(num))
    {
    printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    return 0;
}

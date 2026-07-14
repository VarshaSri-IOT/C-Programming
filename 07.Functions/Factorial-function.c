#include<stdio.h>
long long factorial(int);
int main()
{
    int n;
    long long fact;
    printf("enter a number:");
    scanf("%d",&n);
    fact =factorial(n);
    printf("Factorial = %11d",fact);
    return 0;
}
long long factorial(int n)
{
    int i;
    long long fact = 1;
    for(i=1;i<=n;i++)
    {
    fact*=i;
    }
    return fact;
}


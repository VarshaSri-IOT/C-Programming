#include<stdio.h>
int reverse (int n)
{
    int rev =0,rem;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
return rev;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);

    printf("Reverse=%d",reverse(num));
    return 0;
}
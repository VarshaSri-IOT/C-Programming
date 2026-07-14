#include<stdio.h>

int square();

int main()
{
    int ans;

    ans = square();

    printf("Square = %d",ans);

    return 0;
}

int square()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    return n*n;
}
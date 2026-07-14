#include<stdio.h>
int fibonacci(int);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;
    int i;

    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    for(i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}
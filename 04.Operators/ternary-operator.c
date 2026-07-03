#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d",&num);

    (num%2==0)?printf("%d is Even\n",num)//?-ternary/conditional operator
        :printf("%d is odd\n",num);

    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);

    printf("\nlogical AND (a&&b)=%d",a&&b);
    printf("\nlogical OR(a||b)=%d",a||b);
    printf("\nlogical NOT(!a)=%d",!a);
    printf("\nlogical NOT(!b)%d",!b);

    return 0;
}
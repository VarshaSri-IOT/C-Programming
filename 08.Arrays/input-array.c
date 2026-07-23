#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("Enter the numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);   
    }
    printf("The elements are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
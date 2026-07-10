#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter a number:");
    scanf("%d",&num);

    while(num!=0){
        count++;
        num=num/10;
    }
    printf("number of digits:%d",count);
    return 0;
}
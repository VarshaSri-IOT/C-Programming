#include<stdio.h>
int main()
{
    int num,i;
    long long fact=1;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<0){
        printf("factorial is not for negative numbers");
    }
    else{
    for(i=1;i<=num;i++){
     fact=fact*i;
    }
    printf("factorial:%d",fact);
    return 0;
}
}
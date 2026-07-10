#include<stdio.h>
int main()
{
    int rev=0,rem,num,temp;

    printf("enter a number:");
    scanf("%d",&num);

    temp=num;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;    
    }
    if(temp==rev){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }return 0;

}
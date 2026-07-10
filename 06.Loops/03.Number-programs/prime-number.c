#include<stdio.h>
int main()
{
    int num,i,flag=1;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<=1)
      flag=0;
    else
    {
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                flag=0;
                break;
            }
        }

    }
    if(flag)
      printf("%d is a prime number:",num);
    else
      printf("%d is not a prime number:",num);
      return 0;

}
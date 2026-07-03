#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("==============ARITHMETIC OPERATORS===============\n\n");
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    printf("addition:%d\n",a+b);
    printf("subraction:%d\n",a-b);
    printf("multiplication :%d\n",a*b);
    printf("division:%d\n",a/b);
    printf("modulus:%d\n",a%b);
    printf("floatingdivision:%d\n",(float)a/b);

    printf("\n==============ASSIGNMENT OPERATORS============\n\n");
    temp=a;
    printf("Intial value:%d\n\n",temp);
    temp+=b;
    printf("After +=%d:%d\n",b,temp);
    temp-=b;
    printf("After -=%d:%d\n",b,temp);
    temp*=b;
    printf("After *=%d:%d\n",b,temp);
    temp/=b;
    printf("After /=%d:%d\n",b,temp);
    temp%=b;
    printf("After %%=%d:%d\n",b,temp);
    

    return 0;

    
}
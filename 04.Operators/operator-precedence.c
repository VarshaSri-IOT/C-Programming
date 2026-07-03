#include<stdio.h>
int main()
{
    int a,b,c,result;
    printf("Enter  the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    
    result =a+b*c;
    printf("a+b*c=%d\n",result);

    result=a+b-c;
    printf("a+b-c=%d\n",result);

    result=a-b/c;
    printf("a-b/c=%d\n",result);

    result=a-b*c;
    printf("a-b*c=%d\n",result);

    return 0;


}
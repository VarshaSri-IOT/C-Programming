#include<stdio.h>
int main()
{
    int i,a,b;
    char*num[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
    if(i<=9)
    {
        printf("%s\n",num[i-1]);
    }
    else if(i%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
  return 0;    
}

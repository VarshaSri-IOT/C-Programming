#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter threee numbers:");
    scanf("%d\n%d\n%d\n",&a,&b,&c);
    //pre increment//
    b=++a;
    printf("\n========PRE INCREMENT(++a)========\n");
    printf("value after++a:%d\n",a);
    printf("assigned value:%d\n",b);
    

    //post increment//
    a--;
    b=a++;
    printf("\n========== POST INCREMENT(a++)========\n");
    printf("assinged value:%d\n",b);
    printf("value after:%d\n",a);


    //pre decrement//
    c=--a;
    printf("\n===========PRE DECREMENT(--a)==========\n");
    printf("value after--a:%d\n",b);
    printf("assigned value:%d\n",c);


    //post decrement//
    c=a--;
    printf("\n=================POST DECREMENT(a--)========\n");
    printf("assigned value:%d\n",c);
    printf("value after a-- %d\n",a);

    return 0;



}
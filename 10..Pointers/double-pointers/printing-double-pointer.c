#include<stdio.h>
int main()
{
    int a=10;
    int*ptr=&a;
    int**dptr=&ptr;

    printf("a=%d\n",a);//value
    printf("*ptr=%d\n",ptr);//add
    printf("**dptr =%d\n",**dptr);//value
    return 0;
}
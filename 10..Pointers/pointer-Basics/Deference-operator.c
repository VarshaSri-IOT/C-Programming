#include<stdio.h>
int main()
{
    int a=10;
    int*ptr=&a;
    printf("Address of a:%p\n",ptr);
    printf("value of using pointer:%d\n",*ptr);
    *ptr=20;
    printf("new value of a :%d",a);
    return 0;
}
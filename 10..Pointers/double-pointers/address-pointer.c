#include<stdio.h>
int main()
{
    int a=5;
    int*ptr=&a;
    int**dptr=&ptr;
    printf("address of a =%p\n",(void*)&a);
    printf("ptr =%p\n",(void*)ptr);
    printf("address of ptr =%p\n",(void*)&ptr);
    printf("dptr =%p\n",(void*)dptr);
    return 0;

}
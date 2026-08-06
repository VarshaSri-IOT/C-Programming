#include<stdio.h>
int main()
{
    int a=20;
    int *ptr=&a;
    int**dptr=&ptr;

    **dptr=1000;
    printf("%d",a);
    return 0;
    
}
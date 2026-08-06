#include<stdio.h>
int main()
{
    int arr[5],*ptr;
    int i,smallest;
    ptr=arr;
    printf("enter 5 elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr+i);
    }
    smallest=*ptr;
    for(i=0;i<5;i++)
    {
        if(*(ptr+i)<smallest)
        {
            smallest=*(ptr+i);
        }
    }
    printf("smallest element = %d",smallest);
    return 0;
}
    
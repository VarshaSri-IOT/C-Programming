#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int*ptr;
    int i;
    ptr=arr;//pointing to first element
    for(i=0;i<5;i++)
    {
        *(ptr + i) = *(ptr + i) * 2;
    }
    for(i=0;i<5;i++)

       {
        printf(" %d\n",*(ptr+i));//twicing the each element
       }
    return 0;
}
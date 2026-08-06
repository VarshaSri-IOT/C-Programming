#include<stdio.h>
int main()
{
    int arr[5],*ptr;
    int i,largest;
    ptr=arr;
    printf("enter 5 elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr+i);
    }
    largest=*ptr;
    for(i=0;i<5;i++)
    {
        if(*(ptr+i)>largest)
        {
            largest=*(ptr+i);
        }
    }
    printf("largest element = %d",largest);
    return 0;
}
    
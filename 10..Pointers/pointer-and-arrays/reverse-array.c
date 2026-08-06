#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int*ptr=arr;
    int i,temp;
    printf("enter the elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr+i);
    }
    {
        for(i=0;i<5;i++)
        {
            temp=*(ptr+4-i);
            *(ptr+i)=*(ptr+4-i);
            *(ptr+4-i)=temp;
        }
        printf("reversed array:\n ");
        for(i=0;i<5;i++){

         printf("%d ",*(ptr+i));
        }
        return 0;
    }
    }
    
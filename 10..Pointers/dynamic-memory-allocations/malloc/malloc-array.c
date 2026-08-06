#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*arr,i;
    arr=(int*)malloc(5*sizeof(int));

    if(arr==NULL)
    {
        printf("memory allocation failed");
        return 0;
    }
    for(i=0;i<5;i++)
    {
        arr[i]=(i+1)*10;
    }
    printf("array elements");
    for(i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    free(arr);
    return 0;

}
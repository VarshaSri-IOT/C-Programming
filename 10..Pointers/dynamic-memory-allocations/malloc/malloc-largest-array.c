#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,i,largest,n;
    printf("The size of elements");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf("memory is failed");
        return 0;
    }
    printf("enter %d the elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }

    }
    printf("largest number =%d\n",largest);
    free(arr);
    return 0;



}
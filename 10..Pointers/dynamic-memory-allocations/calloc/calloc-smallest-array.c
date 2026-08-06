#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,i,smallest,n;
    printf("The  size of elements");
    scanf("%d",&n);

    arr=(int*)calloc(n,sizeof(int));
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
    smallest=arr[0];
    
    for(i=1;i<n;i++)
    {
        if(smallest>arr[i])
        {
            smallest=arr[i];
        }

    }
    printf("smallest number = %d\n",smallest);
    free(arr);
    return 0;



}
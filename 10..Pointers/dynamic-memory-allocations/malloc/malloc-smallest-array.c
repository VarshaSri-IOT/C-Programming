#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,i,smallest,n;
    printf("size of element");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf("memory allocation is  failed");
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
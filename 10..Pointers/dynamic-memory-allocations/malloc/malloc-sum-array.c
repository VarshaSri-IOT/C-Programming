#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n,i,sum=0;

    printf("enter a size");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    if (arr==NULL)
    {
        printf("memory allocation failed");
        return 0;
    }
    printf("enter %d elements:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum=%d\n",sum);
    free(arr);
    return 0;

}
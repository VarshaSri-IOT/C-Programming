#include<stdio.h>
int main()
{
    int a[100],n,i,temp;
    printf("Enter a array size ");
    scanf("%d",&n);
    printf("Enter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=0;i<n-1;i++)
        a[i]=a[i+1];
    
    a[n-1]=temp;
    printf("array after the left rotation: \n");
    for(i=0;i<n;i++)

       printf( "%d ",a[i]);
    return 0;

}
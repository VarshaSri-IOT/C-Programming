#include<stdio.h>
int main()
{
    int a[10],b[20],c[30];
    int n1,n2;
    int i,j;
    printf("Enter the array size of first array \n");
    scanf("%d",&n1);
    printf("Enter the array elements \n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second array size \n ");
    scanf("%d",&n2);
    printf("Enter the elements in second array \n ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[n1+i]=b[i];
    }
    printf("Merged array\n ");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);

    }
    return 0;
}
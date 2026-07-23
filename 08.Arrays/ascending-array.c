#include<stdio.h>
int main()
{
    int a[100] ,i,j,temp,n;
    printf("Enter the size of elements ");
    scanf("%d",&n);

    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order  ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
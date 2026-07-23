#include<stdio.h>

int main()
{
    int a[100], n, i, j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            for(j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }

            n--;
            i--;
        }
    }

    printf("After removing duplicates:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
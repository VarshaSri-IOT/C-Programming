#include<stdio.h>

int main()
{
    int a[100], n, i, pos, ele;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter position: ");
    scanf("%d",&pos);// pos is position

    printf("Enter element: ");
    scanf("%d",&ele);// ele is element

    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }

    a[pos-1]=ele;
    n++;

    printf("After insertion:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
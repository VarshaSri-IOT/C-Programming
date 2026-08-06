#include <stdio.h>

int main()
{
    int arr[5], *ptr;
    int i, key, found = 0;

    ptr = arr;

    printf("Enter 5 elements:\n");

    for(i=0;i<5;i++)
        scanf("%d", ptr+i);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<5;i++)
    {
        if(*(ptr+i)==key)
        {
            printf("Element found at position %d", i+1);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Element not found");

    return 0;
}
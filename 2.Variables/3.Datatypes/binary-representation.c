#include <stdio.h>
int main()
{
    unsigned int num;
    int i;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Binary Representation: ");

    for(i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);

        if(i % 8 == 0)
            printf(" ");
    }

    printf("\n");

    return 0;
}
#include <stdio.h>

void display(int *ptr)
{
    printf("Value = %d\n", *ptr);
}

int main()
{
    int a = 10;

    display(&a);

    return 0;
}
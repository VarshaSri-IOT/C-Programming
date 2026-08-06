#include <stdio.h>

void change(int *x)
{
    *x = 50;
}

int main()
{
    int a = 10;

    change(&a);

    printf("Outside function: %d\n", a);

    return 0;
}
#include <stdio.h>

void change(int x)
{
    x = 100;
    printf("Inside Function: x = %d\n", x);
}

int main()
{
    int a = 10;

    printf("Before Function: a = %d\n", a);

    change(a);

    printf("After Function: a = %d\n", a);

    return 0;
}
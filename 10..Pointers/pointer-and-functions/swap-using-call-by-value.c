#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

int main()
{
    int x = 10, y = 20;

    swap(x, y);

    printf("Outside function:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
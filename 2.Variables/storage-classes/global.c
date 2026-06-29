#include <stdio.h>

int x = 100;

void display()
{
    printf("Inside display():%d\n", x);
}

int main()
{
    printf("Inside main():%d\n", x);

    display();

    return 0;
}
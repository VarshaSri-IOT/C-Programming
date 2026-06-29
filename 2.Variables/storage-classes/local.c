#include <stdio.h>

void display()
{
    int x = 20;

    printf("Inside display() : %d\n", x);
}

int main()
{
    int x = 10;

    printf("Inside main() : %d\n", x);

    display();

    return 0;
}
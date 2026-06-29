#include <stdio.h>

extern int number;

void display();

int main()
{
    printf("Main : %d\n", number);

    display();

    return 0;
}
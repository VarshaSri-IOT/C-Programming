#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main(void)
{
int number;


printf("Enter a number: ");
scanf("%d", &number);

printf("Square: %d\n", SQUARE(number));

return 0;
}

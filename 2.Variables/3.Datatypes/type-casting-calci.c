#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nInteger Division = %d\n", num1 / num2);
    printf("Floating Division = %.2f\n", (float)num1 / num2);

    return 0;
}
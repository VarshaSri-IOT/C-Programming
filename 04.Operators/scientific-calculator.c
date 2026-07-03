#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Square      = %.2lf\n", num * num);
    printf("Cube        = %.2lf\n", num * num * num);
    printf("Square Root = %.2lf\n", sqrt(num));

    return 0;
}
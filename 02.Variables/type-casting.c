#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("Without type casting = %d\n", a / b);
    printf("With type casting = %.2f\n", (float)a / b);

    return 0;
}
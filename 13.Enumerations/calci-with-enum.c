#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

int main() {
    enum Operation op;
    float a, b;

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;
        case DIVIDE:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero not allowed\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    float obtained, total;

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &total);

    printf("Percentage = %.2f%%\n", (obtained / total) * 100);

    return 0;
}
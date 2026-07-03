#include <stdio.h>

int main() {
    float income, tax;

    printf("Enter Annual Income: ");
    scanf("%f", &income);

    if (income <= 300000)
        tax = 0;
    else if (income <= 600000)
        tax = income * 0.05;
    else if (income <= 900000)
        tax = income * 0.10;
    else if (income <= 1200000)
        tax = income * 0.15;
    else
        tax = income * 0.20;

    printf("Income: %.2f\n", income);
    printf("Tax Amount: %.2f\n", tax);

    return 0;
}
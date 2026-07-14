#include <stdio.h>

int armstrong(int n)
{
    int temp = n, rem, sum = 0;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    return sum == n;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is not an Armstrong Number.", num);

    return 0;
}

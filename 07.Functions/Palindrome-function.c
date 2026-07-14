#include <stdio.h>

int reverse(int n)
{
    int rev = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == reverse(num))
        printf("%d is a Palindrome Number.", num);
    else
        printf("%d is not a Palindrome Number.", num);

    return 0;
}
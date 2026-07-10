#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0, rev = 0;
    int i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    if(num >= 0)
        printf("Positive Number\n");
    else
        printf("Negative Number\n");

    if(num <= 1)
        prime = 0;

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            prime = 0;
            break;
        }
    }

    if(prime)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum += rem;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    printf("Reverse Number: %d\n", rev);
    printf("Sum of Digits: %d\n", sum);

    return 0;
}
          
#include <stdio.h>

int main()
 {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBitwise AND (&)  = %d\n", a & b);
    printf("Bitwise OR (|)   = %d\n", a | b);
    printf("Bitwise XOR (^)  = %d\n", a ^ b);
    printf("Bitwise NOT (~a) = %d\n", ~a);
    printf("Left Shift (a<<1)= %d\n", a << 1);
    printf("Right Shift (a>>1)= %d\n", a >> 1);

    return 0;
}
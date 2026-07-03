#include<stdio.h>
#include<stdint.h>

int main()
{
    uint8_t a = 255;
    int8_t b = -128;
    uint16_t c = 65535;
    uint32_t d = 4000000000U;

    printf("uint8_t  = %u (Size = %zu bytes)\n", a, sizeof(a));
    printf("int8_t   = %d (Size = %zu bytes)\n", b, sizeof(b));
    printf("uint16_t = %u (Size = %zu bytes)\n", c, sizeof(c));
    printf("uint32_t = %u (Size = %zu bytes)\n", d, sizeof(d));

    return 0;
}
#include <stdio.h>
#include <stdint.h>

union Data
{
    uint32_t value;

    uint8_t bytes[4];
};

int main()
{
    union Data data;

    data.value = 0x12345678;

    printf("32-bit value: 0x%X\n", data.value);

    printf("Byte 0: 0x%X\n", data.bytes[0]);
    printf("Byte 1: 0x%X\n", data.bytes[1]);
    printf("Byte 2: 0x%X\n", data.bytes[2]);
    printf("Byte 3: 0x%X\n", data.bytes[3]);

    return 0;
}
#include <stdio.h>

union Data
{
    int number;
    float decimal;
    char character;
};

int main()
{
    union Data data;

    printf("Size of union: %zu bytes\n", sizeof(data));

    return 0;
}
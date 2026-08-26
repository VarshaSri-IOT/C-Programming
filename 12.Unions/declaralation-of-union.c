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

    data.number = 25;

    printf("Integer: %d\n", data.number);

    return 0;
}
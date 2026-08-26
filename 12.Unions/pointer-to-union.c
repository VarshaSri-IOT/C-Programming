#include <stdio.h>

union Data
{
    int number;
    float decimal;
};

int main()
{
    union Data data;
    union Data *ptr;

    ptr = &data;

    ptr->number = 50;

    printf("Value: %d\n", ptr->number);

    return 0;
}
#include <stdio.h>

union Data
{
    int number;
    float decimal;
};

void display(union Data data)
{
    printf("Integer: %d\n", data.number);
}

int main()
{
    union Data data;

    data.number = 100;

    display(data);

    return 0;
}
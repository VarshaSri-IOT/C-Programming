#include <stdio.h>

struct StructureData
{
    int number;
    float decimal;
    char character;
};

union UnionData
{
    int number;
    float decimal;
    char character;
};

int main()
{
    printf("Size of structure: %zu bytes\n",
           sizeof(struct StructureData));

    printf("Size of union: %zu bytes\n",
           sizeof(union UnionData));

    return 0;
}
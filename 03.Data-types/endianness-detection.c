#include <stdio.h>

int main()
{
    unsigned int num = 1;

    char *ptr = (char *)&num;

    if(*ptr ==4)
        printf("System is Little Endian.\n");
    else
        printf("System is Big Endian.\n");

    return 0;
}
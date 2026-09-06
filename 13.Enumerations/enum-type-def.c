#include <stdio.h>

typedef enum {
    OFF,
    ON
} Status;

int main() {
    Status device = ON;

    if (device == ON)
        printf("Device is ON\n");
    else
        printf("Device is OFF\n");

    return 0;
} 
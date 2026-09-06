#include <stdio.h>

enum Signal {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum Signal signal;

    printf("Enter signal (0-Red, 1-Yellow, 2-Green): ");
    scanf("%d", &signal);

    switch (signal) {
        case RED:
            printf("STOP\n");
            break;
        case YELLOW:
            printf("WAIT\n");
            break;
        case GREEN:
            printf("GO\n");
            break;
        default:
            printf("Invalid signal\n");
    }

    return 0;
}
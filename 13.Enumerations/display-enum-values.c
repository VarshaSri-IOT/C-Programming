#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Day d;

    for (d = MONDAY; d <= SUNDAY; d++)
        printf("%d\n", d);

    return 0;
}
#include <stdio.h>

enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Day day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    if (day >= MONDAY && day <= FRIDAY)
        printf("Weekday\n");
    else if (day == SATURDAY || day == SUNDAY)
        printf("Weekend\n");
    else
        printf("Invalid day\n");

    return 0;
}
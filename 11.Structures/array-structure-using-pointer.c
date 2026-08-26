#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s[3];
    struct Student *p;
    int i;

    p = s;

    for (i = 0; i < 3; i++) {
        printf("Enter roll, name and marks: ");
        scanf("%d %s %f", 
              (p + i)->roll,
              (p + i)->name,
              &(p + i)->marks);
    }

    printf("\nStudent Details\n");

    for (i = 0; i < 3; i++) {
        printf("%d %s %.2f\n",
               (p + i)->roll,
               (p + i)->name,
               (p + i)->marks);
    }

    return 0;
}
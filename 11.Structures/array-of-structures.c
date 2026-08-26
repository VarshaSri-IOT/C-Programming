#include <stdio.h>
struct Student {
    int roll;
    char name[20];
    float marks;
};
int main() {
    struct Student s[1];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter roll, name and marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++)
     {
        printf("%d %s %.2f\n",s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
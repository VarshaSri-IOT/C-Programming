#include <stdio.h>

typedef union
{
    int id;
    float marks;
    char grade;
} StudentData;

int main()
{
    StudentData student;

    student.id = 101;

    printf("Student ID: %d\n", student.id);

    return 0;
}
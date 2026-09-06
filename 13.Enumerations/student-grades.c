#include <stdio.h>

enum Grade {
    FAIL,
    PASS,
    FIRST_CLASS,
    DISTINCTION
};

int main() {
    int marks;
    enum Grade grade;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 40)
        grade = FAIL;
    else if (marks < 60)
        grade = PASS;
    else if (marks < 75)
        grade = FIRST_CLASS;
    else
        grade = DISTINCTION;

    switch (grade) {
        case FAIL:
            printf("Fail\n");
            break;
        case PASS:
            printf("Pass\n");
            break;
        case FIRST_CLASS:
            printf("First Class\n");
            break;
        case DISTINCTION:
            printf("Distinction\n");
            break;
    }

    return 0;
}
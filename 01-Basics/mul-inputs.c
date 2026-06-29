#include <stdio.h>

int main()
{
    char grade;
    int age;
    float cgpa;

    printf("Enter Age Grade CGPA : ");
    scanf("%d %c %f",&age,&grade,&cgpa);

    printf("Age = %d\n",age);
    printf("Grade = %c\n",grade);
    printf("CGPA = %.2f",cgpa);

    return 0;
}
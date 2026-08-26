#include<stdio.h>
struct Student
{
    int roll;
    char name[20];
    float marks ;
};
int main()
{
    struct Student s ;
 
    printf("enter a roll no");
    scanf("%d",&s.roll);

    printf("enter name");
    scanf("%s",s.name);

    printf("enter marks");
    scanf("%f",&s.marks);
    
    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);


    return 0;
 }
#include<stdio.h>
struct Student
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct Student s[1];
    int i,search,found =0;

    for(i=0;i<3;i++)
    {
        printf("Enter a roll name and marks :");
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }
    printf("Enter a roll number to search :");
    scanf("%d",&search);

    for(i=0;i<3;i++)
    {
        if (s[i].roll==search)
        {
            printf("student found\n");
            printf("roll no:%d\n",s[i].roll);
            printf("name %s\n",s[i].name);
            printf("marks:%2.f\n",s[i].marks);
            found = 1;
            break;
        }
    }
    if(found==0)
    {
        printf("student not found\n");
    }
    return 0;
}


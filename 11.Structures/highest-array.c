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
    int i,highest=0;
    for(i=1;i<3;i++)
    {
       printf("enter roll,name and marks:");
       scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }
    for(i=1;i<3;i++)
    {
        if(s[i].marks>s[highest].marks)
        highest=i;
    }
    printf("\nhighest marks\n");
    printf("roll:%d\n",s[highest].roll);
    printf("name:%s\n",s[highest].name);
    printf("marks:%.2f\n",s[highest].marks);
    
    return 0;

}
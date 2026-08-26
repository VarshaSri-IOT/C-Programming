#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee e;

    printf("Enter id name and salary");
    scanf("%d %s %f",&e.id,e.name,&e.salary);

    printf("\nid:%d\n",e.id);
    printf("name:%s\n",e.name);
    printf("salary :%2f\n",e.salary);
    return 0;
}
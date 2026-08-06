#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    char*p1=s1,*p2=s2;

    printf("enter a string ");
    scanf("%s",s1);

    printf("enter a string ");
    scanf("%s",s2);

    while(*p1==*p2 && *p1!='\0')
    {
        p1++;
        p2++;
    }
    if(*p1==*p2)
    {
        printf("string are equal");
    }
    else
    {
        printf("strings are  not equal");
    }
    return 0;
}
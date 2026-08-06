#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    char *p1=s1,*p2=s2;
    printf("enter a string");
    scanf("%[^\n]",s1);

    while(*p1!='\0')
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';
    printf("copied string:%s",s2);
    return 0;

}
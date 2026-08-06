#include<stdio.h>
int main()
{
    char str[100],*p;
    int count = 0;
    printf("enter a string ");
    scanf("%[^\n]",str);

    p=str;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    printf("length =%d",count);
    return 0;
}
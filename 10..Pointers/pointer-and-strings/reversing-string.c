#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],*start,*end,temp;
    printf("enter a string ");
    scanf("%s",str);
    start=str;
    end=str+strlen(str)-1;

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
    printf("reversed string :%s\n",str);
    return 0;
}
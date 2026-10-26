 #include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
int first, second;


printf("Enter two numbers: ");
scanf("%d %d", &first, &second);

printf("Maximum: %d\n", MAX(first, second));

return 0;


}

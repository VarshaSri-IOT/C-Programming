 #include <stdio.h>

#define LENGTH 10
#define WIDTH 5

int main(void)
{
int area = LENGTH * WIDTH;
int perimeter = 2 * (LENGTH + WIDTH);


printf("Length: %d\n", LENGTH);
printf("Width: %d\n", WIDTH);
printf("Area: %d\n", area);
printf("Perimeter: %d\n", perimeter);

return 0;


}

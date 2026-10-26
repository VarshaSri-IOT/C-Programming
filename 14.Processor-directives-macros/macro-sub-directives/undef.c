#include <stdio.h>

#define VALUE 10

int main(void)
{
printf("Before undef: %d\n", VALUE);


#undef VALUE
#define VALUE 25

printf("After redefining: %d\n", VALUE);

return 0;


}

 #include <stdio.h>

#define DEBUG

int main(void)
{
#ifdef DEBUG
printf("Debug mode is enabled.\n");
#endif
printf("Program is running.\n");

return 0;

}

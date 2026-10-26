 #include <stdio.h>

int main(void)
{
printf("File name: %s\n", __FILE__);
printf("Line number: %d\n", __LINE__);
printf("Compilation date: %s\n", __DATE__);
printf("Compilation time: %s\n", __TIME__);


return 0;


}

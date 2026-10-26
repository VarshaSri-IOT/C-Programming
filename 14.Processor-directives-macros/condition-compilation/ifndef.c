 #include <stdio.h>

#define FEATURE_ENABLED

int main(void)
{
#ifndef FEATURE_ENABLED
printf("Feature is disabled.\n");
#else
printf("Feature is enabled.\n");
#endif


return 0;


}

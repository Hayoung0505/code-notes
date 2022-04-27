#include <stdio.h>

#define LED 12

int main(int argc, char **argv)
{
	printf("define...\n");
	
	#if LED == 10
	     printf("LED ON 10... \n");
	#elif LED == 12
	     printf("LED ON 12... \n");
	#endif
	return 0;
}


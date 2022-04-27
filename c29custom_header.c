#include <stdio.h>
#include "c29header.h"

int main(int argc, char **argv)
{
	printf("custom header file...\n");
	
	printf("su : %d\n",su);
	
	test();
	
	printf("test2() : %d\n",test2());
	
	test3(999);
	
	printf("test4(777) : %d\n",test4(777));
	
	return 0;
}


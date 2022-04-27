#include <stdio.h>

int main(int argc, char **argv)
{
	printf("==typedef==============\n");
	typedef int INT;
	INT i =10;
	printf("%d\n",i);
	
	typedef unsigned int Uint;
	Uint x = -999;
	printf("%u\n",x);

	return 0;
}


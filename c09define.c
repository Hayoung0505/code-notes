#include <stdio.h>
#include <string.h>//strlen,strcmp,strcpy~~~

#define LED 4
#define ARR_LENGTH 10
//#undef LED

int main(int argc, char **argv)
{
	
	printf("define...\n");
	
	printf("LED...%d\n",LED);
	
	#undef LED
	 
	
	char name[ARR_LENGTH] = "yang";
	printf("name length...%d\n",strlen(name));
	printf("name sizeof...%d\n",sizeof(name));
	
	return 0;
}


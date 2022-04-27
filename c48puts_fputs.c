#include <stdio.h>

int main(int argc, char **argv)
{
	printf("other output...\n");
	
	char name[10] = "yangssem";
	printf("%s\n",name);
	
	//puts
	puts(name);//auto enter
	
	//fputs
	fputs(name,stdout);//enter x
	fputs("\n",stdout); 
	
	return 0;
}


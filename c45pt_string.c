#include <stdio.h>

int main(int argc, char **argv)
{
	printf("pointer string...\n");
	
	//char names[3][10] = {"yang","han","choi"};
	//char (*pt_names)[10] = names;
	
	char *name = "Kim";
    char *pt_names[3] = {"yang","han","choi"};
    for(int i=0;i<3;i++){
		printf("%s\n",pt_names[i]);
	}
	
	return 0;
}


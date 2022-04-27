#include <stdio.h>
#include <stdlib.h> //atoi,malloc,free

int main(int argc, char **argv)
{

	printf("char to int : atoi()\n");
	
	int num = 0;
	char str[10] = "2022";


    printf("%d, %s\n",num,str);
    
    num = atoi(str) + 10;
    
    printf("%d, %s\n", num, str);
    
    char su[10];
    //scanf
    printf("input su:\n");
    scanf("%s",su);
    
    printf("su:%d\n",atoi(su)+1);
    
    printf("char to float : atof()\n");
    
    char pi[10];
    printf("input pi:\n");
    scanf("%s",pi);
    printf("su:%.2f\n",atof(pi)+33.3333);

	return 0;
}


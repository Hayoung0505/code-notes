#include <stdio.h>

int main(int argc, char **argv)
{
	
	printf("pointer...\n");
	
	int su;
	int *pt;
	
	su = 100;
	pt = &su;
	
	printf("su : %d\n",su);
	printf("pt : %p\n",pt);
	printf("*pt : %d\n",*pt);
	printf("==========\n");
	
	
	
	su = 1000;
	
	printf("su : %d\n",su);
	printf("pt : %p\n",pt);
	printf("*pt : %d\n",*pt);
	
	printf("==========\n");
	*pt = 10000;
	
	printf("su : %d\n",su);
	printf("pt : %p\n",pt);
	printf("*pt : %d\n",*pt);
	
	printf("==========\n");
	int x =*pt;
	printf("x : %d\n",x);
	printf("&x : %p\n",&x);
	
	printf("=====double======\n");
	
	
	printf("======char=======\n");
	
	
	
	
	return 0;
}


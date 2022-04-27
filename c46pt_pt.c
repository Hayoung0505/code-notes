#include <stdio.h>

void test01(int **ppt);
void test02(char **ppt);


int main(int argc, char **argv)
{
	printf("pointer pointer...\n");
	
	int x =10;
	int *pt = &x;
	int **ppt = &pt;
	int ***pppt = &ppt;
    printf("======address=======");
    printf("x address : %p\n",&x);
    printf("pt address : %p\n",pt);
    printf("*ppt address : %p\n",*ppt);
    printf("**pppt address : %p\n",**pppt);
    
    printf("======value=======");
	printf("x value : %d\n",x);
	printf("*pt value : %d\n",*pt);
	printf("**ppt value : %d\n",**ppt);
	printf("***pppt value : %d\n",***pppt);
	
	
	printf("======value=======");
	x = 33;
	printf("x value : %d\n",x);
	printf("*pt value : %d\n",*pt);
	printf("**ppt value : %d\n",**ppt);
	printf("***pppt value : %d\n",***pppt);

	printf("======value=======");
	*pt = 99;
	printf("x value : %d\n",x);
	printf("*pt value : %d\n",*pt);
	printf("**ppt value : %d\n",**ppt);
	printf("***pppt value : %d\n",***pppt);

	
	printf("======value=======");
	**ppt = 100;
	printf("x value : %d\n",x);
	printf("*pt value : %d\n",*pt);
	printf("**ppt value : %d\n",**ppt);
	printf("***pppt value : %d\n",***pppt);

	
	printf("======value=======");
		
	***pppt = 1000;
	printf("x value : %d\n",x);
	printf("*pt value : %d\n",*pt);
	printf("**ppt value : %d\n",**ppt);
	printf("***pppt value : %d\n",***pppt);
	
	printf("=====char======");
	char c = 'A';
	char *pc = &c;
	char **ppc = &pc;
	char ***pppc = &ppc;
	printf("***pppc value : %d %c\n",***pppc,***pppc);
	
	printf("=====function======\n");
	
	test01(&pt);
	test02(&pc);
	
	return 0;
}//end main()

void test01(int **ppt){
	printf("**ppt value : %d\n",**ppt);
	}
void test02(char **ppt){
	printf("**ppt value : %d %c\n",**ppt,**ppt);
	}


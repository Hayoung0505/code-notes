#include <stdio.h>
void test01(int *pt);
void test02(double *pt);
void test03(char *pt);
int main(int argc, char **argv)
{
	printf("pointer ...\n");
	
	int su = 100;
	printf("su : %d\n",su);
	printf("&su : %p\n",&su);//address operator
	
	printf("===========\n");
	int *pt = &su;
	printf("pt : %p\n",pt);
	printf("*pt : %d\n",*pt);//변수에*이붙어있으면 값
	
    printf("===========\n");
	test01(&su);
	
	
	
	printf("=====double==test02()====\n");
	
	double d = 3.14;
	printf("d value: %lf\n",d);
	printf("&d : %p\n",&d);
	
	double *pt_d = &d;
	printf("pt_d : %p\n",pt_d);
	printf("*pt_d : %lf\n",*pt_d);
	
	printf("===========\n");
	test02(&d);
	printf("======char===test03()====\n");
	
	char c = 'A';
    printf("c : %c,%d\n",c,c);
    printf("&c : %p\n",&c);
	
	char *pt_c = &c;
	printf("&pt_c : %p\n",pt_c);
	printf("*pt_c : %c,%d\n",*pt_c,*pt_c);
	
	printf("============\n");
	test03(&c);
	
	
	return 0;
}//end main
void test03(char *pt){
    printf("test03()...pt : %p\n",pt);
	printf("test03()...*pt : %c, %d\n",*pt,*pt);
}

void test02(double *pt){
	printf("test02()...pt : %p\n",pt);
	printf("test02()...*pt : %.2lf\n",*pt);
	
	}
void test01(int *pt){
	printf("test01()...pt : %p\n",pt);
	printf("test01()...*pt : %d\n",*pt);
	
	}

#include <stdio.h>
#include <stdlib.h>
int* test01();
double* test02();
char* test03();

int main(int argc, char **argv)
{
	
	printf("pointer...\n");
	
	int *pt = NULL;
	
	//printf("pt : %p\n",pt);
	//pt = NULL;
	printf("pt : %p\n",pt);//(nil)
	
	int su = 100;
	pt = &su;
	printf("pt : %p\n",pt);//su address
	printf("*pt : %d\n",*pt);//su value
		printf("=======\n");

	int kor = 99;
	pt = &kor;
	printf("pt : %p\n",pt);//kor address
    printf("*pt : %d\n",*pt);//kor value
		printf("=======\n");


	pt = test01();
	printf("pt : %p\n",pt);//kor address
    printf("*pt : %d\n",*pt);//kor value
    free(pt);
		printf("=======\n");
	
	double* pt_d = test02();
	printf("pt_d : %p\n",pt_d);//kor address
    printf("*pt_d : %.2lf\n",*pt_d);//kor value
	free(pt_d);
	 
	 printf("=======\n");
	//test03();
	
	char *pt_c = test03();
	printf("pt_c : %p\n",pt_c); 
    printf("*pt_c : %c, %d\n",*pt_c); 
	free(pt_c);
	 
	
	
	return 0;
}//end main


char* test03(){
	char *pt = malloc(sizeof(char));	
	   
	printf("pt : %p\n",pt); 
	*pt = 'A';
	return pt;
}

double* test02(){
	double *pt = malloc(sizeof(double));	
	*pt = 3.14;
	 
	printf("pt : %p\n",pt);//malloc address
	
	return pt;
}

int* test01() {
	int su = 1000;
	int *pt = malloc(sizeof(int));
	printf("pt : %p\n",pt);//malloc address
	//return NULL;
	*pt = su;
	//return &su;// 안됨. 지역변수에 su를 할당하는것 안된다.
	return pt;
}

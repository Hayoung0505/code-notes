#include <stdio.h>
#define ARR_ROW 2;
#define ARR_COL 3;


void test01(int *pt_arrs);
void test02(int **ppt_arrs);

int main(int argc, char **argv)
{
	printf("pointer pointer...multi array.\n");
	
	int arrs[ARR_ROW][ARR_COL] = {{1,2,3},{4,5,6}};
	
	//1.
    int (*row)[ARR_ROW] =arrs;
    printf("row address : %p\n", row);
    
    //2.
    int *pt_arrs = (int*)arrs;
	printf("pt_arrs address : %p\n", pt_arrs);
	
	int **ppt_arrs = (int**)arrs;
	printf("*ppt_arrs address : %p\n", ppt_arrs );
	
	printf("======function=======\n");
	test01((int*)arrs);
	
	test02((int**)arrs);
	
	return 0;
}//end main

void test02(int **ppt_arrs){
	printf("==========\n");
	printf("sizeof(ppt_arrs):%d\n",sizeof(ppt_arrs));
	 
	 for(int x=0;x<ARR_ROW*ARR_COL;x++){
		 printf("%d\n",*((int*)ppt_arrs+ x));
	
	}
}
void test01(int *pt_arrs){
	printf("==========\n");
	printf("sizeof(pt_arrs):%d\n",sizeof(pt_arrs));
	 for(int x=0;x<ARR_ROW*ARR_COL;x++){
		 printf("%d\n",*(pt_arrs+ x));
	
	}

}

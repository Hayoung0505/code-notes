#include <stdio.h>
void test01_swap(int *x,int *y);
void test02_swap(int x,int y);

int main(int argc, char **argv)
{
	printf("pointer array \n");
	
	int a = 10;
	int b = 100;
	int c = 1000;
	int d = 10000;
	
	int *pt[4];//{address,address,address,address}
	printf("sizeof(pt):%d\n",sizeof(pt));
	printf("sizeof(int):%d\n",sizeof(int));
	pt[0] = &a;
	pt[1] = &b;
	pt[2] = &c;
	pt[3] = &d;
	
	printf("pt[0] address : %p\n",pt[0]); 
	printf("pt[1] address : %p\n",pt[1]); 
	printf("pt[2] address : %p\n",pt[2]); 
    printf("pt[3] address : %p\n",pt[3]); 
  
    printf("==========\n");
	printf("*pt[0] value : %d\n",*pt[0]); 
	printf("*pt[1] value : %d\n",*pt[1]); 
	printf("*pt[2] value : %d\n",*pt[2]); 
	printf("*pt[3] value : %d\n",*pt[3]); 
	
	printf("==========\n");
	for(int i=0;i<sizeof(pt)/sizeof(int);i++) {
  	printf("*pt[%d] value : %d\n",i,*pt[i]); 

    }	
	
	
	printf("==========\n");
	
	int sus[3] = {11,22,33};
	int *pt_sus = sus;
	//sus address == &sus[0]
	//*pt_sus value == sus[0] //11
	//*pt_sus value == *sus //11
	//*(pt_sus+0) value == sus[0] //11
	//*(pt_sus+0) value == *(sus+0) //11
	//pt_sus[0] value == sus[0] //11
	printf("pt_sus address : %p\n",pt_sus);
	printf("pt_sus+1 address : %p\n",pt_sus+1);
	printf("pt_sus+sizeof(*pt_sus)/sizeof(int) address : %p\n",pt_sus+sizeof(*pt_sus)/sizeof(int));
	printf("*sus value : %d\n",*sus);
	printf("*sus value : %d\n",*(sus+0));
	for(int i=0;i<sizeof(sus)/sizeof(int);i++){
		printf("+++++++%d\n",*pt_sus);
		pt_sus++;
		//sus++;//error
    }
	
	printf("==========\n");
	
	int sus2[3] = {11,22,33};
	int *pt_sus2[3];
	for(int i=0;i<sizeof(pt_sus2)/sizeof(int);i++){
		pt_sus2[i] = &sus2[i];
    }	
    for(int i=0;i<sizeof(pt_sus2)/sizeof(int);i++){
		printf("%d\n",*pt_sus2[i]);
    }
	
	
	//swap
	int x = 111;
	int y = 222;
	test01_swap(&x,&y);
	printf("==========\n");
	test02_swap(x,y);
	
    return 0;
}
  
void test02_swap(int x,int y){
	printf("%d, %d\n",x,y);
	int temp;
	temp = x;//temp 111
	x = y; //*x 222
	y = temp; //*y 111
	
	
	
	printf("%d, %d\n",x,y);
}
void test01_swap(int *x,int *y){
	printf("%d, %d\n",*x,*y);
	int temp;
	temp = *x;//temp 111
	*x = *y; //*x 222
	*y = temp; //*y 111
	
	
	
	printf("%d, %d\n",*x,*y);
}

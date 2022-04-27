#include <stdio.h>


int su = 100;
static int su2 = 44;
const int su3 = 88;

int main(int argc, char **argv)
{
	printf("variable...\n");
	
	printf("su : %d\n",su);
	su = 200;
	printf("su : %d\n",su);
	
	printf("static su2 : %d\n",su2);
	
	static int num = 99; 
	printf("static num : %d\n",num);

	if(1){
		auto int su = 333;//auto붙이면 local변수라고 쾅
		printf("if{} >> su : %d\n",su);
		
	}
	printf("su : %d\n",su);
	
	//su3 = 88; //read-only error
	printf("su3 : %d\n", su3);
	
	register int total = 100;//CPU에 할당 speed up
	printf("register total : %d\n",total);
	
	volatile int total2 = 200;//memory speed up
	printf("volatile total2 : %d\n",total2);
	
	return 0;
}


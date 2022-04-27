#include <stdio.h>

int main(int argc, char **argv)
{
	
	printf("pointer...\n");
	//value : %d,%ld,%lld, %f,%lf, %c,%s
	//address : %p
	
	int su = 100;
	printf("su value: %d\n",su);
	printf("su address: %p\n",&su);
	
	printf("===========\n");
	
	long lsu = 3000;
	printf("lsu value: %ld\n",lsu);
	printf("lsu address: %p\n",&lsu);
	
	printf("===========\n");
	
	double d = 3.14;
	printf("d value: %lf\n",d);
	printf("d address: %p\n",&d);
	
	
	printf("===========\n");
	
	int sus[4] = {11,22,33,44};
	printf("sus[0] value : %d\n",sus[0]);
	printf("sus[0] address : %p\n",&sus[0]);
    printf("sus address: %p\n",sus);
    
    printf("===========\n");
    char c = 'A';
    printf("c value : %c,%d\n",c,c);
    printf("c address : %p\n",&c);
	
	
	char cs[4] =  {'a','b','c','\0'};//쌍따옴표는 캐릭터 별 타입에 넣을수있음
 	printf("c[0] value : %c,%d\n",cs[0],cs[0]);
 	printf("c[0] address : %p\n",&cs[0]);
    printf("cs address : %p\n",cs);
    printf("cs value : %s\n",cs);//s라는 옵션이 있어서 가지고올수있는거지 실제론 배열일뿐, 이것만 밸류,,가

    return 0;

}


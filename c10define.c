#include <stdio.h>

#define sum(a) ((a##1)+(a##2)+(a##3))
#define sum2(a) printf("sum2 : %d\n",(a##1)+(a##2)+(a##3))
#define sum3(a) ((a##x)+(a##y))
#define sum4(a) printf("sum4 : %d\n",(a##x)+(a##y))
int main(int argc, char **argv)
{
	printf("define...\n");
	
	//int d1 = 10;
	//int d2 = 20;
	//int d3 = 30;
	int d1 =10, d2 = 20, d3 = 30;
	
	printf("sum...%d\n",d1+d2+d3);
	printf("sum...%d\n",sum(d));
	 sum2(d);
	 
	 
	 int dx = 200, dy = 300;
	 //sum3,sum4
	 printf("sum3...%d\n",dx+dy);
	 printf("sum3...%d\n",sum3(d));
	 
	 sum4(d);
	 
	return 0;
}


#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	printf("type...\n");
	
	int su = 100; //2~4byte
	printf("int :%d\n",su);
	su = -100;
	printf("int:%d\n",su);
	
	unsigned int su2 = -200;
	printf("unsigned int:%u\n",su2);
 
	
	char c = 'a';//1byte -128~127
	printf("char: %c\n",c);
	c = 128;//1byte
	printf("char: %d\n",c);
	
	unsigned char c2 = 'b';//0~255
	
	printf("unsigned char:%u\n",c2);
	
	
	short s1 = -32768;//2byte -32768~32767 : 65535
	printf("short: %d\n",s1);
	
	unsigned short s2 = -32768;//2byte 0부터 65535
	printf("unsigned short: %u\n",s2);
	
	long lng1 = 2147483647;//4byte
	printf("long: %ld\n",lng1);
	
	unsigned long lng2 = -2147483648;//4byte
	printf("unsigned long: %lu\n",lng2);
	
	long long llng1 = 92147483647;//4byte
	printf("long long: %lld\n",llng1);
	
	unsigned long long llng2 = -92147483648;//8byte
	printf("unsigned long long: %llu\n",llng2);
	
	float f = 3.141592f
	printf("float : %f\n",f);
	
	double d = 3.141592;
    printf("double : %lf\n",d);
    
    //no type >> void
    //#include <stdbool.h>
    
    bool b = true;
    printf("bool : %d\n",b);//1
    b =false;
    printf("bool : %d\n",b);//0
    
	return 0;
}


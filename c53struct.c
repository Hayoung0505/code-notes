#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#pragma pack(1) //padding byte remove
//default 4byte
//최대공간 가장큰 타입의 바이트.
//바이트 얼라인먼트:  Byte Alignment
//페딩 바이트 : 남는공간을 의미.
struct Test{
	char c;
	
	int x;
	char c2;
	double d;
	char name[10];
	char *pt_name;
};

struct Test2{
	int x;
	double d;
 
};

int main(int argc, char **argv)
{
	
	printf("struct...\n");
	
	struct Test t;
	t.c = 'A';
	t.x = 10;
	t.d = 3.14;
	strcpy(t.name,"kim");
	t.pt_name = "yangssem";
	
	printf("%d,%c\n",t.c,t.c);
	printf("%d\n",t.x);
	printf("%.2lf\n",t.d);
	printf("%s\n",t.name);
	printf("%s\n",t.pt_name);

    printf("sizeof(t) : %d\n",sizeof(t));
    
    printf("======================\n");
    
    //#include <stddef.h>
    printf("x start index : %d\n",offsetof(struct Test,x));
    
    printf("x start index : %d\n",offsetof(struct Test,d));
	
	
	printf("======================\n");
	 
    struct Test2 t2 = {33,3.141592};
    
    printf("%d\n",t2.x);
    printf("%.2lf\n",t2.d);
    t.x = 10;
    t2.d = 33.33;
    
    
    printf("%d\n",t2.x);
    printf("%.2lf\n",t2.d);
    
    
     
	 
	return 0;
}


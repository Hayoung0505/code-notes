#include <stdio.h>

typedef struct {
	int num;
	double avg;
	
}Test;

typedef union {
	int num;
	double avg;
	
}Test_u;

typedef union {//byte+=4byte
	char name1[7];//7byte//4byte + 3byte니까 3바이트에 4byte할당이 되어야 = 8byte
	char name2[8];//8byte
	char name3[9];//8byte + 4byte//하나늘어나도 4바이트 늘어
	char name4[10];//8byte + 4byte
	char name5[16];//16byte
	char name6[17];//8byte + 8byte +4byte = 20byte//기준을 항상 긴거에둠 structure랑 유
	double avg;//8byte
}Names;

int main(int argc, char **argv)
{
	printf("union...\n");//공용체(메모리를 공유해)
	
	//Test t = {11,3.14};순서대로 넣어야되고
	//Test t = {.num=11,.avg=3.14};순서대로 안넣어도
	Test t = {.avg=3.14,.num=11};
	printf("sizeof(t) : %d byte\n",sizeof(t));
	printf("struct : %d %.2lf\n",t.num,t.avg);
	
	//Test_u tu ;
	//tu.num = 22;
	//tu.avg = 44.44;
	//Test_u tu = {.num=22,.avg=44.44};
	Test_u tu = {.avg=3.14,.num=11};
 사
	printf("sizeof(tu) : %d byte\n",sizeof(tu));
    printf("union : %d %.2lf\n",tu.num,tu.avg);
    
    printf("==============\n");
    
    Names ns;
	printf("sizeof(ns) : %d byte\n",sizeof(ns));

    

	return 0;
}


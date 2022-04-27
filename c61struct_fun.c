#include <stdio.h>
#pragma pack(1)
//바이트 어라인먼트 자동(패딩바이트 제거)

#define MEMBER_ARR_LEN 2
#define CAR_ARR_LEN 3

typedef struct{
	int num;
	char *id;
	char *pw;
	char *name;
	char *tel;
}Member;

typedef struct{
	
	 
	char *car_name; 
	char *car_model;
	int car_price;
	 
}Car;

//Car : car_name,car_model,car_price >> test02(car)

void test01(Member m);
void test02(Car c);
void test03(Member ms[MEMBER_ARR_LEN]);
void test04(Car cs[CAR_ARR_LEN]);

int main(int argc, char **argv)
{
	printf("struct function...\n");
	
	Member m = {1,"admin","hi123456","lee","02"};
	Member m2 = {12,"admin2","hi22222","lee2","022"};


	test01(m);
	
	printf("===============\n");
	
	Car c = {"blue","jeep",400000};
	Car c2 = {"blue2","jeep22",222222};
	
	test02(c);
	
	
	printf("=====================\n");
	Member ms[MEMBER_ARR_LEN] = {m,m2};
	test03(ms);
	
	printf("========================\n");
	Car cs[CAR_ARR_LEN] = {c,c2,c};
	test04(cs);
	
	return 0;
}//end main

void test03(Member ms[MEMBER_ARR_LEN]){
	for(int i=0;i<MEMBER_ARR_LEN;i++){
		printf("%d %s %s %s %s\n",ms[i].num, ms[i].id,ms[i].pw, ms[i].name,ms[i].tel);
	}
}


void test04(Car cs[CAR_ARR_LEN]){
	for(int i=0;i<CAR_ARR_LEN;i++){
		printf("%s %s %d\n",cs[i].car_name,cs[i].car_model,cs[i].car_price);
	
	}
	
}

void test02(Car c){
	
	printf("sizeof(c):%d\n",sizeof(c));
	printf("%s %s %d\n",c.car_name,c.car_model,c.car_price);
	
}


void test01(Member m){
	
	printf("sizeof(m):%d\n",sizeof(m));
	printf("%d %s %s %s %s\n",m.num, m.id, m.pw, m.name,m.tel);
	
}


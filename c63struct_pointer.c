#include <stdio.h>
#pragma pack(1)

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

typedef struct{
	char *tel, *email, *addr;
}Contact,*Pt_contact;

void test01(Member *ptr);
void test02(Car *ptr);
void test03(Contact *ptr);


int main(int argc, char **argv)
{
	printf("struct pointer...\n");
	Member m = {1,"admin","hi123456","lee","02"};
	
	printf("sizeof(m):%d byte\n",sizeof(m));
	printf("%d %s %s %s %s\n",m.num, m.id, m.pw, m.name,m.tel);
	
	
	Member *pt_m;
	pt_m = &m;
	printf("sizeof(pt_m):%d byte\n",sizeof(pt_m));
	
	printf("=============\n");
	
	printf("%d %s %s %s %s\n",
	(*pt_m).num, (*pt_m).id, (*pt_m).pw, (*pt_m).name,(*pt_m).tel);
	
	//(*pt_m).num = 11;
	//(*pt_m).id = "admin";
	//(*pt_m).pw = "hi11111";
	//(*pt_m).name = "kim111";
	//(*pt_m).tel = "031";
	pt_m->num = 11;
	pt_m->id = "admin";
	pt_m->pw = "hi11111";
	pt_m->name = "kim111";
	pt_m->tel = "031";
	
	printf("=============\n");
	
	//printf("%d %s %s %s %s\n",
	//(*pt_m).num, (*pt_m).id, (*pt_m).pw, (*pt_m).name,(*pt_m).tel);
	
	printf("%d %s %s %s %s\n",
	pt_m->num, pt_m->id, pt_m->pw, pt_m->name,pt_m->tel);
	
	printf("=============\n");
	
	printf("%d %s %s %s %s\n",m.num, m.id, m.pw, m.name,m.tel);
	
	printf("=============\n");
	
	test01(&m);
		
	printf("=============\n");
	test01(pt_m);
	
	printf("====Car *=========\n");
		
		
	Car c;
	Car *pt_c = &c;
	pt_c->car_name = "0000";
	pt_c->car_model = "A7";
	pt_c->car_price = 80000000;
	
	
	test02(pt_c);
	
	printf("====Contact *=========\n");
		
	Contact con;
	Contact *pt_con = &con;
	pt_con->tel = "010";	
	pt_con->email = "bbb@bbb.com";	
	pt_con->addr = "guri";
	
	test03(pt_con);	
	
	printf("====Pt_contact=========\n");
	Pt_contact p_con = &con; //알고보면 pt_contact도 포인터, p_con라는 주소넣어주
	p_con->tel = "0102";	
	p_con->email = "bbb2@bbb.com";	
	p_con->addr = "guri2";
	
	test03(pt_con);	
	
		
	return 0;
}//end main

void test01(Member *ptr){
	printf("sizeof(ptr):%d\n",sizeof(ptr));
	printf("%d %s %s %s %s\n", 
	ptr->num,ptr->id, ptr->pw, ptr->name, ptr->tel);
	
}

void test02(Car *ptr){
	printf("sizeof(ptr):%d\n",sizeof(ptr));
	printf("%s %s %d\n", 
	ptr->car_name,ptr->car_model, ptr->car_price);
	
}

void test03(Contact *ptr){
	printf("sizeof(ptr):%d\n",sizeof(ptr));
	printf("%s %s %s\n", 
	ptr->tel, ptr->email, ptr->addr);
	
}


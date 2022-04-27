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

Member *test01();
Car *test02();
Contact *test03();

int main(int argc, char **argv)
{
	printf("struct pointer...\n");
 
	
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
	
	 
	
	 
	
	printf("=============\n");
	
	Member *pt_m = test01();
		
	printf("%d %s %s %s %s\n",pt_m->num, pt_m.id, pt_m.pw, pt_m.name,pt_m.tel);
	
	printf("====Car *=========\n");
		
	Car *pt_c = test02();
	printf("%s %s %d\n",
		pt_c->car_name, pt_c->car_model, pt_c->car_price);

	
 
	 
	 
	Contact *p_con = test03(p_con);
	printf("%s %s %s\n",
	   p_con->tel, p_con->email, p_con->addr);
		
	return 0;
}//end main

Member *test01(){
	Member m;
	Member *ptr = &m;
	ptr->num = 11;
	ptr->id = "admin";
	ptr->pw = "hi11111";
	ptr->name = "kim111";
	ptr->tel = "031";
	return ptr;
}
 
 

Car *test02(){
	Car c;
	Car *ptr = &c;
	ptr->car_name = "0000";
	ptr->car_model = "A7";
	ptr->car_price = 80000000;
	return ptr;
	 
	
}

Contact *test03(){
	Contact con;
	Contact *ptr = &con;
	ptr->tel = "010";	
	ptr->email = "bbb@bbb.com";	
	ptr->addr = "guri";
	return ptr;
}


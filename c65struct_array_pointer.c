#include <stdio.h>
#pragma pack(1)
#define CAR_LENGTH 3
#define CONTACT_LENGTH 3

typedef struct{
	
	 
	char *car_name; 
	char *car_model;
	int car_price;
	 
}Car;

 

int main(int argc, char **argv)
{
	
	printf("struct array pointer...\n");
	
	Car cs[CAR_LENGTH]  = {
		{"BMW2","520D2",5002},
		{"BMW3","520D3",5003},
		{"BMW4","520D4",5004},
		};
		
	//int *ps_sus = sus;//정수배열	
	//*(ps_sus+0) == pt_sus[0] == sus[0]
	
	Car *pt_cs = cs;//구조체배열
	//printf("%s %s %d\n",
	//    (pt_cs+0)->car_name, (pt_cs+0)->car_model, (pt_cs+0)->car_price,
	
	//printf("%s %s %d\n",
		//pt_cs[0].->car_name, pt_cs[0].->car_model, pt_cs[0].->car_price);

printf("========(pt_cs+i)->car_name============\n");
    for(int i=0;i<CAR_LENGTH;i++){
		printf("%s %s %d\n",
		(pt_cs+i)->car_name, (pt_cs+i)->car_model, (pt_cs+i)->car_price);
		
	}
	printf("====================\n");
    for(int i=0;i<CAR_LENGTH;i++){
		printf("%s %s %d\n",
		pt_cs[i].car_name, pt_cs[i].car_model, pt_cs[i].car_price);
		
	}
	 
	
	return 0;
} 


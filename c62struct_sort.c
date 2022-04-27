#include <stdio.h>
#define CAR_ARR_LEN 3

#pragma pack(1)
//바이트 어라인먼트 자동(패딩바이트 제거)

 

typedef struct{
	
	 
	char *car_name; 
	char *car_model;
	int car_price;
	 
}Car;






int main(int argc, char **argv)
{
	printf("struct sort....\n");
	
	int arr[3] = {88,22,55};
	//bubble sort : for[0-2]~for[x+1~2]~ : if >>swap
	for(int x=0;x<3;x++){
		for(int i=x+1;i<3;i++){
		if(arr[x]>arr[i]){
				int tmp;
				tmp = arr[x];
				arr[x] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	printf("\n");
	
	
	if(arr[0]>arr[1]){
	
	  int tmp;
	  tmp = arr[0];
	  arr[0] = arr[1];
	  arr[1] =tmp; 
		
	}
	
	for(int i=0;i<3;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
    Car c1 = {"BMW","520d",800000};
	Car c2 = {"Genesis","G80",220000};
	Car c3 = {"Ray","top2",550000};
	
	Car cs[CAR_ARR_LEN] = {c1,c2,c3};
	
	for(int x=0;x<CAR_ARR_LEN;x++){
		for(int i=x+1;i<CAR_ARR_LEN;i++){
		if(cs[x].car_price>cs[i].car_price){
				Car tmp;
				tmp = cs[x];
				cs[x] = cs[i];
				cs[i] = tmp;
			}
		}
	}
	
	
	
	for(int i=0;i<CAR_ARR_LEN;i++){
	printf("%s %s %d\n",cs[i].car_name,cs[i].car_model,cs[i].car_price);
		
}
	
	return 0;
}


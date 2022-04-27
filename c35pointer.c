#include <stdio.h>
#include <stdlib.h>
#define SUS_LENGTH 3

void test01(int *pt);
void test02(int sus[]);

int *test03();

int main(int argc, char **argv)
{
	
	printf("pointer...\n");
	
	int sus[SUS_LENGTH] = {11,22,33};
	printf("sus address : %p\n",sus);
	printf("sus[0] address : %p\n",&sus[0]);
	printf("sus[1] address : %p\n",&sus[1]);
	printf("sus[2] address : %p\n",&sus[2]);
	
	printf("=====index value======\n");
	
	printf("sus[0] value : %d\n",sus[0]);
	printf("sus[1] value : %d\n",sus[1]);
	printf("sus[2] value : %d\n",sus[2]);
	
	printf("=====*====value======\n");
	printf("*sus value : %d\n",*sus);//이 주소가 참조하는 값은 뭐
	printf("*(sus+0) value : %d\n",*(sus+0)); 
	printf("*(sus+1) value : %d\n",*(sus+1)); 
	printf("*(sus+2) value : %d\n",*(sus+2)); 
	
   printf("==pointer attributed===value /address(array)======\n");
    
    //int *pt = &sus[0];
   int *pt = sus;//해당 포인터도 배열처럼 쓸수있
   printf("*pt value : %d\n",*pt);
   printf("pt[0] value : %d\n",pt[0]);
   
    for(int i=0;i<SUS_LENGTH;i++){
     printf("pt[%d] value : %d\n",i,pt[i]);

}
   printf("*(pt+0) value : %d\n",*(pt+0)); 
   
   for(int i=0;i<SUS_LENGTH;i++){
     printf("*(pt+%d) value : %d\n",i,*(pt+i));

}
   
   printf("==============\n");
   
   printf("*sus value : %d\n",*sus);
   printf("sus[0] value : %d\n",sus[0]); 
   printf("*(sus+0) value : %d\n",*(sus+0)); 
   
    printf("==============\n");
    test01(sus);
    
    printf("==============\n");
    test02(sus);
    
    printf("==============\n");
   int * pt_sus = test03();
   for(int i=0;i<SUS_LENGTH;i++){
     printf("pt_sus[%d] value : %d\n",i,pt_sus[i]);

  }
for(int i=0;i<SUS_LENGTH;i++){
     printf("*(pt_sus+%d) value : %d\n",i,*(pt_sus+i));

   }
    
	return 0;
}//end main 선언하고 구현하고 콜했으니까 로프돌리

int *test03(){
	static int sus[SUS_LENGTH] = {11,22,33};
	//int *pt = malloc(sizeof(int)*(SUS_LENGTH));스태틱이라 malloc필요x
	 
	return sus;
}

void test02(int sus[]){
	  for(int i=0;i<SUS_LENGTH;i++){
     printf("sus[%d] value : %d\n",i,sus[i]);

} 
 for(int i=0;i<SUS_LENGTH;i++){
     printf("*(sus+%d) value : %d\n",i,*(sus+i));

}
}


 void test01(int *pt){
	 
	  for(int i=0;i<SUS_LENGTH;i++){
     printf("pt[%d] value : %d\n",i,pt[i]);

      } 
 for(int i=0;i<SUS_LENGTH;i++){
     printf("*(pt+%d) value : %d\n",i,*(pt+i));

      }
	 
	 }

#include <stdio.h>
#include <string.h>//strlen()
#define SUS_LENGTH 5
#define NAME_LENGTH 5

void test01(int sus[]);
int* test02();

void test03(char name[]);
char test04();
char* test05();

int main(int argc, char **argv)
{
	
	printf("function...arguments \n");
	 
	int sus[SUS_LENGTH] = {11,22,33,44,55};
	//sus = {1,2,3} //error
	//test01({1,2,3}) //error
	printf("sus()...%p\n",sus);
	test01(sus);// sus ==array address
	
	printf("===============\n");
	
	int *pt_sus = test02();
	for(int i=0;is
	
	char name[NAME_LENGTH] = "LEE";
	test03(name);
	
	printf("===============\n");
	
	printf("%c\n",test04());
	
	printf("===============\n");
	
	//printf("%c\n",test05());
	
	return 0;
}//END MAIN


void test01(int sus[]){//array address
		printf("test01()...%p\n",sus);
	    printf("sus length...%d\n",SUS_LENGTH);
	    for(int i=0;i<SUS_LENGTH;i++){
			printf("sus[%d]:%d\n",i,sus[i]);   
}
}

char* test05() {
 	printf("test04()...\n");
	return "AAA"; 
}

char test04() {
	printf("test04()...\n");
	return 'A';
}
int* test02(){
	int sus[SUS_LENGTH] = {11,22,33,44,55};
	int *pt = sus;
	return pt;
}

void test03(char name[]){
	   printf("test03()...\n");
		printf("name...%s\n",name);
     for(int i =0;i<strlen(name);i++){
		 printf("name[%d]:%c\n",i,name[i]);
	}

    

}
 

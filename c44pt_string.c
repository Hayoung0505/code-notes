#include <stdio.h>
void test01(char name[]);
void test02(char *name);
void test03(char names[3][10]);
void test04(char (*pt_names)[10]);

int main(int argc, char **argv)
{

    printf("pointer string...\n");
    
    //yangssem
    //char *name =  "yangssem";
    char name[] =  "yangssem";
    
    test01(name);
    test02(name);
    	
    printf("======names======\n");
    char names[3][10] = {"yang","han","choi"};
    char (*pt_names)[10] = names;	
    
    for(int i=0;i<3;i++){
		printf("%s\n",pt_names[i]);
	}
	
    printf("===test3()===names======\n");
    test03(names); //test03(char names[3][10])
    	
     
     
    printf("===test04()===names======\n");
    test04(names);//char (*pt_names)[10])
     
    	
	return 0;
}//end main

void test04(char (*pt_names)[10]){
	for(int i=0;i<3;i++){
		printf("%s\n",pt_names[i]);
    }
}


void test03(char names[3][10]){
	for(int i=0;i<3;i++){
		printf("%s\n",names[i]);
	}


void test02(char *name){
	printf("test02()....\n");
	printf("name : %s\n",name);
}
void test01(char name[]){
	
	 printf("test01()....\n");
}


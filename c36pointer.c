#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LENGTH 10

char *test01();
char *test02();

int main(int argc, char **argv)
{
	
	printf("pointer...\n");
	
	char *name1 = "yangssem1";
	char *name2 = malloc(sizeof(char)*NAME_LENGTH);
	//name2 = "yangssem2";//세그멘테이션 오류, 해제할때 생기는거임 해제안할순없으니
	strcpy(name2 , "yangssem2");
    
    	printf("name1 : %s\n",name1);
    	printf("name2 : %s\n",name2);
        free(name2);//strcpy를 사용하지않으면 세그멘테이션 오류
	
	
	printf("=======Literal=========\n");
       printf("name1 : %s\n",test01());

	
	
	printf("======Dynamic Memory==========\n");
	char *name3 = test02();
	printf("name2 : %s\n",name3);
	free(name3);
	
	return 0;
}//end main  

 
char *test01(){
  char *name = "yangssem3";
  return name;
}
char *test02(){
  char *name = malloc(sizeof(char)*NAME_LENGTH);
	//name2 = "yangssem2";//세그멘테이션 오류  
	strcpy(name , "yangssem4");
	return name;
}

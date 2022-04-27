#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc,free


int main(int argc, char **argv)
{
	printf("char...char[]..\n");

	char name1[10] = "yangssem";
	printf("name1..%s\n",name1);
	//name1[10] = "lee"; //error
	//name1 = "lee";//error
        //copy and init
	strcpy(name1,"lee");
	printf("name1..%s\n",name1);
	
	char name2[10];
	//copy
	 
	strcpy(name2,name1);
	printf("name2..%s\n",name2);
	
	//concat
	//name2 = name2 + " is MyName";//error
	strcat(name2," is MyName");
        printf("name2..%s\n",name2);
	
	 //token
	 char *name3 = strtok(name2," ");//return type
	 printf("strtok name3..%s\n",name3);
	while(name3 != NULL) {
		printf("%s\n",name3);
		name3 = strtok(NULL," ");
	}
	
	char *name4 = "kim";
	name4 = "lee";
	printf("name4:%s\n",name4);
	
	//strcat(name4," is MyName");
	//printf("name4:%s\n",name4);
	
	printf("sizeof(type):%d\n",sizeof(char));
	printf("sizeof(int):%d\n",sizeof(int));
	printf("sizeof(var):%d\n",sizeof(name4));
	
	char *ptr1 = "hihi";
	char *ptr2 = malloc(sizeof(char)*20);//동적메모리할당
	
	strcpy(ptr2,"kim");//카피
	strcat(ptr2,ptr1);//병합, 확보된변수가 앞에와
	
	printf("%s\n",ptr2);
	free(ptr2);
	
	
	return 0;
}


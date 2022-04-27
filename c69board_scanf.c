#include <stdio.h>
#include <stdlib.h>//malloc
#pragma pack(1)


typedef struct{
       char *id;
       char *pw;
       char *title;
       char *content;
       char *writer;

}Board;

void insert();
void delete();
void update();




int main(int argc, char **argv)
{
	
	printf("menu : 1. board insert 2. terminate \n");
	char *id = malloc(sizeof(char)*10);
	printf("insert id  :\n");
	scanf("%s",id);
	printf("id : %s\n",id);
	
	char *pw = malloc(sizeof(char)*10);
	printf("insert pw  :\n");
	scanf("%s",pw);
	printf("pw : %s\n",pw);
	
	char *title = malloc(sizeof(char)*10);
	printf("insert title  :\n");
	scanf("%s",title);
	printf("title : %s\n",title);
	
	char *content = malloc(sizeof(char)*10);
	printf("insert content  :\n");
	scanf("%s",content);
	printf("content : %s\n",content);
	
		
	char *writer = malloc(sizeof(char)*10);
	printf("insert writer  :\n");
	scanf("%s",writer);
	printf("writer : %s\n",writer);
	
	//Board b;
	//b.name = name;
	//Board *pt_s = &s;
	
	//s.name = malloc(sizeof(char)*10);
	//printf("Input pt_s->name :\n");
	//scanf("%s",pt_s->name);
	//printf("pt_s->name : %s\n",pt_s->name);
	//printf("s.name : %s\n",s.name);
	
	printf("================\n");
	
	//int kor;
	//printf("Input kor :\n");
	//scanf("%d",&kor);
	//printf("kor : %d\n",kor);
	
	//printf("Input &pt_s->kor :\n");
	//scanf("%d",&pt_s->kor);
	//printf("&pt_s->kor : %d\n",pt_s->kor);
	//printf("s.kor : %d\n",s.kor);
	
	
	return 0;
}//end main

void insert(){
}

void delete(){
}

void update(){
}


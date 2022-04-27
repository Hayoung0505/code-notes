#include <stdio.h>
#include <stdlib.h>//malloc
#pragma pack(1)


typedef struct{
       char *name;
       int kor;

}Score;

int main(int argc, char **argv)
{
	
	printf("struct scanf...\n");
	char *name = malloc(sizeof(char)*10);
	printf("Input name :\n");
	scanf("%s",name);
	printf("name : %s\n",name);
	
	Score s;
	//s.name = name;
	Score *pt_s = &s;
	
	s.name = malloc(sizeof(char)*10);
	printf("Input pt_s->name :\n");
	scanf("%s",pt_s->name);
	printf("pt_s->name : %s\n",pt_s->name);
	printf("s.name : %s\n",s.name);
	
	printf("================\n");
	
	int kor;
	printf("Input kor :\n");
	scanf("%d",&kor);
	printf("kor : %d\n",kor);
	
	printf("Input &pt_s->kor :\n");
	scanf("%d",&pt_s->kor);
	printf("&pt_s->kor : %d\n",pt_s->kor);
	printf("s.kor : %d\n",s.kor);
	
	
	return 0;
}


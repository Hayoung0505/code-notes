#include <stdio.h>
#include "c60json_c.c"

//https://github.com/kcoms555/json_c/blob/master/json_c.c
//파일복사, c60json_c.c 파일생성 후 붙여넣기
//#include "c60json_c.c"
int main(int argc, char **argv)
{
	
	printf("parson.h...\n");
	
	char json_text[2048] = {0};//복사받을 대상
	
	char* file_name = "c60json.json";
	FILE* read_file = fopen(file_name,"r");
	fread(json_text,1,2048,read_file);
	printf("%s\n",json_text);
	fclose(read_file);
	
	char* json_str = json_text;
	
	json_value vos = json_create(json_str);
	printf("json_len(vos) : %d\n",json_len(vos));
	json_print(vos);//vos 는 제이슨 객체
	putchar('\n');
	printf("===============\n");
	
	for(int i=0;json_len(vos)>i;i++){
		json_value vo = json_get(vos,i);
		//json_print(vo);putchar('\n');
		
		printf("%d ",json_get_int(vo,"num"));
		//double, bool, longlongint, string,,
		printf("%s ",json_get_string(vo,"title"));
		printf("%s ",json_get_string(vo,"content"));
        printf("%s ",json_get_string(vo,"writer"));
		printf("%s\n ",json_get_string(vo,"wdate"));
		
	}
	
	json_free(vos);//메모리 해제 
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	printf("char...char[]..\n");
	
	//array : {,,,,}
	char a = 'A';
	char b = 'B';
	printf("ab:%c%c\n",a,b);
	
	char cs[3] = {'A','B'};
	printf("cs:%s\n",cs);
	
	//include <string.h>
	printf("cs length:%d\n",strlen(cs));
	
	 
	char cs2[] = "AB";
	printf("cs2:%s\n",cs2);
	//길이length
	printf("cs2 length:%d\n",strlen(cs2));
	
	//compare
	printf("cs2 compare:%d\n",strcmp(cs,cs2));
	
	char *cs3 = "ABCDEFG";//pointer
	printf("*cs3:%s\n",cs3);
    printf("*cs3 length:%d\n",strlen(cs3));
    
    //compare
    printf("cs2,cs3 compare:%d\n",strcmp(cs2,cs3));
    
    //char search
    printf("char search:%s\n",strchr(cs3,'C'));
    
    //str search
    printf("str search:%s\n",strstr(cs3,"C"));
    printf("str search:%s\n",strstr(cs3,"CDE"));
    
    char *ptr = strstr(cs3,"CDE");//return type
	//printf("strstr ptr..%s\n",ptr);
	
	int count = 0;
	while(ptr != NULL) { //별이 아닐떄까지 ptr을 스트링으로 표현
		printf("%s\n",ptr);
		ptr = strstr(ptr+1,"CDE");//D address
	}
	//Hello, Yangssem 
	printf("count:%d\n",count);
	return 0;
}


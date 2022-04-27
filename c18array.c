#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	
	printf("array....\n");
	
	char abc[] = {'a','b','c');
	
	printf("char length : %d\n",sizeof(abc)/sizeof(char) );
	
	
    for(int=0;i<sizeof(abc)/sizeof(char);i++){
		printf("abc[%d] : %d, %c\n",i,abc[i], abc[i]);
	}
		
   printf("=============\n");
		 
    char abc2[3] = {'d','e','f');
   
    printf("abc2 length : %d\n",sizeof(abc2)/sizeof(char) );
	
	
    for(int=0;i<sizeof(abc2)/sizeof(char);i++){
		printf("abc2[%d] : %d, %c\n",i,abc2[i], abc[i]);
	}
    printf("=============\n");
    
    char abc3[3] = {'x','y','z');
   
    printf("abc3 length : %d\n",sizeof(abc3)/sizeof(char) );
	
	
    for(int=0;i<sizeof(abc3)/sizeof(char);i++){
		printf("abc3[%d] : %d, %c\n",i,abc3[i], abc3[i]);
	}
     printf("=============\n");
    char abc3[3];
    abc3[0] = 'x';
    abc3[1] = 'y';
    abc3[2] = 'z';
    
      for(int=0;i<sizeof(abc3)/sizeof(char);i++){
		abc3[i] = 'x'+i;
	}
	for(int=0;i<sizeof(abc3)/sizeof(char);i++){
		printf("abc2[%d] : %d, %c\n",i,abc3[i], abc3[i]);
	}
	
	 printf("=============\n");
	 //""로 할당할 떄는 +1개 널값공간활보해야함.
	 char abc4[4] = "abc";
	 for(int=0;i<sizeof(abc4)/sizeof(char);i++){
		 printf("abc4[%d] : %d, %c\n",i,abc4[i], abc4[i]);
	 }
	  printf("=============\n");
	  printf("strlen(abc4):%d\n",strlen(abc4));
	 for(int=0;i<strlen(abc4);i++){
		printf("abc[%d] : %d, %c\n",i,abc4[i], abc4[i]);
	}
	
	return 0;
}


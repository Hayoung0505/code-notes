#include <stdio.h>

int main(int argc, char **argv)
{
	printf("for...\n");
	
	int x,i;
	for(x=0;x<10;x++){
		for(i=0;i<10;i++){
			//if (x==5) break;
			//if (i==5) break;
			//if (x==5) continue;
			//if (i==5) continue;
			 
			if (i==5) goto EXIT;
	     printf("%d,%d\n",x,i);
	     
	     
	}
  }
    printf("for ....1111\n");
     EXIT : printf("goto...EXIT\n")
     printf("for....2222\n");
     
  
  
  //2*1=2~~~~9*9=81
     for(int x=2;x<=9;x++){
		 for(int y=1;y<=9;y++){
			 printf("%dx%d=%d\n",x,y,(x*y));
		 }션
		 printf("\n");
	 }
  
  
  //3명의 학생 성적처리 프로그램도 해보기 
  
  
	return 0;
}


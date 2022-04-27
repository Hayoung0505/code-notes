#include <stdio.h>

int main(int argc, char **argv)
{
	
	printf("pointer...string..\n");
	
	char str[] = "yangssem";
	
	printf("==str===value======\n");
	printf("str value : %s\n",str);
	printf("str[0] value : %c\n",str[0]);
	printf("str[1] value : %c\n",str[1]);
	printf("str[2] value : %c\n",str[2]);
	
	
	printf("===str==adress======\n");
	printf("str address : %p\n",str);
	printf("str[0] value : %p\n",&str[0]);
	printf("str[1] value : %p\n",&str[1]);
	printf("str[2] value : %p\n",&str[2]);
	
    char strs[3][10] = {"kim","lee","yangssem"};
 	printf("===str==adress======\n");
 	printf("strs address : %p\n",strs);
 	printf("strs[0] adress : %p\n",strs[0]);
 	printf("&strs[0][0] adress : %p\n",&strs[0][0]);
 	printf("&strs[1][0] adress : %p\n",&strs[1][0]);
 	printf("&strs[2][0] adress : %p\n",&strs[2][0]);
 	
 	printf("===strs===value========\n");
 	printf("strs[0] value : %s\n",strs[0]);
 	printf("strs[1] value : %s\n",strs[1]);
 	printf("strs[2] value : %s\n",strs[2]);
 	printf("&strs[0][0] adress : %s\n",&strs[0][0]);
 	printf("&strs[1][0] adress : %s\n",&strs[1][0]);
 	printf("&strs[2][0] adress : %s\n",&strs[2][0]);
 	
 	char *pt_strs[3];
 	//pt_strs[0] = strs[0]; 
 	//pt_strs[1] = strs[1]; 
 	//pt_strs[2] = strs[2]; 
 	pt_strs[0] = &strs[0][0]; 
 	pt_strs[1] = &strs[1][0]; 
 	pt_strs[2] = &strs[2][0]; 
 	
 	printf("length : %d\n",sizeof(pt_strs)/sizeof(char*));
 	for(int i=0;i<sizeof(pt_strs)/sizeof(char*);i++){
		printf("pt_strs[%d] value : %s, %c\n",
		           i,pt_strs[i],*pt_strs[i]);
	}	

	return 0;
}


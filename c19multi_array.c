#include <stdio.h>

int main(int argc, char **argv)
{
	
	printf("multi_array....\n");
	//sus[3] = {1,2,3}
	int sus[3] ={1,2,3};
	int suss[2][3] = {{1,2,3},{1,2,3}};
	//suss[0] ={11,22,33};//error
	suss[0][0] = 11;
	suss[0][1] = 22;
	suss[0][2] = 33;
	
	printf("suss length:%d\n",sizeof(sus)/sizeof(int) );
	
	printf("suss sizeof:%d\n",sizeof(suss));
	printf("suss sizeof:%d\n",sizeof(sus));
    printf("suss[0] sizeof:%d\n",sizeof(suss[0]));
    printf("suss[0] length:%d\n",sizeof(suss)/sizeof(suss[0]));
	
	printf("suss length:%d\n",sizeof(suss)/sizeof(suss[0]));
	printf("suss[0] length:%d\n",sizeof(suss[0]/sizeof(int));
	int x,i:
	for(x=0;x<sizeof(suss)/sizeof(suss[0]);x++){
		for(i=0;i<sizeof(suss[0]/sizeof(int);i++){
			printf("%d ",suss[x][i]);
		}
		printf("\n");
		
	}
	
	  printf("=================\n");
	  
	  //double multi array 2행3열 : sizeof, define

	return 0;
}


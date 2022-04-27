#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("Dynamic Memory....\n");
	
	
	int arr[10];
	int *pt_arr;
	
	pt_arr = arr;
	for(int i=0;i<10;i++){
		arr[i] =i+1;
	}
	
	//pt_arr = malloc(sizeof(int)*10);
	pt_arr = calloc(10,sizeof(int));
	
	//update or set
	pt_arr = realloc(pt_arr,sizeof(int)*5);
	
	
	
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(int i=0;i<10;i++){
		printf("%d ",pt_arr[i]);
	}
	printf("\n");
	
	return 0;
}


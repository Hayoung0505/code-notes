#include <stdio.h>
#include <stdlib.h>//rand,srand씨드값설정해주는거
#include <time.h> //time


int main(int argc, char **argv)
{
	printf("random....\n");
	
	//seed value setup
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
		int su = rand();
		printf("rand : %d, %d\n",su,su%10);
	}
	
	printf("==============\n");
	
	time_t current_time;
	current_time =time(NULL);
	printf("time_t : %ld\n",current time);
	
 
	
	
	return 0;
}


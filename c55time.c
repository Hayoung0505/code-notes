#include <stdio.h>
#include <time.h>
char * local_time(){
	struct tm *pt_time;
	time_t time_now;
	time(&time_now);
    printf("%ld \n",time_now);
    
    pt_time = localtime(&time_now);
	printf("%s \n",asctime(pt_time));
	
	char *wdate = asctime(pt_time);
	
	printf("%s \n",wdate);
	
	return wdate;
}

int main(int argc, char **argv)
{
	printf("time...\n");
	
	local_time();
   
    printf("===============\n");
	
	time_t time_now;
	time_now = time(NULL);
	printf("%ld \n",time_now);
	
	return 0;
}


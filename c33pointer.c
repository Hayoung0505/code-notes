#include <stdio.h>

int main(int argc, char **argv)
{
	
	printf("pointer...\n");
	
	int kor=99,eng=88,math=77;
	const int total = kor + eng + math;
	//total =300;//const read-only error
	double avg;
	
    printf("%d %d %d %d\n",kor, eng,math,total);
	  
	
	int *p_kor = &kor;
	int *p_eng = &eng;
	int *p_math = &math;
	const int *p_total = &total;
	//p_total = &kor;//const address update
     double *p_avg = &avg;
	//*p_total = *p_kor + *p_eng + *p_math;//value는 안된다.const read-only error
	*p_avg = *p_total/3.0;
	
	printf("%d %d %d %d %.2lf\n",*p_kor,*p_eng,*p_math,*p_total,*p_avg);
	
	printf("--------mission--------\n");
	
	int a = 10;
	int b = 20;
	int c = 30;
	int sum;
	double avg2;
	
	return 0;
}


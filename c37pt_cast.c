#include <stdio.h>

int main(int argc, char **argv)
{
	
	printf("pointer...cast\n");
	
	
	int x = 10;
	int *pt_x = &x;
	
	double *pt_d = (double *)pt_x;
	
    printf("x : %d\n",x);
    printf("*pt_x : %d\n",*pt_x);
    printf("*pt_d : %.2lf\n",*pt_d);
	
	int *pt_y = (int *)pt_d;
	printf("*pt_y : %d\n",*pt_y);

	return 0;
}


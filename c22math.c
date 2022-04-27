#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	
	printf("math ...\n");
	
	//제곱 ** pow()
	int x = 2;
	int y = 3;
	printf("pow: %lf\n", pow(x,y));
	
	//gcc -wall -o c22math c22math.c -lm
	
	int h = 100;
    printf("sqrt : %lf\n", sqrt(h));
    printf("cos : %lf\n", cos(h));
    printf("sin : %lf\n", sin(h));
    printf("tan : %lf\n", tan(h));
    
    
    int t = -100;
    //#include <stdlib.h>
    printf("abs: %d\n", abs(t));
    
    //.??? all up
    printf("ceil(99.99): %.2lf\n", ceil(99.99));
    printf("ceil(99.11): %.2lf\n", ceil(99.11));
    
    //.??? all down
    printf("floor(99.99): %.2lf\n", floor(99.99));
    printf("floor(99.11): %.2lf\n", floor(99.11));
    
   
    printf("round(99.55): %.2lf\n", floor(99.55));
    printf("round(99.49): %.2lf\n", floor(99.49));
    
    printf("===================\n");
    int t = -100;
    //#include <stdlib.h>
    printf("abs: %d\n", abs(t));
    
     printf("===================\n");
     
     
     
     
     
    
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("scaf...\n");
	
	printf("Input your name[20byte]:\n");
	//read -p "input~~" name
	char name[21];
	scanf("%20s",name);
	printf("%s\n",name);
	
	printf("Input your name[20byte]:\n");
	 
	char *name2 = malloc(sizeof(char)*20);
	scanf("%20s",name2);
	printf("%s\n",name2);
	free(name2);


     long su;
     printf("Input su[0~100]:\n");
     scanf("%d",&su);//여기만 주소가 들어감
     printf("%d\n",su);


     long su2;
     printf("Input su2[0~100]:\n");
     scanf("%ld",&su2);//여기만 주소가 들어감
     printf("%ld\n",su2);
     
     float avg;
     printf("Input avg[0~100.0]:\n");
     scanf("%f",&avg);
     printf("%.2f\n",avg);
     
     
     
	double avg2;
	  
     printf("Input avg2[0~100.0]:\n");
     scanf("%lf",&avg2);
     printf("%.2lf\n",avg2);
	
	return 0;
}


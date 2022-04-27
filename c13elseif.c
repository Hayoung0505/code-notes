#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	printf("if else if else..\n");
	
	bool x = true;
	if(x){
       printf("Good..\n")
   }	
	double avg = 99.88;
	char *grade ="A";
	if(avg>=90){
		grade = "A";
	}else if(avg>=80){
		grade = "B";
	}else{
		grade = "F";
	}
	printf("grade:%s\n",grade);
	return 0;
}


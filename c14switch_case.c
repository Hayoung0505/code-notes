
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("switch case break ...\n");
	
	double avg = 99.88;
	char *grade = "A";
	
	switch((int)avg/10) {
	case 10: case 9:
		grade = "A";
		break;
	case 8:
		grade = "B";
		break;
	case 7:
		grade = "C";
		break;
	case 6:
		grade = "D";
		break;
	default:
		grade = "F";
		break;
	}
	printf("grade:%s\n",grade);
	     
	 
	
	
	return 0;
}


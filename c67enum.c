#include <stdio.h>

enum abc{//a=0,b=1,c=2
	a,b,c
};

enum boolean{//FALSE=0,TRUE=1
     FALSE, TRUE
};

enum day{//0,1,2,3,4,5,6
	sun=1,mon,tue,wed,thu,fri,sat
};

int main(int argc, char **argv)
{
	printf("enum....\n");
	
	//int x = 0;
	//int y = 1;
	//int z = 2;
	int x = a;
	int y = b;
	int z = c;
	printf("%d %d %d\n",x,y,z);
	
	printf("================\n");
	
	
	printf("%d %d\n",FALSE,TRUE);
	
	printf("================\n");
	
	
	printf("%d %d %d %d %d %d %d\n",
	   sun,mon,tue,wed,thu,fri,sat);
	
	printf("================\n");
	
	int dd = wed;
	
	switch(dd){
	case sun:case sat:
		printf("Good...\n");
		break;
	case mon:case tue:case wed:case thu:case fri:
		printf("Bad...\n");
		break;
	}
	
	return 0;
}


#include <stdio.h>
#define SUS3_LENGTH 3

int main(int argc, char **argv)
{
	
	printf("array ...\n");
	
	int arr[5] = {11,22,33,44,55};
	printf("arr[0] : %d\n",arr[0] );
	printf("arr[1] : %d\n",arr[1] );
	printf("arr[2] : %d\n",arr[2] );
	printf("arr[3] : %d\n",arr[3] );
	printf("arr[4] : %d\n",arr[4] );
	
	printf("=============\n");
	
	int sus[] = {1,2,3,4,5};
	printf("sus[0] : %d\n",sus[0] );
	printf("sus[1] : %d\n",sus[1] );
	printf("sus[2] : %d\n",sus[2] );
	printf("sus[3] : %d\n",sus[3] );
	printf("sus[4] : %d\n",sus[4] );
	
	
	printf("=============\n");
	//int all 0
	int sus2[5] = {0};	 
	printf("sus[0] : %d\n",sus[0] );
	printf("sus2[1] : %d\n",sus2[1] );
	printf("sus2[2] : %d\n",sus2[2] );
	printf("sus2[3] : %d\n",sus2[3] );
	printf("sus2[4] : %d\n",sus2[4] );
	
	printf("sus2 length : %d\n",sizeof(sus2)/sizeof(int));

    for(int i=0;i<sizeof(sus2)/sizeof(int);i++){
		sus2[i] = 1111;

     }     
     for(int i=0;i<sizeof(sus2)/sizeof(int);i++){
		printf("sus2[%d] : %d\n",i, sus2[i] );

    }
	printf("=============\n");
	
	int sus3[SUS3_LENGTH] = {0};	 
	printf("sus3 length : %d\n",SUS3_LENGTH);
	
	for(int i=0;i<SUS3_LENGTH;i++){
		sus3[i] = 2222;

    }

    for(int i=0;i<SUS3_LENGTH;i++){
		printf("sus3[%d] : %d션\n",i, sus3[i] );

    }


    printf("=============\n");
    
    //double array 4 : sizeof,define만들기 미

	return 0;
    }


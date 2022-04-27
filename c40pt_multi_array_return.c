#include <stdio.h>
#define ARR_ROW 2
#define ARR_COL 5


int* test01();
void* testVoid();

int main(int argc, char **argv)
{
    printf("multi array.return\n");

    int *pt_arr = test01();
    for(int x=0;x<ARR_ROW;x++){
	for(int i=0;x<ARR_COL;i++){
	    printf("%d ",*(pt_arr+ x*ARR_COL  +i));  
               		 
	}
        printf("\n");
    }

    printf("----------\n");
    int (*pt_arr2)[ARR_COL] = (void*)test01();
    for(int x=0;x<ARR_ROW;x++){
	for(int i=0;x<ARR_COL;i++){
	    printf("%d ",pt_arr2[x][i]);  
               		 
	}
        printf("\n");
    }
    printf("=================\n");//받는건 똑같
       
    int (*pt_arr3)[ARR_COL] = testVoid();
    for(int x=0;x<ARR_ROW;x++){
	for(int i=0;x<ARR_COL;i++){
	    printf("%d ",pt_arr3[x][i]);  
               		 
	}
        printf("\n");
    }
    
     printf("============\n");
    return 0;
}//end main

void* testVoid(){
     static int arr[ARR_ROW][ARR_COL] = {{1,2,3,44,55},{4,5,6,77,88}};


     return (void*)arr;

}

int* test01(){
     
     static int arr[ARR_ROW][ARR_COL] = {{1,2,3,44,55},{4,5,6,77,88}};


     return (int*)arr;

}

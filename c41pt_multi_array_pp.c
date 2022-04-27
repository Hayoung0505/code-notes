#include <stdio.h>
#define ARR_ROW 2
#define ARR_COL 5


int main(int argc, char **argv)
{
	
	printf("multi array **\n");
	
	int arr[ARR_ROW][ARR_COL] = {{1,2,3,44,55},{4,5,6,77,88}};
	
	printf("arr : %p\n",arr);
    printf("arr[0] : %p\n",arr[0]);	
    printf("arr[0][0] : %p\n",&arr[0][0]);
    
    printf("=================\n");
    
    int (*pt_arr1)[ARR_COL] = arr;
    printf("pt_arr1 : %p\n",pt_arr1);
    printf("*pt_arr1 : %p\n",*pt_arr1);
    printf("**pt_arr1 : %d\n",**pt_arr1);
    //printf("**pt_arr1 : %d\n",*(pt_arr1+ 0*ARR_COL +0));
    printf("pt_arr1[0][0] : %d\n",pt_arr1[0][0]);
   
    printf("=================\n");
   
    int *pt_arr2 = (int*)arr;
    printf("pt_arr2 : %p\n",pt_arr2);
   //printf("*pt_arr2 : %p\n",*pt_arr2);
   //printf("**pt_arr2 : %d\n",**pt_arr2);
   printf("**pt_arr2 : %d\n",*(pt_arr2+ 0*ARR_COL +0));
   //printf("pt_arr2[0][0] : %d\n",pt_arr2[0][0]);
    
    
	return 0;
}


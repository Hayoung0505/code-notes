#include <stdio.h>
#define ARR_ROW 2
#define ARR_COL 5
int main(int argc, char **argv)
{
    printf("pointer...multi array.\n");

    int arr[ARR_ROW][ARR_COL] = {{1,2,3,44,55},{4,5,6,77,88}};
	
    printf("arr : %p\n",arr);
    printf("arr[0] : %p\n",arr[0]);	
    printf("arr[0][0] : %p\n",&arr[0][0]);
    
    printf("============\n");
    for(int x=0;x<ARR_ROW;x++){
	    for(int i=0;x<ARR_COL;i++){
	    printf("%d ",arr[x][i]);  
	    } 
            printf("\n");
    }
        
    printf("============\n");
	 //void*캐스팅으로 할당하면 인덱스로 접근할 수 있다.
	 
    int (*pt_arr)[ARR_COL] = arr;
	
    printf("pt_arr : %p\n",pt_arr);
    
    for(int x=0;x<ARR_ROW;x++){
	    for(int i=0;i<ARR_COL;i++){
	    printf("%d ",pt_arr[x][i]);
	    }
            printf("\n");
    }
    
    printf("============\n");
	
	
    for(pt_arr=arr;pt_arr<arr+ARR_ROW;pt_arr++){
	    for(int *i=*pt_arr;i<*pt_arr+ARR_COL;i++){
		printf("%d ",*i);
             }
	    printf("\n");
    }
        return 0;
}


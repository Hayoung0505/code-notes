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

    for(int x=0;x<ARR_ROW;x++){
		  for(int i=0;x<ARR_COL;i++){
		printf("%d ",arr[x][i]);  
		 
  }
  printf("\n");
}

printf("----------\n");
//포인터에 할당하기 위해선 캐스팅이 필요 //접근은 포인터로
    int *pt_arr = (int*)arr;
    printf("pt_arr : %p\n",pt_arr);
    for(int x=0;x<ARR_ROW;x++){
		  for(int i=0;x<ARR_COL;i++){
		printf("%d ",*(pt_arr+ x*ARR_COL   +i));  
		    
        printf("\n");
          }

    printf("----------\n");
    
	return 0;
    }


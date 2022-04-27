#include <stdio.h>
#include <string.h>
#define SCORE_LENGTH 3 
 
int main(int argc, char **argv)
{
	
	printf("multi array...\n");
	//scan , man count 3
	//names array
	//kors array
	//engs array
	//maths array
	
	printf("==============\n");
	char names[SCORE_LENGTH][9];
	for(x=0;x<SCORE_LENGTH;x++){
		printf("input name[8byte]:");
		//strcpy(names[x] ,"kim1");
        scanf("%s",names[x]);	     
	}
	int kors[SCORE_LENGTH];
	 for(int i=0;i<SCORE_LENGTH;i++){
		//kors[i] = 99;
		printf("input kor[0-100]:");
		scanf("%d",&kors[i]);
	}
	int engs[SCORE_LENGTH];
	 for(int i=0;i<SCORE_LENGTH;i++){
		engs[i] = 99;
	}
	int maths[SCORE_LENGTH];
	 for(int i=0;i<SCORE_LENGTH;i++){
		maths[i] = 99;
	}
  for(i=0;i<SCORE_LENGTH;i++){
	  int total = kors[i]+engs[i]+maths[i];
	  double avg = total/3.0
	  
    printf("%s %d %d %d %d\n",names[i],kors[i],engs[i],maths[i],
    (kors[i]+engs[i]+maths[i]),(kors[i]+engs[i]+maths[i])/3.0);
   }  
	
		
	//kim1 99 88 77 264 88.0 B
	//kim2 99 88 77 264 88.0 B
	//kim3 99 88 77 264 88.0 B
	 
	
	return 0;
}



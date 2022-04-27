 #include <stdio.h>
 #include <windows.h>
 
int main(int argc, char **argv)
{
	
	printf("score name,kor,eng,math,total,avg,grade\n");
	
	printf("Input your name[20byte]:\n");
	 
	char name[21];
	scanf("%20s",name);
	printf("%s\n",name);
	
	int kor;
	printf("Input kor[0~100]:\n");
	scanf("%d",&kor);
	printf("%d\n",kor);
	
	int eng;
	printf("input eng[0~100]:\n");
	scanf("%d",&eng);
	printf("%d\n",eng);
	
	int math;
	printf("Input math[0~100]:\n");
	scanf("%d",&math);
	printf("%d\n",math);
	
	int total = kor + eng + math;
	printf("%d\n",total);
	
	double avg = total/3.0;
	printf("%.2lf\n",avg);
	
	char grade = 'A';
	if(avg>=90){
		grade = 'A';
	}else if(avg>=80){
		grade ='B';
	}else if(avg>=70){
		grade ='C';
    }else if(avg>=60){
		grade ='D';
		
	}else {
		grade ='F';
	}
	printf("%c\n",grade);
	
	 
	return 0;
}


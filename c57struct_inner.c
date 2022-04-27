#include <stdio.h>

typedef struct contact{
	char *tel,*email,*addr;
}Contact;	


typedef struct score{
	int kor,eng,math,total;
	double avg;
	char grade;
}Score;

typedef struct student{
	
	char *pt_name;
	Contact ctt;
	Score s;
	
}Student;




int main(int argc, char **argv)
{
	printf("struct ...\n");
	
	Contact ctt;
	ctt.tel = "010";
	ctt.email = "aaa@aaa.com";
	ctt.addr = "seoul";
	printf("ctt.tel : %s\n",ctt.tel);
	printf("ctt.email : %s\n",ctt.email);
	printf("ctt.addr : %s \n",ctt.addr);
	
    Score s;
 	s.kor = 99;
	s.eng = 88;
	s.math = 77;
	s.total = s.kor + s.eng + s.math;
	s.avg = s.total/3.0;
	 
	if(s.avg>=90){
		s.grade =  'A';
	}else if(s.avg>=80){
		s.grade = 'B';
	}else if(s.avg>=70){
		s.grade = 'C';
	}else if(s.avg>=60){
		s.grade = 'D';
    }else     {
		s.grade = 'F';
	}
  
	 
	
	printf("=============\n");
	
	Student st;
	st.pt_name = "yangssem";
	st.ctt = ctt;
	st.s = s;
	
	
	printf("%s ",st.pt_name);
	printf("%s ",st.ctt.tel);
	printf("%s ",st.ctt.email);
	printf("%s \n",st.ctt.addr);
    printf("%d ",st.s.kor);
	printf("%d ",st.s.eng);
	printf("%d ",st.s.math);
	printf("%d ",st.s.total);
	printf("%.2lf ",st.s.avg);
	printf("%c \n",st.s.grade);
	
	
	return 0;
}


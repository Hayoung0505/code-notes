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
	
	//int su1 = 10;
	//int su2 = 20;
	//int sus[2] = {su1,su2};
	
	
	printf("=======\n");
	
	Contact ctt;
	ctt.tel = "010";
	ctt.email = "aaa@aaa.com";
	ctt.addr = "seoul";
	 
	
	Contact ctt2;
	ctt2.tel = "02";
	ctt2.email = "aaa2@aaa.com";
	ctt2.addr = "seoul2";
	 
	Contact ctts[2] = {ctt,ctt2};
	//printf("%s ",ctts[0].tel);
	//printf("%s ",ctts[0].email);
	//printf("%s\n",ctts[0].addr);
	//printf("%s ",ctts[1].tel);
	//printf("%s ",ctts[1].email);
	//printf("%s\n",ctts[1].addr);
	for(int i=0;i<=1;i++){
		printf("%s ",ctts[i].tel);
     	printf("%s ",ctts[i].email);
		printf("%s\n",ctts[i].addr);
		
		
	}
	printf("=============\n");
 
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
  
  Score s2;
 	s2.kor = 11;
	s2.eng = 22;
	s2.math = 33;
	s2.total = s2.kor + s2.eng + s2.math;
	s2.avg = s2.total/3.0;
	 
	if(s2.avg>=90){
		s2.grade =  'A';
	}else if(s2.avg>=80){
		s2.grade = 'B';
	}else if(s2.avg>=70){
		s2.grade = 'C';
	}else if(s2.avg>=60){
		s2.grade = 'D';
    }else     {
		s2.grade = 'F';
	}
	 
	Score ss[2] = {s,s2};
	
	for(int i=0;i<=1;i++){
		printf("%d ",ss[i].kor);
		printf("%d ",ss[i].eng);
		printf("%d ",ss[i].math);
		printf("%d ",ss[i].total);
		printf("%.2lf ",ss[i].avg);
		printf("%c \n",ss[i].grade);
		
	}
	
	
	printf("=====================\n");
	
	Student st;
	st.pt_name = "yangssem";
	st.ctt = ctt;
	st.s = s;
	
	Student st2;
	st2.pt_name = "yangssem2";
	st2.ctt = ctt2;
	st2.s = s2;
	
	
	Student sts[2] = {st,st2};
	for(int i=0;i<=1;i++){
		printf("%s ",sts[i].pt_name);
		printf("%s ",sts[i].ctt.tel);
		printf("%s ",sts[i].ctt.email);
		printf("%s ",sts[i].ctt.addr);
		printf("%d ",sts[i].s.kor);
		printf("%d ",sts[i].s.eng);
		printf("%d ",sts[i].s.math);
		printf("%d ",sts[i].s.total);
		printf("%.2lf ",sts[i].s.avg);
		printf("%c \n",sts[i].s.grade);
		
	}
	
	
	 
    
	printf("=====================\n");
	
	return 0;
}


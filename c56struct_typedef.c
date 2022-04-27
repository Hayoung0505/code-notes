#include <stdio.h>
#include <time.h>

#pragma pack(1) //padding byte remove
        typedef struct Score{
	char *pt_name;
	int kor;
	int eng;
	int math;
	int total;
	double avg;
	char grade;
}SS;

//Member : num, id, pw, name, tel
  struct{
	int num;
	char *id;
	char *pw;
	char *name;
	char *tel;
}m;//변수 선언까지 한번

//Board : num,title, content, writer, wdate
struct Board{
	int num;
	char *title;
	char *content;
	char *writer;
	char *wdate;
	
};

char * local_time();

int main(int argc, char **argv)
{
	printf("typedef struct score..\n");
	 
	SS s;
	s.pt_name = "yangssem";
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
 
	printf("%s ",s.pt_name);
	printf("%d ",s.kor);
	printf("%d ",s.eng);
	printf("%d ",s.math);
	printf("%d ",s.total);
	printf("%.2lf ",s.avg);
	printf("%c \n",s.grade);
	
    printf("===============\n");
     
   // m = {1,"admin","hi123456","kim","02"};
    m.num = 1;
    m.id = "admin";
    m.pw = "hi123456";
    m.name = "kim";
    m.tel = "02";
    printf("%d ",m.num);
    printf("%s ",m.pw);
    printf("%s ",m.name);
    printf("%s ",m.tel);
	
	printf("===============\n");
	
    typedef struct Board SB;	
    SB b = {11,"title","content","lee",local_time()};
    //b.wdate = local_time();
    
    printf("%d ",b.num);
    printf("%s ",b.title);
    printf("%s ",b.content);
    printf("%s ",b.writer);
    printf("%s \n",b.wdate);
    
    
    
    
    
    
    
	return 0;
}// end main
char * local_time(){
	struct tm *pt_time;
	time_t time_now;
	time(&time_now);
    printf("%ld \n",time_now);
    
    pt_time = localtime(&time_now);
	printf("%s \n",asctime(pt_time));
	
	char *wdate = asctime(pt_time);
	
	printf("%s \n",wdate);
	
	return wdate;
}

 

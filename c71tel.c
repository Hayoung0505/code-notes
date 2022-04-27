#include<stdio.h>

#include<string.h>

#include<conio.h>

#include<stdlib.h>

 

 

#define SIZE0 10

#define SIZE1 20

#define SIZE2 15

#define SIZE3 50

 

 

void insert();

int modify();

int Delete();

int undelete();

int search();

void list();

void list_prt(int, int);

int DEF();

 

void chogi_print();

 

// 구조체 선언

struct database 

{

	char id[SIZE0];

	char name[SIZE1];

	char tel[SIZE2];

	char add[SIZE3];

}db[SIZE3];

 

// 삭제한 데이터를 저장해 두는 임시 구조체

struct u_database

{

	char id[SIZE0];

	char name[SIZE1];

	char tel[SIZE2];

	char add[SIZE3];

}undel;

 

// 전역변수 선언

int cnt,cnt1,st[SIZE3],chkdel=0;

 

main()

{

	char op;

 

	chogi_print();

 

	do

	{

		// 메뉴 선택

		printf("┌────────────────────────────────┐\n");

		printf("│  삽입(I), 수정(M), 삭제(D), 복구(U), 검색(S), 목록(L), 종료(Q) │\n");

		printf("└────────────────────────────────┘\n");

		printf(" ===> ");

		op=getche();

				

		// toupper()함수 대문자로 변환

		if(toupper(op)=='Q') return 0;

		

		// 함수 선택

		switch(toupper(op))

		{

		case 'I' : insert(); break;

		case 'M' : modify(); break;

		case 'D' : Delete(); break;

		case 'U' : undelete(); break;

		case 'S' : search(); break;

		case 'L' : list(); break;

		case 'Q' : break;

		default : DEF();

		}

	}

	while(toupper(op)!='Q');

 

	return 0;

}

 

void chogi_print()

{

	printf("\n");

	printf("┌──────────────────────────────┐\n");

	printf("│                                                            │\n");

	printf("│              기본데이터베이스 프로그램(회원관리)           │\n");

	printf("│                                                            │\n");

	printf("│                                                            │\n");

	printf("│   코  딩 : 2100년 5월 3일                                  │\n");

	printf("│                                                            │\n");

	printf("│   작성자 : 홍길동                                          │\n");

	printf("│                                                            │\n");

	printf("└──────────────────────────────┘\n");

}

	

 

 

 

// 삭제함수

int Delete()

{

	int x;

	char ck;

 

	// 검색함수 호출

	x=search();

	

	// 데이터가 없을시

	if(x==0)

	{

		printf("\n\n 삭제할 데이터가 없습니다!! \n\n");

		return 0;

	}

	

	else

	{

		printf("\n\n 정말 지우시겠습니까? (Y/n)");

		ck = getche();

		if(toupper(ck) == 'Y')

		{

			// 임시장소 데이터 유무 확인변수

			chkdel=1;

 

			// 임시장소로 복사

			strcpy(undel.id, db[x].id);

			strcpy(undel.name, db[x].name);

			strcpy(undel.tel, db[x].tel);

			strcpy(undel.add, db[x].add);

			strcpy(db[x].id, "!@#");

			strcpy(db[x].name, " ");

			strcpy(db[x].tel, " ");

			strcpy(db[x].add, " ");

			st[++cnt1]=x;

			printf("\n\n 성공적으로 삭제되었습니다!! \n");

		}

		else printf("\n\n 삭제작업을 중지하였습니다!!\n");

	}

	return 0;

}

 

// 삽입함수

void insert()

{

	int c;

	

	// 비워있는 공간에 삽입

	if(cnt1!=0)	c=st[cnt1--];

	else c=++cnt;

	printf("\n\n 아 이 디 : "); scanf("%s",&db[c].id);

	printf("\n 이    름 : "); scanf("%s",&db[c].name);

	printf("\n 전화번호 : "); scanf("%s",&db[c].tel);

	

	// 띄어쓰기 인식을 위한 gets()함수 호출

	// Buffer 비움

	fflush(stdin);

	printf("\n 주    소 : "); gets(db[c].add);

 

	printf("\n\n 성공적으로 입력이 완료되었습니다!! \n\n");

}

 

 

// 목록 선택함수

void list()

{

	int start,last;

	char choice;

 

	// 선택

	printf("\n\n 전체출력(A), 범위출력(R) : ");

	choice=getche();

	switch(toupper(choice))

	{

	case 'A' : 

		start=1;

		last=cnt;

		list_prt(start,last);

		break;

	

	// 범위 목록 

	case 'R' : printf("\n\n 시작데이터 : ");

		scanf("%d",&start);

		printf("\n 마지막데이터 : ");

		scanf("%d",&last);

		list_prt(start,last);

		break;

	default : DEF();

	}

}

 

// 목록함수

void list_prt(int start,int last)

{	

	int i;

	if(last<=cnt)

	{

		printf("\n\n번호       아이디        이름        전화번호          주소\n");

	 

		for(i=start; i<=last; i++)

		{

			// 지웠던 공간이 있으면 통과하기

			if(strcmp(db[i].id,"!@#") == 0) continue;

			else 

			{

				printf("\n%2d         %4s       %8s    %13s    %8s\n\n",i,db[i].id,db[i].name,db[i].tel,db[i].add);

			}

 

		}

	}

	else printf("\n범위가 맞지 않습니다.\n\n");

}

 

 

// 검색함수

int search()

{

	int i;

	char name[SIZE1], tel[SIZE2], id[SIZE0], op;

 

	// 검색 선택

	printf("\n\n ** 검색항목을 선택하세요 ** \n");

	printf(" 아이디(I), 이름(N), 전화번호(T)? ");

	op = getche();

	switch(toupper(op))

	{

	case 'I' : printf("\n\n 아이디를 입력하세요 : ");

		scanf("%s",&id);

		

		// 검색부분 

		for(i=1;i<=cnt;i++)

		{

			if(strcmp(db[i].id,id)==0)

			{

				list_prt(i,i);

				return(i);

			}

		}

		printf("\n\n 데이터가 존재하지 않습니다. \n\n");

		return(0);

		break;

 

	case 'N' : printf("\n 이름을 입력하세요 : "); 

		scanf("%s",&name);

		

		// 검색부분 

		for(i=1 ; i<=cnt ; i++)

		{

			if(strcmp(db[i].name, name)==0)

			{

				list_prt(i,i);

				return(i);

			}

		}

		printf("\n\n 데이터가 존재하지 않습니다. \n\n");

		return(0);

		break;

 

	case 'T' : printf("\n 전화번호를 입력하세요 :");

		scanf("%s",&tel);

		

		// 검색부분 

		for(i=0;i<=cnt;i++)

		{

			if(strcmp(db[i].tel,tel)==0)

			{

				list_prt(i,i);

				return(i);

			}

		}

		printf("\n\n 데이터가 존재하지 않습니다. \n\n");

		return(0);

		break;

	default : DEF();

	}

	return 0;

}

 

 

// 복구 함수

int undelete()

{

	int c;

	char chkkey;

	if(chkdel)

	{

		printf("\n\n 아 이 디 : %s\n\n 이    름 : %s\n\n 전화번호 : %s\n\n 주    소 : %s \n\n 정말 복구하시겠습니까? (Y/n)",

			undel.id,undel.name,undel.tel,undel.add);

		chkkey = getche();

		if(toupper(chkkey)=='Y')

		{

			// 빈 공간 확인

			if(cnt1!=0) c = st[cnt1--];

			else c=++cnt;

			strcpy(db[c].id, undel.id);

			strcpy(db[c].name, undel.name);

			strcpy(db[c].tel, undel.tel);

			strcpy(db[c].add, undel.add);

			printf("\n\n 성공적으로 복구되었습니다!! \n");

			chkdel=0;

		}

		else printf("\n\n 복구작업이 중지되었습니다!! \n");

		return(0);

	}

 

	else printf("\n\n 복구할 데이터가 없습니다!! \n");

	return(0);

}

 

// 수정함수

int modify()

{

	int x;

	x = search();

	if(x==0)

		return(0);

	else

	{

		printf("\n\n 새로운 데이터를 입력하세요\n");

		printf("\n 아 이 디 : "); scanf("%s",&db[x].id);

		printf("\n 이    름 : "); scanf("%s",&db[x].name);

		printf("\n 전화번호 : "); scanf("%s",&db[x].tel);

		printf("\n 주    소 : "); scanf("%s",&db[x].add);

		return(0);

	}

}

 

int DEF()

{

	printf("\n\n 잘못누르셨습니다. \n\n");

	return(0);

}

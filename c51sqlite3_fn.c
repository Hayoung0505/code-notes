#include <stdio.h>
#include <sqlite3.h>
#define NAME_LENGTH 3
//전역변수 처
sqlite3 *db;
sqlite3_stmt *stmt = NULL;
//기능별 함수만들 //미션은 scanf로 crud다 입력가능하게 만들자.
void db_open();
void create_table();
void insert();
void update();
void delete();
void selectAll();
void selectOne();

int main(int argc, char **argv)
{
	printf("sqlite3...\n");
    //sudo apt install libsqlite3-dev
    //sudo apt install sqlite3
    
    int y;
    int num;
    char name[NAME_LENGTH];
    int age;

    db_open();
    create_table();
    
    printf("====select_all=========\n");
    insert();
    printf("====select_all=========\n");
    update();
    printf("====select_all=========\n");
    delete();
    printf("====select_all=========\n"); 
    selectAll();
    printf("====select_one=========\n");
    selectOne();
    
    while(true){
        printf("Student List\n");
        printf("1.insert 2.update 3.delete 4.selectAll 5.selectOne");
        
        scanf("%d",&y);
           if(y == 1){
               printf("input nmae : \n");
               scanf("%s",name);
               printf("input nmae : \n");
               scanf("%d",&age);
               insert(name, age);
               
    }
    
	return 0;
}//end main

void db_open(sqlite3 *db){
    //1.db open
     

    int result_open = sqlite3_open("c50test.db",&db);
    
    printf("result_open:%d\n",result_open);
    
    //gcc -Wall -o c50sqlite3 c50sqlite3.c -lsqlite3
    if(!result_open){	
      	printf("db open successfully!!\n");
      	
    }	
    ////////////////////////////////////
    }
void create_table(sqlite3 *db){
    //2.create table ////////////////////
    const char *sql_create_table =  
      "create table if not exists test(num integer primary key autoincrement, name text,age integer, wdate default CURRENT_TIMESTAMP);";
   
    sqlite3_prepare_v2(db,sql_create_table,-1,&stmt,NULL);
    
    int result_create_tab = sqlite3_step(stmt);//101 ->OK, DONE
    printf("result_create_tab : %d\n",result_create_tab);
    printf("SQLITE_OK : %d\n",SQLITE_DONE);//101
    
   if(result_create_tab == SQLITE_DONE){	
      	printf("create_tab successfully!!\n");
      	//sqlite3 c50test.db ".tables"
    }	
    
    /////////////////////////////////////
    }
void insert(sqlite3 *db){
     //3.insert////////////////////
    const char *sql_insert =  
      "insert into test(name,age) values(?,?);";
   
    sqlite3_prepare_v2(db,sql_insert,-1,&stmt,NULL);
    
    
    sqlite3_bind_text(stmt,1,"kim",-1,SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt,2,33);
    
    int result_insert = sqlite3_step(stmt);//101 ->OK, DONE
    printf("result_create_tab : %d\n",result_insert);
   
    
   if(result_insert == SQLITE_DONE){	
      	printf("insert successfully!!\n");
      	//sqlite3 c50test.db "select * from test"
    }	
    }
void update(sqlite3 *db){
     /////////////////////////////////////
    
     printf("====update=========\n");
     //4.update////////////////////
    const char *sql_update =  
      "update test set name=?, age=? where num=?;";
   
    sqlite3_prepare_v2(db,sql_update,-1,&stmt,NULL);
    
    
    sqlite3_bind_text(stmt,1,"kim",-1,SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt,2,11);
    sqlite3_bind_int(stmt,3,3);
    
    int result_update = sqlite3_step(stmt);//101 ->OK, DONE
    printf("result_create_tab : %d\n",result_update);
   
    
   if(result_update == SQLITE_DONE){	
      	printf("insert successfully!!\n");
      	//sqlite3 c50test.db "select * from test"
    }	
    }
void delete(sqlite3 *db){
     
    
     //5.delete////////////////////
    const char *sql_delete =  
      "delete from test where num=?;";
   
    sqlite3_prepare_v2(db,sql_delete,-1,&stmt,NULL);
     
    sqlite3_bind_int(stmt,1,num);
    
    int result_delete = sqlite3_step(stmt);//101 ->OK, DONE
    printf("result_create_tab : %d\n",result_delete);
   
    
     if(result_delete == SQLITE_DONE){	
      	printf("delete successfully!!\n");
      	//sqlite3 c50test.db "select * from test"
    }	
    
    
    }
void selectAll(sqlite3 *db){
     //6.selectAll////////////////////
      const char *sql_selectAll=  
      "select * from test;";
   
    sqlite3_prepare_v2(db,sql_selectAll,-1,&stmt,NULL);
    
    while(sqlite3_step(stmt) == SQLITE_ROW){
		
		printf("%d ",(int)sqlite3_column_int(stmt,0));
		printf("%s ",(char*)sqlite3_column_text(stmt,1));
		printf("%d ",(int)sqlite3_column_int(stmt,2));
		printf("%s\n",(char*)sqlite3_column_text(stmt,3));
		}
    
    
    //////////////////////
    }
void selectOne(sqlite3 *db){
     //7.selectOne////////////////////
    const char *sql_selectOne=  
      "select * from test where num=?;";
   
    sqlite3_prepare_v2(db,sql_selectOne,-1,&stmt,NULL);
    sqlite3_bind_int(stmt,1,4);//num=4
    while(sqlite3_step(stmt) == SQLITE_ROW){
		
		printf("%d ",(int)sqlite3_column_int(stmt,0));
		printf("%s ",(char*)sqlite3_column_text(stmt,1));
		printf("%d ",(int)sqlite3_column_int(stmt,2));
		printf("%s\n",(char*)sqlite3_column_text(stmt,3));
		}
    
    //////////////////////
    }

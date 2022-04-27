#include <stdio.h>
#include <sqlite3.h>

int main(int argc, char **argv)
{
	printf("sqlite3...\n");
    //sudo apt install libsqlite3-dev
    //sudo apt install sqlite3
    
     
    
    
    //1.db open
    sqlite3 *db;

    int result_open = sqlite3_open("c50test.db",&db);
    
    printf("result_open:%d\n",result_open);
    
    //gcc -Wall -o c50sqlite3 c50sqlite3.c -lsqlite3
    if(!result_open){	
      	printf("db open successfully!!\n");
      	
    }	
    ////////////////////////////////////
    
    
    sqlite3_stmt *stmt = NULL;
    
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
    printf("=============\n");
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
    
    /////////////////////////////////////
    
     printf("====update=========\n");
     //4.update////////////////////
    const char *sql_update =  
      "update test set name=?, age=? where num=?;";
   
    sqlite3_prepare_v2(db,sql_update,-1,&stmt,NULL);
    
    
    sqlite3_bind_text(stmt,1,"kim",-1,SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt,2,11);
    sqlite3_bind_int(stmt,3,1);
    
    int result_update = sqlite3_step(stmt);//101 ->OK, DONE
    printf("result_create_tab : %d\n",result_update);
   
    
   if(result_insert == SQLITE_DONE){	
      	printf("insert successfully!!\n");
      	//sqlite3 c50test.db "select * from test"
    }	
    
    /////////////////////////////////////
    
     //5.delte////////////////////
    const char *sql_delete =  
      "delete from test where num=?;";
   
    sqlite3_prepare_v2(db,sql_delete,-1,&stmt,NULL);
     
    sqlite3_bind_int(stmt,1,2);
    
    int result_delete = sqlite3_step(stmt);//101 ->OK, DONE
    printf("result_create_tab : %d\n",result_delete);
   
    
     if(result_insert == SQLITE_DONE){	
      	printf("delete successfully!!\n");
      	//sqlite3 c50test.db "select * from test"
    }	
    
    
     printf("====select_all=========\n");
    
     //6.select_all////////////////////
      const char *sql_select_all =  
      "select * from test;";
   
    sqlite3_prepare_v2(db,sql_select_all,-1,&stmt,NULL);
    
    while(sqlite3_step(stmt) == SQLITE_ROW){
		
		printf("%d ",(int)sqlite3_column_int(stmt,0));
		printf("%s ",(char*)sqlite3_column_text(stmt,1));
		printf("%d ",(int)sqlite3_column_int(stmt,2));
		printf("%s\n",(char*)sqlite3_column_text(stmt,3));
		}
    
    
    //////////////////////
     printf("====select_one=========\n");
    
     //7.select_one////////////////////
    const char *sql_select_one =  
      "select * from test where num=?;";
   
    sqlite3_prepare_v2(db,sql_select_one,-1,&stmt,NULL);
    sqlite3_bind_int(stmt,1,4);//num=4
    while(sqlite3_step(stmt) == SQLITE_ROW){
		
		printf("%d ",(int)sqlite3_column_int(stmt,0));
		printf("%s ",(char*)sqlite3_column_text(stmt,1));
		printf("%d ",(int)sqlite3_column_int(stmt,2));
		printf("%s\n",(char*)sqlite3_column_text(stmt,3));
		}
    
    
    
    
    
    
    
	return 0;
}


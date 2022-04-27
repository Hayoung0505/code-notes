#include <stdio.h>

int main(int argc, char **argv)
{
	
	printf("inner function...\n");
	
	void test01(){
		printf("test01()...\n");
	    void sleep(){
		printf("sleep()...\n");
	}
	sleep();
      }
	test01();
	//sleep();
	
	
	
	
	return 0;
}


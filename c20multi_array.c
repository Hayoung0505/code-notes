 #include <stdio.h>
 #include <string.h>
 
int main(int argc, char **argv)
{
	
	printf("multi array...\n");
	
	//'k','i','m'
	
	//'k','i','m'
	char names[2][3] = {{'k','i','m'},{'k','i','m'}};
	
	int x,i;
	for(x=0;x<sizeof(names)/sizeof(names[0]);x++){
		printf("%s\n", names[x]);
		for(i=0;i<sizeof(names[0])/sizeof(char);i++){
			printf("%c ",names[x][i]);
		}
		printf("\n");
		
	}
	printf("============\n");
	char names2[3][6] = {"red","green","blue"};
    //names2[0] = "white";
    strcpy(names2[0],"white");
	for(x=0;x<sizeof(names2)/sizeof(names2[0]);x++){
		printf("%s\n",names2[x]);
		}
		
	//char str[10] = "abc";
	//str = "white";
	 
    printf("============\n");

    //kim,yangssem,tommy
    
    //char names3[3][9] = {"kim","yangssem","tommy"};
    char names3[3][9];
    //kim, yangssem,tomy >>scanf for
     for(x=0;x<sizeof(names3)/sizeof(names3[0]);x++){
		printf("input name[8byte]:");
		scanf("%s",names3[x]);
	}
    
    for(x=0;x<sizeof(names3)/sizeof(names3[0]);x++){
		printf("%s\n",names3[x]);
	}
    
	return 0;
}


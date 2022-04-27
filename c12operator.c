#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
		printf("operator..\n");
		
		//1.(),[], ,,, , .,*,**,***, ->
		
		//2. (cast), ++,--, +

        //3. *,/,+,-,%
         
        //4. <<, >>
        
        //5. == !=> < >= <=
        
        //6. & | ^
        
        //7. && || !
        printf("%d\n",5==5 && 5==5);
        // #include <stdbool.h>
        
         printf("%d\n",true && true);
         
        //8. ? :
        int num = 100;
        printf("%d\n",num?1000:2000); 		
		num = 0;
        printf("%d\n",num?1000:2000); 

       

	return 0;
}


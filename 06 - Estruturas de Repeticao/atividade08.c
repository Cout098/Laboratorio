#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    
    int i=0, j=0, result=0;

    while (i<10)
    {
        for (j = 1; j < 10; j++)
        {   
            result = i * j;
            printf("%d * %d = %d \n", i, j, result);
        }
        printf("\n==========\n");
        i++;
    }
    
	return 0;
}

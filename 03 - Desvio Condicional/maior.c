#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1;
	
	printf("Digite um numero:\n");
	scanf("%d",&n1);
	
    if(n1 > 10){
        printf("%d e maior que 10\n", n1);      
    }else{
        printf("%d e menor que dez", n1);
    }
	
	return 0;
}



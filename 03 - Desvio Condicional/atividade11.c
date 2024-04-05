#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&n1);
	
	if(n1%7==0){
		printf("O numero e multiplo de 7\n");
	} else{
		printf("O numero nao e multiplo de 7\n");
	}
	
	
	return 0;
}

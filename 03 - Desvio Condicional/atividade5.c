#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&n1);
	
	if(n1>0)
	{
		printf("E maior que zero\n");
	}
	else
	{
		printf("Nao e maior que zero\n");
	}
	
	if(n1%2==0){
		printf("O numero e par\n");
	}
	else
	{
		printf("O numero e impar\n");
	}
	
	if(n1%3==0)
	{
		printf("O numero e multiplo de 3\n");
	}
	else
	{
		printf("O numero nao e multiplo de 3\n");
	}
	
	
	return 0;
}

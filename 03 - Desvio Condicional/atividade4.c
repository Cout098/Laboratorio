#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3;
	
	printf("Digite tres numeros inteiros:\n");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	if(n1>0 && n2>0 && n3>0)
	{
		printf("Todos numeros sao maiores que zero\n");
	}
	else
	{
		printf("Nao sao maiores que 0\n");
	}
	
	if(n1>n3){
		printf("O primeiro e maior que o ultimo\n");
	}
	else
	{
		printf("O primeiro nao e maior que o ultimo\n");
	}
	
	if(n2>n3)
	{
		printf("O segundo e maior que o ultimo\n");
	}
	else
	{
		printf("O segundo nao e maior que o ultimo\n");
	}
	
	
	return 0;
}

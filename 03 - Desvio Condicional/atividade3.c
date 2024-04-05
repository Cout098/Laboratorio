#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&n1);
	
	
	if(n1%2==0)
	{
		printf("\nPar");
	}
	else
	{
		printf("\nImpar");
	}
	
	return 0;
}

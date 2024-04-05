#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3, soma;
	
	printf("Digite tres numeros reais:\n");
	scanf("%f %f %f",&n1, &n2, &n3);
	
	soma=n1+n2+n3;
	
	if(soma<=100)
	{
		printf("\nValor aceito");
	}
	else
	{
		printf("\nValor invalido");
	}
	
	return 0;
}

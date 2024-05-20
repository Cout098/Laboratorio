#include <stdio.h>
#include <stdlib.h>

void exibirMes(int n);

int main(){
	int n;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&n);
	
    exibirMes(n);
	return 0;
}

void exibirMes(int n){
    switch (n)
	{
		case 1:
			printf("Janeiro");
		break;
		
		case 2:
			printf("Fevereiro");
		break;
		
		case 3:
			printf("Mar�o");
		break;
		
		case 4:
			printf("Abril");
		break;
		
		case 5:
			printf("Maio");
		break;
		
		case 6:
			printf("Junho");
		break;
		
		case 7:
			printf("Julho");
		break;
		
		case 8:
			printf("Agosto");
		break;
		
		default:
			printf("O numero digitado e invalido");
	}
}

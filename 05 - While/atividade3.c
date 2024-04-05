#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int opc=0, i=0, escolha=0;
	float num, soma=0, media=0;
	while(escolha!=1){
		printf("Digite um número.\n");
		scanf("%f",&num);
		
		soma+=num;
		
		i++;
		
		printf("Escolha uma das opções:\n");
		printf("[1] - Resultado\n");
		printf("[2] - Digitar mais.\n");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				escolha = 1;
			break;
			case 2:
				escolha = 0;
			break;
			default:
				printf("A opção digitada é inválida.\n");
			break;
		}
	}
	
	media = soma/i;
	
	printf("O resultado da média é: %.2f", media);
	
	return 0;
}

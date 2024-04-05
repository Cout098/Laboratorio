#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<windows.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int cod1;
	
	printf("Digite o codigo do item:\n");
	scanf("%d",&cod1);
	
	switch (cod1){
		case 1 : 
			printf("Frios");
		break;
		
		case 2 : 
			printf("Material de Limpeza");
		break;
		
		case 3 : 
			printf("Padaria");
		break;
		
		case 4 : 
			printf("Biscoitos e cereais");
		break;
		
		case 5 : 
			printf("Higiene pessoal");
		break;	
		
		default :
		printf ("Código invalido!\n");	
	}
	
	return 0;
}


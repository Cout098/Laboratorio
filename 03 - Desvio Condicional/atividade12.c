#include <stdio.h>
#include <stdlib.h>

int main (){
	int primeiroNumero, segundoNumero, terceiroNumero, opcao;
	
	printf("Digite o primeiro numero\n");
	scanf("%d", &primeiroNumero);
	
	printf("Digite o segundo numero\n");
	scanf("%d", &segundoNumero);
	
	printf("Digite o terceiro numero\n");
	scanf("%d", &terceiroNumero);
	
	printf("Escolha uma opcao\n");
	printf("1-Exiba a soma dos tres numeros\n");
	printf("2-Exibia o maior e o menor numero entre eles\n");
	printf("3-Exiba-los ordenados de modo decrescente\n");
	scanf("%d", &opcao);
	
	
	switch(opcao){
		case 1 : 
			printf("\nA soma dos tres numeros e: %d", primeiroNumero + segundoNumero + terceiroNumero);
			break;
		case 2 : 
			if(primeiroNumero>terceiroNumero){
				printf("E maior\n");
			}else{
				printf("O numero tres e maior\n");
			}
			if(segundoNumero>terceiroNumero){
				printf("E maior\n");
			}else{
				printf("O numero dois e menor\n");
			}
		case 3:
			if(primeiroNumero > segundoNumero && primeiroNumero >terceiroNumero ){
				printf("\n%d, ",primeiroNumero);
                if(segundoNumero > terceiroNumero){
				    printf("%d, %d",segundoNumero, terceiroNumero);
			    }else{ 
                    printf("%d, %d",terceiroNumero,segundoNumero);
                }
			} 
            else if(segundoNumero > primeiroNumero && segundoNumero >terceiroNumero ){
				printf("\n%d, ",segundoNumero);
                if(primeiroNumero > terceiroNumero){
				    printf("%d, %d",primeiroNumero, terceiroNumero);
                }else{
				    printf("%d, %d", terceiroNumero, primeiroNumero);
			    }             
			}else{
                printf("\n%d, ",terceiroNumero);
                if(primeiroNumero > segundoNumero){
				    printf("%d, %d",primeiroNumero, segundoNumero);
                }else{
				    printf("%d, %d", segundoNumero, primeiroNumero);
			    }
            }

		break;

        default:
            printf("Opção inválida\n");
        break;

    }
	
	return 0;
}



/*então temos as seguintes opções: 
n1 -  Ser o maior
n2 - Ser o maior
n3 - Ser o maior

agora temos que descobrir quem é o segundo maior
se n1 é o maior
    quem é o segundo maior? n2 ou n3
se n2 é o maior 
    quem é o segundo maior? n1 ou n3 
se n3 é o maior 
    quem é o segundo maior? n1 ou n2



para n1 ser maior, ele tem que ser maior que n2 e maior que n3.

mas se n2 for maior, ele tem que ser maior que n1 e maior que n2.

mas se n1 e n2 não são maiores, n3 é o maior. 

Traduzindo em portugol

se (n1 > n2 e n1 > n3){
    imprima n1 na tela
        se (n2>n3){
            imprima n2, n3
        }se nao{
            imprima n3, n2
        }
} se não se (n2 > n1 e n2 > n3){
    imprima n2 na tela
        se (n1>n3){
            imprima n1, n3
        }se nao{
            imprima n3, n1
        }
} se nao {
    imprima n3 na tela
        se (n2>n1){
            imprima n2, n1
        }se nao{
            imprima n1, n2
        }
}*/
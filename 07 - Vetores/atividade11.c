#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    int i;
    
    printf("Digite 10 numeros diferentes de 0 para preencher o vetor.\n");

    for ( i = 0; i < 10; i++){
        while(1){
            printf("Digite um numero: ");
            scanf("%d", &vetor[i]);
            if (vetor[i] != 0){
              break;  
            } else {
                printf("Voce digitou o numero 0.\nDigite outro numero para essa posicao:\n");
            }
        }   
    }
    
    printf("O vetor ficou assim: ");
    for ( i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    
   
    return 0;
}
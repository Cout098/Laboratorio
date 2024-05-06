#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    int i, n=0;

    printf("Digite 10 numeros diferentes de 0 para preencher o vetor.\n");

    for ( i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        n = i;
        if (vetor[i] == 0){
            break;
        }
    }
    
    printf("O vetor ficou assim: ");
    for ( i = 0; i < n + 1; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    int i, busca, encontrado = 0;

    for(i = 0; i < 10; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite um número para ser buscado:");
    scanf("%d", &busca);

    for(i = 0; i < 10; i++){
        if(vetor[i] == busca){
            encontrado = 1;
            break;
        } 
    }

    if (encontrado){
        printf("O número %d está contido no vetor.", busca);
    } else {
        printf("O número %d não está contido no vetor.", busca);
    }
    
    
    return 0;
}

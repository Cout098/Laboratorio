#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    int i, cinco = 0;

    for(i = 0; i < 10; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &vetor[i]);
    }

    for ( i = 0; i < 10; i++){
        if(vetor[i] == 5){
            cinco++;
        } 
    }

    if(cinco){
        printf("O número 5 está contido no vetor %d vezes.", cinco);
    } else {
        printf("O número 5 não está contido no vetor.");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    int i, cinco;

    for(i = 0; i < 10; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &vetor[i]);
    }

    
    for ( i = 0; i < 10; i++){
        if(vetor[i] == 5){
            cinco = 1;
            break;
        } 
    }

    if(cinco){
        printf("O n�mero 5 est� contido no vetor.");
    } else {
        printf("O n�mero 5 n�o est� contido no vetor.");
    }
    
    return 0;
}

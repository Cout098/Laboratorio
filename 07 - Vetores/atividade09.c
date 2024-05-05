#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    int posicaoPar[10];
    int posicaoImpar[10];
    int i, maior, menor, posicaoMaior, posicaoMenor, pares;

    for(i = 0; i < 10; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(i = 0; i < 10; i++){
        if(vetor[i] >=  maior){
            maior = vetor[i];
            posicaoMaior = i;
        }
        if(vetor[i] <= menor){
            menor = vetor[i];
            posicaoMenor = i;
        }
        
    }   

    for (i = 0; i < 10; i++){
        if(vetor[i]%2==0){
            pares = i;
            for(i = 0; i < 10; i++){
                posicaoPar[i] = pares;
            }
        }
    }
    

    printf("A posição do maior número digitado foi: %d. \nO maior número é: %d.\n", posicaoMaior, maior);
    printf("A posição do menor número digitado foi: %d. \nO menor número é: %d.\n", posicaoMenor, menor);
    printf("A posição dos números pares é: ");    
    
    
    return 0;
}

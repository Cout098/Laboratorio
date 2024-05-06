#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[8];
    int i, j, n, rep;
    
    printf("Digite 8 numeros diferentes de 0 para preencher o vetor.\n");

    for (i = 0; i < 8; i++){
        while(1){
            printf("Digite um numero para preencher a posicao do vetor: ");
            scanf("%d", &n);
            rep = 0;
            for (j = 0; j < 8; j++){
                if(n == vetor[j]){
                    rep = 1;
                    break;
                }
            }
            if(rep == 1){
                printf("Numero repetido. Insira outro número\n");
            } else {
                vetor[i] = n;
                break;
            }
        }
    }
    
    printf("O vetor ficou assim: ");
    for ( i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
   
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int vetor1[10];
    int vetor2[5];
    int vetor3[5];
    int i, j = 0, k = 0, n;

    printf("Digite numeros inteiros para preencher os vetores:\n");

    for (i = 0; i < 10; i++){
        while(1){
            printf("Digite o numero: ");
            scanf("%d", &n);

            if(n >= 0){
                vetor1[i] = n;
                if (i%2==0){
                    vetor2[j] = vetor1[i] / 2;
                    j++;
                    break;
                } else {
                    vetor3[k] = vetor1[i] * 3;
                    k++;
                    break;
                }

            } else {
                printf("O número digitado é inválido.\n");
            } 
        }
    }
    
    printf("\nO primeiro vetor ficara assim: ");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",vetor1[i]);
    }

    printf("\nO segundo vetor ficara assim: ");
    for ( j = 0; j < 5; j++)
    {
        printf("%d ",vetor2[j]);
    }

    printf("\nO terceiro vetor ficara assim: ");
    for ( k = 0; k < 5; k++)
    {
        printf("%d ",vetor3[k]);
    }
    

    return 0;
}
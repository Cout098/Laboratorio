#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void imprimirMatriz(int matriz[3][3]);
void conferirLinhas(int matriz[3][3]);

int main(){
    int matriz[3][3];

    printf("Digite os números para preencher a matriz.\nLembrando que a soma de cada linha deve ser igual a 9.\n");
    conferirLinhas(matriz);
    printf("A Matriz ficou assim: \n");
    imprimirMatriz(matriz);

    return 0;
}

void conferirLinhas(int matriz[3][3]){
    for (int i = 0; i < 3; i++){
        printf("Linha %d: \n", i);
        while (1){
            int soma = 0;
            for (int j = 0; j < 3; j++){
                printf("Posição [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
                soma += matriz[i][j];
            }
            
            if(soma == 9){
                break;
            } else {
                printf("A soma dos numeros digitados não é igual a 9.\nDigite os números novamente.\n");
                soma = 0;
            }
        }
        system("cls");
    }
}

void imprimirMatriz(int matriz[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
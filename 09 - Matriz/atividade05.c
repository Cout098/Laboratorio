#include <stdio.h>

void preencherMatriz(int matriz[4][4]);
void imprimirMatriz(int matriz [4][4]);
void conferirMaior(int matriz[4][4], int *linha, int *coluna);

int main(){
    int matriz[4][4];
    int linha, coluna;

    preencherMatriz(matriz);
    imprimirMatriz(matriz);
    conferirMaior(matriz, &linha, &coluna);

    printf("O Maior valor esta na linha %d, coluna %d.", linha+1, coluna+1);

    return 0;
}

void preencherMatriz(int matriz[4][4]){
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um numero para posicao[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        system("cls");
    }
}

void imprimirMatriz(int matriz [4][4]){
    printf("MATRIZ\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void conferirMaior(int matriz[4][4], int *linha, int *coluna){
    int maior = matriz[0][0];
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                *linha = i;
                *coluna = j;
            }
        }
    }
}
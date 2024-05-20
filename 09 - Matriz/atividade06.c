#include <stdio.h>

#define tam 5

void preencherMatriz(int matriz[tam][tam]);
void imprimirMatriz(int main[tam][tam]);
int localizar(int matriz[tam][tam], int procurado, int *linha, int *coluna);

int main(){
    int matriz[tam][tam];
    int linha, coluna, procurado;

    preencherMatriz(matriz);
    imprimirMatriz(matriz);

    printf("Digite o numero a ser encontrado: ");
    scanf("%d", &procurado);

    if (localizar(matriz, procurado, &linha, &coluna)){
        printf("O numero buscado se encontra na linha %d e coluna %d", linha+1, coluna+1);

    } else{
        printf("Nao foi encontrado");
    }

    return 0;
}


void preencherMatriz(int matriz[tam][tam]){
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um numero para posicao[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        system("cls");
    }
}

void imprimirMatriz(int matriz [tam][tam]){
    printf("MATRIZ\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int localizar(int matriz[tam][tam], int procurado, int *linha, int *coluna) {
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if(matriz[i][j] == procurado){
                *linha = i;
                *coluna = j;
                return 1;
            }
        }
    }
    return 0;
}
#include <stdio.h>  
#include <stdlib.h>
#include <conio.h> 


void preencherMatriz(int matriz[4][4]);
void imprimirMatriz(int matriz [4][4]);
void imprimirDiagonais(int matriz[4][4]);
int somarLinha(int matriz[4][4], int linha);
int somarColuna(int matriz[4][4], int coluna);
int menu();

int main(){
    int matriz[4][4], opcSelecionada, linha, coluna, somaLinha, somaColuna;

    preencherMatriz(matriz);
    opcSelecionada = menu();
    
    switch (opcSelecionada){
        case 1:
            imprimirMatriz(matriz);
        break;
        case 2:
            imprimirDiagonais(matriz);
        break;
        case 3:
            printf("Digite qual linha você quer somar: ");
            scanf("%d", &linha);
            somaLinha = somarLinha(matriz, linha);
            printf("O valor da soma dos números da linha %d é: %d", linha, somaLinha);
        break;
        case 4:
            printf("Digite qual coluna você quer somar: ");
            scanf("%d", &coluna);
            somaColuna = somarColuna(matriz, coluna);
            printf("O valor da soma dos números da linha %d é: %d", linha, somaColuna);
        default:
            printf("Opção inválida\n");
        break;
    }
    
    return 0;
}

void preencherMatriz(int matriz[4][4]){
    int i, j;
    
    for ( i = 0; i < 4; i++){
       for ( j = 0; j < 4; j++){
           printf("Digite um numero para preencher a posição [%d][%d]: ", i, j);
           scanf("%d", &matriz[i][j]);
       }
       system("cls");
    }
}

int menu(){
    int opc;
    printf("MENU DE ESCOLHA\n");
    printf("Digite o número correspondente de cada função: \n");
    
    printf("[1] - Imprimir Matriz\n");
    printf("[2] - Exibir diagonal principal e secundaria\n");
    printf("[3] - Exibir a soma de uma determinada linha\n");
    printf("[4] - Exibir a soma de uma determinada coluna\n");
    scanf("%d", &opc);

    return opc;
}

void imprimirMatriz(int matriz [4][4]){
    int i, j;

    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirDiagonais(int matriz[4][4]){
    int i, j;

    printf("\n A diagonal principal ficou preenchida assim: \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (i == j){
                printf("%d\t", matriz[i][j]);
            } else {
                printf("-\t");
            }
        }
        printf("\n");
    }

    printf("\n A diagonal secundaria ficou preenchida assim: \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (i+j == 4-1){
                printf("%d\t", matriz[i][j]);
            } else {
                printf("-\t");
            }
        }
        printf("\n");
    }
}

int somarLinha(int matriz[4][4], int linha){
    int i, j;
    int soma = 0;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (i == linha){
                soma += matriz[i][j]; 
            } 
        }
    }

    return soma;
}

int somarColuna(int matriz[4][4], int coluna){
    int i, j;
    int soma = 0;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (j == coluna){
                soma += matriz[i][j]; 
            } 
        }
    }

    return soma;
}

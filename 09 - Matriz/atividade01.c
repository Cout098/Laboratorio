#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int matriz[4][4]);
void imprimirMatriz(int matriz [4][4]);

int main(){
    int matriz[4][4];

    preencherMatriz(matriz);
    printf("A Matriz ficará assim: \n");
    imprimirMatriz(matriz);

    return 0;
}

void preencherMatriz(int matriz[4][4]){
    int i, j;
    
    srand (time(NULL));

    for ( i = 0; i < 4; i++){
       for ( j = 0; j < 4; j++){
           matriz[i][j] = rand() %100;
       }
    }
}
void imprimirMatriz(int matriz [4][4]){
    int i, j;

    for (i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

}
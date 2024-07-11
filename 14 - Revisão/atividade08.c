#include <stdio.h>

int ehImpar(int numero) {
    return numero % 2 != 0;
}

int somaEhPar(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma % 2 == 0;
}

int main() {
    int matriz[4][4];

    for (int i = 0; i < 4; i++) {
        int valido = 0;
        while (!valido) {
            valido = 1;
            printf("Preencha a linha %d:\n", i + 1);

            for (int j = 0; j < 4; j++) {
                scanf("%d", &matriz[i][j]);

                if (i % 2 == 1 && !ehImpar(matriz[i][j])) {
                    valido = 0;
                    printf("Linhas impares devem conter apenas numeros impares. Reinicie a linha %d.\n", i + 1);
                    break;
                }
            }

            if (i % 2 == 0 && !somaEhPar(matriz[i], 4)) {
                valido = 0;
                printf("A soma da linha par deve ser par. Reinicie a linha %d.\n", i + 1);
            }
        }
    }

    printf("Matriz preenchida:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
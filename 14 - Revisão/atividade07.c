#include <stdio.h>

int ehUnico(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int vetor[10];
    int numero, contador = 0;

    while (contador < 10) {
        printf("Digite um numero inteiro para a posicao %d: ", contador + 1);
        scanf("%d", &numero);

        if (ehUnico(vetor, contador, numero)) {
            vetor[contador] = numero;
            contador++;
        } else {
            printf("Numero repetido. Digite outro valor.\n");
        }
    }

    printf("Vetor preenchido: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

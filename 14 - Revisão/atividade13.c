#include <stdio.h>

void preencherVetor(int *vetor) {
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int *vetor) {
    printf("Vetor: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int maiorValor(int *vetor) {
    int maior = vetor[0];
    for (int i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int menorValor(int *vetor) {
    int menor = vetor[0];
    for (int i = 1; i < 5; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

int somaValores(int *vetor) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int vetor[5];

    preencherVetor(vetor);
    exibirVetor(vetor);
    printf("Maior valor: %d\n", maiorValor(vetor));
    printf("Menor valor: %d\n", menorValor(vetor));
    printf("Soma dos valores: %d\n", somaValores(vetor));

    return 0;
}
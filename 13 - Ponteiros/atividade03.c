#include <stdio.h>

#define TAMANHO_VETOR 5

void preencherVetor(int vetor[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int vetor[]) {
    printf("Valores do vetor: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void exibirEnderecos(int vetor[]) {
    printf("Enderecos das posicoes do vetor: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%p ", (void*)&vetor[i]);
    }
    printf("\n");
}

int somarVetor(int vetor[]) {
    int soma = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int vetor[TAMANHO_VETOR];

    preencherVetor(vetor);

    exibirVetor(vetor);

    exibirEnderecos(vetor);

    int soma = somarVetor(vetor);
    printf("Soma dos valores do vetor: %d\n", soma);

    return 0;
}

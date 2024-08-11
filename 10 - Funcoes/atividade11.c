#include <stdio.h>

void verificarNumeroPerfeito(int numero) {
    int soma = 0;

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }

    if (soma == numero) {
        printf("%d e um numero perfeito\n", numero);
    } else {
        printf("%d nao e um numero perfeito\n", numero);
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    verificarNumeroPerfeito(numero);

    return 0;
}

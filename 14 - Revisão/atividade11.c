#include <stdio.h>

void verificarPerfeito(int n) {
    int soma = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    if (soma == n) {
        printf("%d e um numero perfeito\n", n);
    } else {
        printf("%d nao e um numero perfeito\n", n);
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    verificarPerfeito(numero);

    return 0;
}


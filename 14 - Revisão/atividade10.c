#include <stdio.h>

int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O fatorial de %d e %d\n", numero, calcularFatorial(numero));

    return 0;
}

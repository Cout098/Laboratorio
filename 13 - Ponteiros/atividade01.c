#include <stdio.h>

int main() {
    int numero;
    int *apontador;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    // a) Exiba o endereço do número
    printf("Endereco do numero: %p\n", (void*)&numero);

    // b) Exiba o valor do número
    printf("Valor do numero: %d\n", numero);

    // c) Crie um apontador que aponte para o número
    apontador = &numero;

    // d) Exiba o conteúdo do apontador
    printf("Conteudo do apontador: %p\n", (void*)apontador);

    // e) Exiba o valor para o qual o apontador aponta
    printf("Valor para o qual o apontador aponta: %d\n", *apontador);

    // f) Exiba o endereço do apontador
    printf("Endereco do apontador: %p\n", (void*)&apontador);

    return 0;
}

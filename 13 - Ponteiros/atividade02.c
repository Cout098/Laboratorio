#include <stdio.h>

// FuncaoA troca o valor da variável passada por valor
void funcaoA(int var) {
    var = 10;
    printf("Valor da variavel na funcaoA: %d\n", var);
}

// FuncaoB troca o valor da variável passada por referência
void funcaoB(int *var) {
    *var = 20;
    printf("Valor da variavel na funcaoB: %d\n", *var);
}

int main() {
    int variavel = 5;

    printf("Valor inicial da variavel no main: %d\n", variavel);

    // Passa a variável por valor
    funcaoA(variavel);
    printf("Valor da variavel no main apos funcaoA: %d\n", variavel);

    // Passa a variável por referência
    funcaoB(&variavel);
    printf("Valor da variavel no main apos funcaoB: %d\n", variavel);

    // Comentário: Apenas a função que recebe a variável por referência (funcaoB) consegue alterar o valor original da variável no main.

    return 0;
}

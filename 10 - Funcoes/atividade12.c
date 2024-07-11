#include <stdio.h>

void converterIdade(int dias) {
    int anos = dias / 365;
    dias %= 365;
    int meses = dias / 30;
    dias %= 30;

    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
}

int main() {
    int dias;
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    converterIdade(dias);

    return 0;
}

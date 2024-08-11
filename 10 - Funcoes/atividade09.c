#include <stdio.h>

char obterConceito(float nota) {
    if (nota >= 0 && nota < 50) {
        return 'D';
    } else if (nota >= 50 && nota < 70) {
        return 'C';
    } else if (nota >= 70 && nota < 90) {
        return 'B';
    } else if (nota >= 90 && nota <= 100) {
        return 'A';
    } else {
        return 'I'; // Nota inválida
    }
}

int main() {
    float nota;
    printf("Digite o somatorio de notas do aluno: ");
    scanf("%f", &nota);

    char conceito = obterConceito(nota);
    if (conceito != 'I') {
        printf("Conceito: %c\n", conceito);
    } else {
        printf("Nota invalida\n");
    }

    return 0;
}

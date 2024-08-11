#include <stdio.h>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calcularMMC(int a, int b) {
    return (a * b) / calcularMDC(a, b);
}

int calcularMDCdeTres(int a, int b, int c) {
    return calcularMDC(calcularMDC(a, b), c);
}

int calcularMMCdeTres(int a, int b, int c) {
    return calcularMMC(calcularMMC(a, b), c);
}

int main() {
    int numero1, numero2, numero3;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    int mdc = calcularMDCdeTres(numero1, numero2, numero3);
    printf("O MDC dos numeros %d, %d e %d e: %d\n", numero1, numero2, numero3, mdc);

    int mmc = calcularMMCdeTres(numero1, numero2, numero3);
    printf("O MMC dos numeros %d, %d e %d e: %d\n", numero1, numero2, numero3, mmc);

    return 0;
}

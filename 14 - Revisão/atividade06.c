#include <stdio.h>

void crescente(int comeco, int fim) {
    for (int i = comeco; i <= fim; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void descrescente(int comeco, int fim) {
    for (int i = fim; i >= comeco; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Numeros em ordem crescente:\n");
    crescente(num1, num2);

    printf("Numeros em ordem decrescente:\n");
    descrescente(num1, num2);

    return 0;
}
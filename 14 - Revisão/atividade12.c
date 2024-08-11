#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float peso;
} Animal;

int main() {
    Animal animais[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite os dados do animal %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", animais[i].nome);
        printf("Idade: ");
        scanf("%d", &animais[i].idade);
        printf("Peso: ");
        scanf("%f", &animais[i].peso);
    }

    printf("\nDados cadastrados:\n");
    for (int i = 0; i < 2; i++) {
        printf("Animal %d\n", i + 1);
        printf("Nome: %s\n", animais[i].nome);
        printf("Idade: %d\n", animais[i].idade);
        printf("Peso: %.2f\n", animais[i].peso);
        printf("\n");
    }

    return 0;
}

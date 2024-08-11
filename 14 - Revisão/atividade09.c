#include <stdio.h>
#include <string.h>

void menu(char str1[], char str2[]) {
    int escolha;
    do {
        printf("\nMenu:\n");
        printf("1. Quantidade de caracteres de cada string\n");
        printf("2. Exibir a string com mais caracteres primeiro\n");
        printf("3. Exibir as strings em ordem alfabetica\n");
        printf("4. As duas strings sao iguais?\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("String 1 tem %lu caracteres\n", strlen(str1));
                printf("String 2 tem %lu caracteres\n", strlen(str2));
                break;
            case 2:
                if (strlen(str1) > strlen(str2)) {
                    printf("%s\n%s\n", str1, str2);
                } else {
                    printf("%s\n%s\n", str2, str1);
                }
                break;
            case 3:
                if (strcmp(str1, str2) < 0) {
                    printf("%s\n%s\n", str1, str2);
                } else {
                    printf("%s\n%s\n", str2, str1);
                }
                break;
            case 4:
                if (strcmp(str1, str2) == 0) {
                    printf("As duas strings sao iguais\n");
                } else {
                    printf("As duas strings sao diferentes\n");
                }
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while (escolha != 5);
}

int main() {
    char str1[51], str2[51];
    printf("Digite a primeira string (ate 50 caracteres): ");
    fgets(str1, 51, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Digite a segunda string (ate 50 caracteres): ");
    fgets(str2, 51, stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    menu(str1, str2);

    return 0;
}

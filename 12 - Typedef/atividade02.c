#include <stdio.h>
#include <string.h>

#define MAX_CONTAS 50

typedef struct {
    int codigo;
    char fornecedor[50];
    float valor;
    int mes;
    int ano;
} Conta;

void preencherConta(Conta* conta) {
    printf("Digite o codigo: ");
    scanf("%d", &conta->codigo);
    printf("Digite o fornecedor: ");
    scanf("%s", conta->fornecedor);
    printf("Digite o valor: ");
    scanf("%f", &conta->valor);
    printf("Digite o mes (1 a 12): ");
    scanf("%d", &conta->mes);
    printf("Digite o ano: ");
    scanf("%d", &conta->ano);
}

void exibirTotais(Conta contas[], int qtd) {
    float total = 0;
    float totalPorMes[12] = {0};

    for (int i = 0; i < qtd; i++) {
        total += contas[i].valor;
        totalPorMes[contas[i].mes - 1] += contas[i].valor;
    }

    printf("Total das contas cadastradas: %.2f\n", total);

    for (int i = 0; i < 12; i++) {
        printf("Total de contas para o mes %d: %.2f\n", i + 1, totalPorMes[i]);
    }

    printf("Quantidade de contas cadastradas: %d\n", qtd);
}

int main() {
    Conta contas[MAX_CONTAS];
    int qtd = 0;
    char continuar;

    do {
        if (qtd >= MAX_CONTAS) {
            printf("Numero maximo de contas atingido.\n");
            break;
        }

        preencherConta(&contas[qtd]);
        qtd++;

        printf("Deseja cadastrar outra conta? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    exibirTotais(contas, qtd);

    return 0;
}

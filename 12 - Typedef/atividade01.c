#include <stdio.h>

#define MAX_EMPRESAS 4

typedef struct {
    char nomeFantasia[100];
    char razaoSocial[100];
    char CNPJ[20];
} Empresa;

void cadastrarEmpresa(Empresa* empresa) {
    printf("Digite o nome fantasia: ");
    scanf(" %[^\n]", empresa->nomeFantasia);
    printf("Digite a razao social: ");
    scanf(" %[^\n]", empresa->razaoSocial);
    printf("Digite o CNPJ: ");
    scanf(" %[^\n]", empresa->CNPJ);
}

void exibirEmpresas(Empresa empresas[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Empresa %d:\n", i + 1);
        printf("  Nome Fantasia: %s\n", empresas[i].nomeFantasia);
        printf("  Razao Social: %s\n", empresas[i].razaoSocial);
        printf("  CNPJ: %s\n", empresas[i].CNPJ);
        printf("\n");
    }
}

int main() {
    Empresa empresas[MAX_EMPRESAS];
    int qtd = 0;
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Cadastrar empresa\n");
        printf("2. Exibir empresas\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (qtd >= MAX_EMPRESAS) {
                    printf("Numero maximo de empresas atingido.\n");
                } else {
                    cadastrarEmpresa(&empresas[qtd]);
                    qtd++;
                }
                break;
            case 2:
                exibirEmpresas(empresas, qtd);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}

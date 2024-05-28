/*03 - Crie um programa capaz de permitir o cadastro dos 11 veículos. Ao final, pergunte ao
usuário qual veículo deseja visualizar e exiba todas as informações referentes ao veículo
escolhido. */

#include <stdio.h>
#include <stdlib.h>
#define tam 11 //Definir para que possa fazer alteraçoes de forma mais simples.
#define UNUSED(x) (void)(x)//Solucão para alertas do gcc de unused.

struct tp_veiculo
{
    int anoFabricacao;
    int anoModelo;
    float preco;
    char fabricante[20];
    char modelo[20];
    float potencia;
    char placa[10];
    char cor[10];

}veiculo[tam];

void preencherCadastro(struct tp_veiculo veiculo[tam]){
    for (int i = 0; i < tam; i++)
    {
        printf("\n------------CADASTRO DE VEICULO-------------\n");
        printf("----------[%d] - VEICULO----------\n", i+1);
        printf("FABRICANTE..: ");
        gets(veiculo[i].fabricante);

        printf("MODELO......: ");
        gets(veiculo[i].modelo);

        printf("COR.........: ");
        gets(veiculo[i].cor);

        printf("ANO FAB.....: ");
        scanf("%d", &veiculo[i].anoFabricacao);

        printf("ANO MOD.....: ");
        scanf("%d", &veiculo[i].anoModelo);
    
        printf("POTENCIA....: ");
        scanf("%f", &veiculo[i].potencia);
        

        printf("PRECO.......: ");
        scanf("%f", &veiculo[i].preco);
        scanf("%*c");

        printf("PLACA.......: ");
        gets(veiculo[i].placa);
    }
    
}

int menuBusca(struct tp_veiculo vetor[]){
    int opc;

    printf("---------------MENU DE BUSCA----------------\n");
    printf("--------DIGITE O NUMERO EQUIVALENTE--------\n");
    for (int i = 0; i < tam; i++)
    {
        printf("[%d] - %s - ANO MOD: %d\n", i + 1, veiculo[i].modelo, veiculo[i].anoModelo);
    }
    scanf("%d", &opc);

    return opc;
}

void buscarCadastro(int a, struct tp_veiculo vetor[]){
    if(a >= 1 && a <= tam) //Poderia usar o switch case para comparar as variaveis, mas assim eu economizaria linhas de código
    {   
        a = a - 1;//Lembrando que estou trabalhando com o Vetor tenho que usar a contagem em 0

        printf("\n------------VEICULO ENCONTRADO--------------\n");
        printf("------------CADASTRO DE VEICULO-------------\n");
        printf("FABRICANTE..: %s\n", veiculo[a].fabricante);
        printf("MODELO......: %s\n", veiculo[a].modelo);
        printf("COR.........: %s\n", veiculo[a].cor);
        printf("ANO FAB.....: %d\n", veiculo[a].anoFabricacao);
        printf("ANO MOD.....: %d\n", veiculo[a].anoModelo);
        printf("POTENCIA....: %.2f\n", veiculo[a].potencia);
        printf("PRECO.......: %.2f\n", veiculo[a].preco);
        printf("PLACA.......: %s\n", veiculo[a].placa);
    }
    else
    {
        printf("\n---------VEICULO NAO FOI ENCONTRADO---------\n");
        printf("Confira o numero digitado e tente novamente\n");
    }
    
}

int main(){
    int opc;

    preencherCadastro(veiculo);
    opc = menuBusca(veiculo);
    buscarCadastro(opc, veiculo);

    return 0;
}
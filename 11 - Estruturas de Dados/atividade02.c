/* 02 – Crie uma estrutura para tratar de dados de pessoas. Crie também um vetor de cinco
pessoas, exiba aquela entre as cinco que está com o menor índice de massa corporal. */

#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)//Solucão para alertas do gcc de unused.

struct tp_corporal
{
    float peso;
    float altura;
};

struct tp_data_nascimento
{
    int dia;
    int mes;
    int ano;
};

struct cadastro_pessoa{
    char nome[40];
    char cpf[12];
    struct tp_data_nascimento data_nascimento;
    struct tp_corporal indice_corporal;

}pessoa[5];

void preencherCadastro(struct cadastro_pessoa pessoa[5]){
    for (int i = 0; i < 5; i++)
    {   
        printf("---------CADASTRO CIDADAO-----------\n");
        printf("---------DADOS CIDADAO [%d]----------\n\n", i+1);
        printf("NOME..........: ");
        fflush(stdin);
        gets(pessoa[i].nome);

        printf("CPF...........: ");
        fflush(stdin);
        gets(pessoa[i].cpf);

        //Data de Nascimento
        printf("DATA NASC\n");
        printf("DIA...........: ");
        scanf("%d", &pessoa[i].data_nascimento.dia);
        printf("MES...........: ");
        scanf("%d", &pessoa[i].data_nascimento.mes);
        printf("ANO...........: ");
        scanf("%d", &pessoa[i].data_nascimento.ano);

        //Dados para IMC
        printf("\n---------ANTROPOMETRIA--------------\n");
        printf("PESO (em KG)..: ");
        scanf("%f", &pessoa[i].indice_corporal.peso);
        printf("ALTURA (em M).: ");
        scanf("%f", &pessoa[i].indice_corporal.altura);

        system("cls");

    }
}

void calcularImc(struct cadastro_pessoa pessoa[5], float vetor[5]){
    
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = pessoa[i].indice_corporal.peso/(pessoa[i].indice_corporal.altura * pessoa[i].indice_corporal.altura);
    }
}

int buscarMenor(float vetor[5]){
    int identMenor;
    float imcMenor = vetor[0];

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] <= imcMenor){
            identMenor = i;
        }
    }

    return identMenor;
}

int main(){
    float imcp[5];
    int ind;

    preencherCadastro(pessoa);
    calcularImc(pessoa, imcp);

    ind = buscarMenor(imcp);

    printf("\n\nO individuo com o menor IMC e: %s", pessoa[ind].nome);
    
    return 0;
}
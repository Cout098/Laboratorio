/* 01- Crie um programa capaz de definir uma estrutura de dados para armazenar
informações de um animal qualquer, contendo no mínimo cinco informações sobre o
animal. Peça ao usuário para preencher os dados, ao final exiba-os.*/

#include<stdio.h>
#include<stdlib.h>
#define UNUSED(x) (void)(x)//Solucão para alertas do gcc de unused.

struct tp_tutor
{
    char nome[40];
    int telefone;
};

typedef struct
{
    char nome[20];
    char especie[20];
    char raca[20];
    int idade;
    struct tp_tutor tutor;
} tp_animal;

tp_animal preencherCadastro(){
    tp_animal a;
    printf("\n------ CADASTRE O PET -------\n");
    printf("Nome.....: ");
    fgets(a.nome, 20, stdin);

    printf("Raca.....: ");
    fgets(a.raca, 20, stdin);

    printf("Especie..: ");
    fgets(a.especie, 20, stdin);

    printf("Idade....: ");
    scanf("%d", &a.idade);

    /*Uso essa leitura de caractere sem salvar para limpar o buffer
    apos pesquisa vi que fflush(stdin) n é aconselhada.*/
    
    scanf("%*c");

    printf("Tutor....: ");
    fgets(a.tutor.nome, 20, stdin);

    printf("Telefone.: ");
    scanf("%d", &a.tutor.telefone);

    return a;
}

void imprimirCadastro(tp_animal a){
    printf("\n-------------PET-------------\n");
    printf("Nome.....: %s", a.nome);
    printf("Raca.....: %s", a.raca);
    printf("Especie..: %s", a.especie);
    printf("Idade....: %d\n", a.idade);
    printf("Tutor....: %s", a.tutor.nome);
    printf("Telefone.: %d", a.tutor.telefone);
}

int main(){
    tp_animal animal;

    printf("--- PETSHOP MUNDO ANIMAL ----");

    animal = preencherCadastro();
    imprimirCadastro(animal);

    return 0;
}


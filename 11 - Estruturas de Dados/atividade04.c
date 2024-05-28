/* 04 - Crie estruturas, defina tipos, preencha e exiba os dados para os seguintes itens:
a) Carros b) Aviões
c) Répteis d) Eletrodomésticos */

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char fabricante[20];
    char modelo[20];
    char cor[20];
    int ano;
} carros;

typedef struct
{   
    char fabricante[20];
    char modelo[20];
    char empressa[20];
    int capacidade;
} avioes;

typedef struct 
{
    char raca[20];
    char especie[20];
    char habitat[20];
    int expectativa_vida;
} reptil;

typedef struct 
{
    char marca[20];
    char tipo[20];
    char cor[20];
    int voltagem;
} eletrodomestico;

void exibirCarro(carros carro){
    printf("\nCarro\nFabricante: %s, Modelo: %s, Car: %s, Ano: %d.\n", carro.fabricante, carro.modelo, carro.cor, carro.ano);
}

void exibirAviao(avioes aviao){
    printf("\nAviao\nFabricante: %s, Modelo: %s, Empresa: %s, Capacidade: %d.\n", aviao.fabricante, aviao.modelo, aviao.empressa, aviao.capacidade);
}

void exibirRepitil(reptil reptil){
    printf("\nReptil\nRaca: %s, Especie: %s, Habitat: %s, Expectatica: %d anos.\n", reptil.raca, reptil.especie, reptil.habitat, reptil.expectativa_vida);
}

void exibirEletrodomestico(eletrodomestico eletro){
    printf("\nEletrodomestico\nMarca: %s, Tipo: %s, Cor: %s, Voltagem: %d v.\n", eletro.marca, eletro.tipo, eletro.cor, eletro.voltagem);
}

int main(){
    carros carro1;
    avioes aviao1;
    reptil reptil1;
    eletrodomestico eletro1;

    //carros
    strcpy(carro1.fabricante, "Wolksvagen");
    strcpy(carro1.modelo, "Gol");
    strcpy(carro1.cor, "Preto");
    carro1.ano = 2002;
    
    //aviao
    strcpy(aviao1.fabricante, "Boeing");
    strcpy(aviao1.modelo, "A370");
    strcpy(aviao1.empressa, "Gol Airlines");
    aviao1.capacidade = 350;

    //reptil
    strcpy(reptil1.raca, "Serpente");
    strcpy(reptil1.especie, "Micrurus corallinus");
    strcpy(reptil1.habitat, "Mata Atlantica");
    reptil1.expectativa_vida = 18;

    //eletrodomestico
    strcpy(eletro1.tipo, "Geladeira");
    strcpy(eletro1.marca, "Brastemp");
    strcpy(eletro1.cor, "Verde");
    eletro1.voltagem = 220;

    exibirCarro(carro1);
    exibirAviao(aviao1);
    exibirRepitil(reptil1);
    exibirEletrodomestico(eletro1);


    return 0;

}


#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    char sobrenome[30];
    char nomeCompleto[60];

    printf("Digite seu nome: ");
    scanf("%s",nome);
    printf("Digite seu sobrenome: ");
    scanf("%s",sobrenome);

    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, sobrenome);
    
    printf("O nome completo é:", nomeCompleto);

    return 0;
}
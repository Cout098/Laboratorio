#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//converter minusculo
void minusculo(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0'){
        str2[i] = tolower(str1[i]);
        i++;
    }
    str2[i]='\0';
}

int main(){
    char correto[10] = {"masculino"};
    char genero[10];
    char str[10];
    int idade;

    printf("Preencha com masculino ou feminino\n");
    printf("Qual o genero: ");
    gets(genero);
    minusculo(genero, str);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(strcmp(str,correto)==0 && idade ==18){
        printf("Voce precisa se alistar no exercito.");
    } else {
        printf(".");
    }

    return 0;
}
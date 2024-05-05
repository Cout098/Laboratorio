#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char string[60];
    char busca;
    int i, contador = 0;

    printf("Digite um conjunto de caracteres:\n");
    gets (string);
    printf("Digite o caractere que quer buscar:\n");
    scanf("%c", &busca);

    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == busca){
            contador++;
        }
    }

    printf("O caractere %c aparece %d na string digitada.\n", busca, contador);
    
    return 0;
}
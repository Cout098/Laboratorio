#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char frase[100];

    printf("Digite uma frase:\n");

    scanf("%[^\n]", frase);

    printf("%s", frase);
    
    return 0;
}
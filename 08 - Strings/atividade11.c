#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char texto[10001];
    int i = 0, espaco = 0, vogal_u = 0, vogal_a = 0, numeros = 0;

    printf("Digite o texto: \n");
    fgets(texto, sizeof(texto), stdin);

    while (texto[i] != '\0'){
        if(texto[i] == ' '){
            espaco++;
        } else if(texto[i] == 'u'){
            vogal_u++;
        } else if(texto[i] == 'a'){
            vogal_a++;
        } else if(texto[i] >='0' && texto[i] <= '9'){
            numeros++;
        }
        i++;
    }

    //Respostas das questoes
    printf("Foi digitado %d espaços no texto.\n", espaco);
    printf("Foi digitado %d vogais a no texto.\n", vogal_a);
    printf("Foi digitado %d vogais u no texto.\n", vogal_u);
    printf("Foi digitado %d números no texto.\n", numeros);

    return 0;
}
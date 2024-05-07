#include <stdio.h>
#include <stdlib.h>



int main(){
    char gabarito[10] = {'a','a','a','a','a','a','a','a','a','a'};
    char resposta[10];
    int acertos = 0, erros = 0, i;

    printf("Digite resposta que foi marcada na prova.\n");
    for (i = 0; i < 10; i++){
        printf("Questão %d: ", i+1);
        scanf(" %c", &resposta[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (resposta[i]==gabarito[i]){
           printf("Acertou a questão %d\n", i+1);
           acertos++;
        }
        else {
            printf("Errou a questão %d\n", i+1);
            erros++;
        }
    }
    
    printf("Acertou %d porcento da prova\n", acertos * 10);
    printf("Errou %d porcento da prova\n", erros * 10);

    return 0;
}
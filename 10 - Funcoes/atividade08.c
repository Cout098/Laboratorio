#include <stdio.h>

void converterSegundos(int segundos){
    float minutos, horas, dias;

    dias = segundos / 86400;
    horas = segundos / 3600;
    minutos = segundos / 60;

    printf("O tempo digitado em dias e: %f \n", dias);    
    printf("O tempo digitado em horas e: %.1f \n", horas);    
    printf("O tempo digitado em minutos e: %.1f \n", minutos);
    printf("O tempo digitado em segundos e: %d \n", segundos);
}

int main(){
    int segundos;

    printf("Digite a quantidade de segundos que voce gostaria de converter: \n");
    scanf("%d", &segundos);

    converterSegundos(segundos);

    return 0;
}
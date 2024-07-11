#include <stdio.h>



int main(){
    int numero, somaPar = 0, somaImpar = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        if (numero % 2 == 0)
        {
            somaPar += numero;
        } else {
            somaImpar += numero;
        }

        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

    printf("A soma dos numeros pares: %d\n", somaPar);
    printf("A soma dos numeros impares: %d\n", somaImpar);
    
    return 0;
}
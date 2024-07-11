#include <stdio.h>

int main(){
    int numero, menorZero = 0, maiorZero = 0, pares = 0, impares = 0, menor = 0, maior = 0, menorPar = 0, maiorPar = 0, menorImpar = 0, maiorImpar = 0;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    while (numero != 0)
    {
        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
        
        if (numero > 0)
        {
            maiorZero++;
        } else
        {
            menorZero++;
        }

        if (numero % 2 == 0)
        {
            pares++;

            if (numero > maiorPar)
            {
                maiorPar = numero;
            }
            if (numero < menorPar)
            {
                menorPar = numero;
            }

        } else {
            impares++;

            if (numero > maiorImpar)
            {
                maiorImpar = numero;
            }
            if (numero < menorImpar)
            {
                menorImpar = numero;
            }
        }
        
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }
    
    printf("Foram maiores que 0: %d numeros\n");
    printf("Foram menores que 0: %d numeros\n");
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    return 0;
}
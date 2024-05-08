#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int desconto(float a){
    int desc = 0;

    desc= a*0.1;

    return desc;
}
int valorPago(float a, float b){
    int valor = 0;

    valor = a - b;

    return valor;
}


int main(){
    char mercadoria[100];
    float valor, desc, valorTotal;

    printf("Digite a mercadoria a ser comprada: ");
    gets(mercadoria);
    printf("Digite o valor do produto: ");
    scanf("%f", &valorTotal);
    desc = desconto(valorTotal);
    valor = valorPago(valorTotal,desc);

    printf("\n\n");
    printf("A mercadoria comprada foi: %s\n", mercadoria);
    printf("O valor total da comprada foi: %.2f\n", valorTotal);
    printf("O valor do desconto foi: %.2f\n", desc);
    printf("O valor final pago foi: %.2f", valor);

    return 0;
}
#include <stdio.h>

int calcularFatorial(int n){
    if(n < 0){
        printf("Nao existe fatorial de numero negativo\n");
        return -1;
    }

    int fatorial = 1;
    for(int i = 1; i <= n; i++){
        fatorial*= i;
    }
    return fatorial;
}

int main(){
    int n, resultado = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    
    resultado = calcularFatorial(n);

    if(resultado != -1){
        printf("O fatorial de %d e: %d", n, resultado);
    }
    
    return 0;
}
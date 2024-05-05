#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    int i, n;

    for(i = 0; i < 10; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &n);

        vetor[i] = n * 10;
    }
     printf("Os numeros digitados foram: ");
    for ( i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}

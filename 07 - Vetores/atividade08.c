#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float vetor[10], n;
    int i;

    for(i = 0; i < 10; i++){
        n = i;
        vetor[i] = n/2;
    }
    
    printf("O vetor completo ficou assim:\n");

    for ( i = 0; i < 10; i++){
        printf("%.2f ", vetor[i]);
    }
    
    return 0;
}

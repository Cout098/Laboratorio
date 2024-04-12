#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i = 2, cont=0;

    printf("Digite um numero:");
    scanf("%d", &n);

    for ( i = 2; i < n; i++)
    {
        if(n%i==0){
            cont++;
        }
    }
    if(cont==0){
        printf("Esse numero e primo\n");
    }
    else
    {
        printf("O numero nao e primo\n");
    }

    return 0;
}
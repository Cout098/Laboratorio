#include <stdio.h>

int calcularMedia(int a, int b, int c, int d){
    float media = (a + b + c + d)/ 4;
    return media;
}

int main(){
    int n1, n2, n3, n4;
    float media = 0;

    printf("Digite os numeros: \n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    media = calcularMedia(n1, n2, n3, n4);

    printf("A media aritmética dos numeros é: %.2f", media);

    return 0;
}
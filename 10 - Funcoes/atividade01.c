#include <stdio.h>

void descMaior( int a, int b, int c);

int main(){
    int n1, n2, n3;

    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    descMaior(n1, n2, n3);

    return 0;
}

void descMaior( int a, int b, int c){
    int maior;

    if(a > b && a > c){
        maior = a;
    } else if(b > a && b > c){
        maior = b;
    } else {
        maior = c;
    }
    printf("O maior é numero digitado foi: %d", maior);
}
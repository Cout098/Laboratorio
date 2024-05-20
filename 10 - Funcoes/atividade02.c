#include <stdio.h>

int descMaior( int a, int b, int c);

int main(){
    int n1, n2, n3, maior;

    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior = descMaior(n1, n2, n3);

    printf("O maior é numero digitado foi: %d", maior);

    return 0;
}

int descMaior( int a, int b, int c){
    int maior;

    if(a > b && a > c){
        maior = a;
    } else if(b > a && b > c){
        maior = b;
    } else {
        maior = c;
    }
    return maior;
}
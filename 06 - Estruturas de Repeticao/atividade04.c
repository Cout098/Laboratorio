#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int i, n;

    printf("Digite um número:");
    scanf("%d",&n);
    printf("Os números entre 0 e o número ditado são:\n");
    for(i=1;i<n;i++){
        printf("%d\n",i);
    }

    return 0;
}
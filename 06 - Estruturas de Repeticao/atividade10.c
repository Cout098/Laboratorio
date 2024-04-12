#include <stdio.h>

int main(){
    int n, cont = 0, nat;

    printf("Digite um numero:\n");
    scanf("%d", &n);
    nat=n;
    while( cont < 10){
        if(nat>n){
            if(nat%2!=0){
                printf("%d\n",nat);
                cont++;
            }
        }
        nat++;
    }
  
    return 0;
}
#include <stdio.h>

int main(){
    int n1, n2, i=0;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    
    if(n1>n2){
        printf("Os numeros impares entre %d e %d sao:\n", n2, n1);
        for (i = n2; i < n1; i++)
        {
            if(i%2 != 0 && i > n2){
            printf("%d\n", i);
            }
        }
        
    }
    else{
        printf("Os numeros impares entre %d e %d sao:\n", n1, n2);
        for ( i = n1; i < n2; i++)
        {
            if(i%2 != 0 && i > n1){
            printf("%d\n", i);
            }
        }
        
    }
    return 0;
}
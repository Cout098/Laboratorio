#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char str1[20];
    char str2[20];

    printf("Digite uma palavra: ");
    scanf("%s",str1);
    printf("Digite uma palavra: ");
    scanf("%s",str2);

    if(strcmp(str1,str2)==0){
        printf("As palavras são iguais.");
    } else{
        printf("As palavras não são iguais.");
    }

    return 0;

}
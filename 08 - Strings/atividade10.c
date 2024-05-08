#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    
    char palavra1[50];
    char palavra2[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (strcmp(palavra1, palavra2) < 0) {
        printf("Em ordem alfabética: %s, %s\n", palavra1, palavra2);
    } else {
        printf("Em ordem alfabética: %s, %s\n", palavra2, palavra1);
    }

    return 0;
}
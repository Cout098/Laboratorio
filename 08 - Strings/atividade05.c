#include <stdio.h>
#include <string.h>

int main(){
    char str[60];
    
    printf("Digite a palavra: ");
    gets(str);

    printf("Caracteres da String:\n");

    for (int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }
    
    return 0;
}
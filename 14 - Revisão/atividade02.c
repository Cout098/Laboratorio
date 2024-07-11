#include <stdio.h>


void preencherNotas(float notasTrabalho[]){
    int indiceNotas;

    for (indiceNotas = 0; indiceNotas < 5; indiceNotas++)
    {
        printf("Digite a nota do %d trabalho: ", indiceNotas + 1);
        scanf("%f", &notasTrabalho[indiceNotas]);
    }
}

void comparandoNota(float notasTrabalho[]){
    int indiceNotas;
    float notaTotal = 0;

    for (indiceNotas = 0; indiceNotas < 5; indiceNotas++)
    {
       notaTotal += notasTrabalho[indiceNotas];
    }

    if (notaTotal < 50)
    {
        printf("\nVoce esta reprovada!\n");

    } else if (notaTotal >= 50 && notaTotal <70)
    {
        printf("\nVoce esta de recuperacao!\n");

    } else 
    {
        printf("\nVoce esta aprovada!\n");
    }
}

int main(){
    float notasTrabalho[5];

    preencherNotas(notasTrabalho);

    comparandoNota(notasTrabalho);

    return 0;
}
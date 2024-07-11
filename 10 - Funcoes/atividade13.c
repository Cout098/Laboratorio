#include <stdio.h>

void converterTempo(int segundos) {
    int horas = segundos / 3600;
    segundos %= 3600;
    int minutos = segundos / 60;
    segundos %= 60;

    printf("Tempo: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
}

int main() {
    int segundos;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    converterTempo(segundos);

    return 0;
}

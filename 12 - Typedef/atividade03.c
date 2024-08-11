#include <stdio.h>
#include <string.h>

#define MAX_ALBUNS 5
#define MAX_MUSICAS 25

typedef struct {
    char nome[50];
    float duracao;
    char compositores[100];
} Musica;

typedef struct {
    char nomeArtista[50];
    char genero[20];
    Musica musicas[MAX_MUSICAS];
    int numMusicas;
} Album;

void cadastrarAlbum(Album* album) {
    printf("Digite o nome do artista: ");
    scanf("%s", album->nomeArtista);
    printf("Digite o genero: ");
    scanf("%s", album->genero);
    printf("Digite o numero de musicas (max %d): ", MAX_MUSICAS);
    scanf("%d", &album->numMusicas);

    for (int i = 0; i < album->numMusicas; i++) {
        printf("Digite o nome da musica %d: ", i + 1);
        scanf("%s", album->musicas[i].nome);
        printf("Digite a duracao da musica %d: ", i + 1);
        scanf("%f", &album->musicas[i].duracao);
        printf("Digite os compositores da musica %d: ", i + 1);
        scanf("%s", album->musicas[i].compositores);
    }
}

void detalharAlbum(Album albuns[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Artista: %s\n", albuns[i].nomeArtista);
        printf("Genero: %s\n", albuns[i].genero);
        printf("Numero de musicas: %d\n", albuns[i].numMusicas);
        float duracaoTotal = 0;

        for (int j = 0; j < albuns[i].numMusicas; j++) {
            printf("  Musica %d: %s\n", j + 1, albuns[i].musicas[j].nome);
            printf("    Duracao: %.2f\n", albuns[i].musicas[j].duracao);
            printf("    Compositores: %s\n", albuns[i].musicas[j].compositores);
            duracaoTotal += albuns[i].musicas[j].duracao;
        }
        printf("Duracao total do album: %.2f\n\n", duracaoTotal);
    }
}

int main() {
    Album albuns[MAX_ALBUNS];
    int qtd = 0;
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Cadastrar album\n");
        printf("2. Detalhar albuns\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (qtd >= MAX_ALBUNS) {
                    printf("Numero maximo de albuns atingido.\n");
                } else {
                    cadastrarAlbum(&albuns[qtd]);
                    qtd++;
                }
                break;
            case 2:
                detalharAlbum(albuns, qtd);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}

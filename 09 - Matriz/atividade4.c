#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(){
    float matrizAnual[12][4];
    float somaSemanal = 0, somaMensal = 0, somaAnual = 0, vendasDia;
    int i, j, k, escolha;

    printf("Gostaria de adicionar as vendas por dia ou mes?\n");
    printf("[1] - DIA\n");
    printf("[2] - SEMANA\n"); 
    scanf("%d", &escolha);

    system("cls");
     
    if (escolha == 1){
        for (i = 0; i < 12; i++){
            somaMensal = 0;
            printf("Mes[%d]\n", i+1);
            for (j = 0; j < 4; j++){
                somaSemanal = 0;
                printf("Semana[%d]\n", j+1);

                for (k = 0; k < 5; k++){
                    printf("Vendas do dia[%d]: ", k+1);
                    scanf("%f", &vendasDia);
                    somaSemanal += vendasDia;
                }
                system("cls");

                matrizAnual[i][j] = somaSemanal;
                somaMensal += somaSemanal;
                printf("A venda da Semana[%d] foi de: %.2f\n", j+1, somaSemanal);
            }
            somaAnual += somaMensal;
            printf("A venda do Mes[%d] foi de: %.2f\n", i+1, somaMensal);     
        }
        printf("A venda anual foi de: %2.f\n", somaAnual);

    } else if (escolha == 2){
        for (i = 0; i < 12; i++){
            somaMensal = 0;
            printf("Mes[%d]\n", i+1);

            for(j = 0; j < 4; j++){
                printf("Semana[%d]: ", j+1);
                scanf("%f", &matrizAnual[i][j]);               
                somaMensal += matrizAnual[i][j];
            }
            somaAnual += somaMensal;
            printf("A venda do Mes[%d] foi de: %.2f\n", i+1, somaMensal);
        }
        printf("A venda anual foi de: %.2f\n", somaAnual);
    } else {
        printf("Opcao invalida.");
    }
    
    return 0;
}

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int prod, i;
  float valor=0, total=0;

  for(int i = 0; i < 3; i++){
    printf("Digite o código do produto: ");
    scanf("%d", &prod);

    switch(prod){
      case 1001:
        valor = 3.5;
      break;
      case 1002:
        valor = 1.5;
      break;
      case 1003:
        valor = 1.5;
      break;
      case 1004:
        valor = 1.25;
      break;
      case 1005:
        valor = 6.8;
      break;
      case 1006:
        valor = 2.99;
      break;
      default:
        printf("Código inválido.\n");
    }
    total+=valor;
  }
  
  
  printf("O valor total é: %.2f", total);
  return 0;
}
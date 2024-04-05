#include <stdio.h>
#include <stdlib.h>

int main(){
	float sf, v, st;
	
	printf("Digite o valor do salario fixo:\n");
	scanf("%f",&sf);
	printf("Digite o valor total da vendas:\n");
	scanf("%f",&v);
	//poderia ter declarado uma variavel comissao = vendas * 0.07
	//assim a conta ficaria st=sf+c
	
	st=sf+(v*0.07);
	
	printf("O salario liquido e: %.2f\n", st);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	float cc, cf, pd, ip;
	
	printf("Digite o custo de fabrica do veiculo:\n");
	scanf("%f",&cf);
	
	//cc=cf+(cf*0.57);
	
	pd=cf*0.12;
	ip=cf*0.45;
	
	cc=cf+pd+ip;
	
	printf("\nO custo ao consumidor sera de %.2f reais", cc);
	
	return 0;
}

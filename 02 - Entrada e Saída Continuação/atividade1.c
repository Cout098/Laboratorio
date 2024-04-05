#include <stdio.h>
#include <stdlib.h>

int main(){
	float vc, v1, v2;
	
	printf("Digite o valor da compra\n");
	scanf("%f",&vc);
	
	v1=vc-(vc*0.1);
	v2=vc-(vc*0.15);
	
	printf("\nO valor com 10 por cento de desconto e: %.2f", v1);
	printf("\nO valor com 15 por cento de desconto e: %.2f", v2);
	
	return 0;
}

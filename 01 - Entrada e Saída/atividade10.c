#include <stdio.h>
#include <stdlib.h>

int main(){
	float s, c;
	
	printf("Digite o salario recebido:\n");
	scanf("%f",&s);
	
	c=s*0.1;
	
	printf("A comissao e: %.2f\n", c);
	
	return 0;
}

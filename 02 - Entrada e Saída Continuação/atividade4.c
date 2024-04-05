#include <stdio.h>
#include <math.h>

int main(){
	float co, ca, q, h;
	
	printf("Digite o valor cateto oposto:\n");
	scanf("%f",&co);
	printf("Digite o valor do cateto adjacente:\n");
	scanf("%f",&ca);
	
	q= pow(co,2)+pow(ca,2);
	
	h= sqrt(q);
	
	printf("A hipotenusa e: %.2f", h);
	
	return 0;
}

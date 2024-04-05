#include <stdio.h>
#include <stdlib.h>

int main(){
	float b, h, a;
	
	printf("Digite a medida da base em cm:\n");
	scanf("%f",&b);
	printf("Digite a medida da altura em cm:\n");
	scanf("%f",&h);
	
	a=(b*h)/2;
	
	printf("A area do triangulo e: %.2f cm ao quadrado\n", a);
	
	return 0;
}

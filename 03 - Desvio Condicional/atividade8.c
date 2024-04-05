#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, p, i;
	
	printf("Digite sua altura em centimetros:\n");
	scanf("%f",&a);
	printf("Digite seu peso em quilos:\n");
	scanf("%f",&p);
	
	a=a/100;
	
	i=p/(a*a);
	
	printf("Seu IMC e: %.2f\n", i);
	
	if(i<15){
		printf("Extremamente abaixo do peso");
	} else if(i>=15 && i<16){
		printf("Gravemente abaixo do peso");
	} else if(i>=16 && i<18.5){
		printf("Abaixo do peso ideal");
	} else if(i>=18.5 && i<25){
		printf("Faixa do peso ideal");
	} else if(i>=25 && i<30){
		printf("Sobrepeso");
	} else if(i>=30 && i<35){
		printf("Obesidade grau I");
	} else if(i>=35 && i<40){
		printf("Obesidade grau II");
	} else {
		printf("Obesidade grau III");
	}
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	float c1, l1, c2, l2, c3, l3, c4, l4, at; 
	//float a1, a2, a3, a4;
	
	printf("AS MEDIDAS DEVERAO SER DADAS EM METROS\n");
	printf("\nDigite a largura e o comprimento do 1 comodo:\n");
	scanf("%f %f",&c1,&l1);
	printf("Digite a largura e o comprimento do 2 comodo:\n");
	scanf("%f %f",&c2,&l2);
	printf("Digite a largura e o comprimento do 3 comodo:\n");
	scanf("%f %f",&c3,&l3);
	printf("Digite a largura e o comprimento do 4 comodo:\n");
	scanf("%f %f",&c4,&l4);
	
	//a1=c1*l1;
	//a2=c2*l2;
	//a3=c3*l3;
	//a4=c4*l4;
	
	//at=a1+a2+a3+a4; 
	
	
	at=(c1*l1)+(c2*l2)+(c3*l3)+(c4*l4);
	
	printf("A area total da casa e: %.2f m2 \n", at);
	
	return 0;
}

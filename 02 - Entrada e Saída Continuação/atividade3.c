#include <stdio.h>
#include <stdlib.h>

int main(){
	float pt, pg;
	
	printf("Digite o peso do bolo em quilograma:\n");
	scanf("%f",&pt);
	
	pg=pt*1000;
	
	printf("\nSera preciso %.2f gramas de acucar\n", pg*0.10);
	printf("\nSera preciso %.2f gramas de farinha\n", pg*0.30);
	printf("\nSera preciso %.2f gramas de margarina\n", pg*0.10);
	printf("\nSera preciso %.2f gramas de ovos\n", pg*0.20);
	printf("\nSera preciso %.2f gramas de leite\n", pg*0.15);
	printf("\nSera preciso %.2f gramas de leite condesado\n", pg*0.10);
	printf("\nSera preciso %.2f gramas de fermento\n", pg*0.05);
	

	return 0;
}

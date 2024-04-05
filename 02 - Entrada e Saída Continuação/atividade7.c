#include <stdio.h>
#include <stdlib.h>

int main(){
	float sm, dm, vtp, vmp, m, a;
	
	printf("Digite o valor do salario:\n");
	scanf("%f",&sm);
	printf("Digite o valor das despesas:\n");
	scanf("%f",&dm);
	printf("Digite o valor total a ser poupado:\n");
	scanf("%f",&vtp);
	
	vmp=sm-dm;
	m=vtp/vmp;
	a=m/12;
	
	printf("\nSera necessario poupar por %.2f anos", a);
	
	return 0;
}

#include <stdio.h>

int main(){
	float sm;
	
	printf("Digite o valor do seu salario:\n");
	scanf("%f",&sm);
	
	if(sm>1903.98 && sm<2826.66){
		printf("A aliquota a ser paga é de 7.5% ");
	} else if(sm>=2826.66){
		printf("A aliquota a ser paga é de 15% ");
	} else if(sm>=2826.66){
		printf("A aliquota a ser paga é de 15% ");
	} else if(sm>=2826.66){
		printf("A aliquota a ser paga é de 22.5% ");
	} else if(sm>4664.68){
		printf("A aliquota a ser paga sera de 27.5% ");
	} else {
		printf("Nao tem aliquota a ser paga");
	}
	
	return 0;
}

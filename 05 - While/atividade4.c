#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, somap=0, somai=0;
	
	printf("Digite um n�mero:\n");
	scanf("%d", &num);
	
	while(num>0){
		
		if(num%2==0){
			somap+=num;
		}else{
			somai+=num;
		}
		
		printf("Digite um n�mero:\n");
		scanf("%d", &num);
	}
	
	printf("A soma dos pares � %d.\n", somap);
	printf("A soma dos impares � %d\n", somai);
	
	return 0;
}

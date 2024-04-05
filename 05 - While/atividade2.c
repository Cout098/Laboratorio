#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, maior=0, menor=0, par=0, impar=0, aux1=0, aux2 ;
	
	printf("Digite uma sequência de números:\n");
	scanf("%d", &num);
	
	while(num!=0){
		
		if(num>0){
			maior++;
		}else{
			menor++;
		}
		
		if(num%2==0){
			par++;
		}else{
			impar++;
		}
		
		if(num>aux1){
			aux1=num;
		}
		
		aux2=num;
		
		if(aux2<num){
			aux2=num;
		}
		
		printf("Digite uma sequência de números:\n");
		scanf("%d", &num);
		
	}
	
	printf("Maiores que 0: %d\n", maior);
	printf("Menores que 0: %d\n", menor);
	printf("%d números são pares.\n", par);
	printf("%d números são impares.\n", impar);
	printf("%d é o maior número digitado.\n", aux1);
	printf("%d é o menor número digitado.\n", aux2);
	
	return 0;
}	

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, maior=0, menor=0, par=0, impar=0, aux1=0, aux2 ;
	
	printf("Digite uma sequ�ncia de n�meros:\n");
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
		
		printf("Digite uma sequ�ncia de n�meros:\n");
		scanf("%d", &num);
		
	}
	
	printf("Maiores que 0: %d\n", maior);
	printf("Menores que 0: %d\n", menor);
	printf("%d n�meros s�o pares.\n", par);
	printf("%d n�meros s�o impares.\n", impar);
	printf("%d � o maior n�mero digitado.\n", aux1);
	printf("%d � o menor n�mero digitado.\n", aux2);
	
	return 0;
}	

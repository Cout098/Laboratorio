#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, aux;
	
	printf("Digite dois numeros:\n");
	scanf("%d %d",&n1,&n2);
	
	aux=n1;
	n1=n2;
	n2=aux;
	
	printf("Os numeros invertidos ficam nessa ordem: \n%d\n%d\n", n1,n2);
	
	return 0;
}

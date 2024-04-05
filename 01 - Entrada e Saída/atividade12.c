#include <stdio.h>
#include <stdlib.h>

int main(){
	int e, b, n, v, pb, pn, pv;
	
	printf("Digite o numero total de eleitores:\n");
	scanf("%d",&e);
	printf("Digite o numero de votos brancos:\n");
	scanf("%d",&b);
	printf("Digite o numero votos nulos:\n");
	scanf("%d",&n);
	printf("Digite o numero votos validos:\n");
	scanf("%d",&v);
	
	pb=(100*b)/e;
	pn=(100*n)/e;
	pv=(100*v)/e;
	
	printf("A porcentagem de votos brancos e: %d por cento", pb);
	printf("\nA porcentagem de votos nulos e: %d por cento", pn);
	printf("\nA porcentagem de votos validos e: %d por cento", pv);
	
	return 0;
}

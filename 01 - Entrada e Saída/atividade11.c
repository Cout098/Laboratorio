#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3, n4, n5, m;
	
	printf("Digite cinco numeros:\n");
	scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
	
	m=(n1+n2+n3+n4+n5)/5;
	
	printf("A media e: %.2f\n", m);
	
	return 0;
}



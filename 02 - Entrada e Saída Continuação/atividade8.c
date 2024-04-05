#include <stdio.h>
#include <stdlib.h>

int main(){
	float cp, m;
	
	printf("Choveu quantas polegas?\n");
	scanf("%f",&cp);

	m=cp*25.4;
	
	printf("\nChoveu %.2f milimetros", m);
	
	return 0;
}

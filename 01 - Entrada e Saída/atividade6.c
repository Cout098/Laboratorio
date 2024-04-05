#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3, n4;
	
	printf("Digite quatro numeros:\n");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	printf("Os numeros na ordem inversa ficam assim:\n%d\n%d\n%d\n%d",n4,n3,n2,n1);
	
	return 0;
}

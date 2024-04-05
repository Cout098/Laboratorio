#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, a, s;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&n1);
	
	a=n1-1;
	s=n1+1;
	
	printf("O antecessor e: %d\n", a);
	printf("O sucessor e: %d\n", s);
	
	return 0;
}

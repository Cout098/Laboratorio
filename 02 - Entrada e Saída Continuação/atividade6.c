#include <stdio.h>
#include <stdlib.h>

int main(){
	int a2, a1, n, s1, s2;
	
	printf("Digite um numero:\n");
	scanf("%d",&n);
	
	a1=n-1;
	a2=a1-1;
	s1=n+1;
	s2=s1+1;
	
	printf("A sequencia fica assim: %d %d %d %d %d", a2, a1, n, s1, s2);
	
	return 0;
}

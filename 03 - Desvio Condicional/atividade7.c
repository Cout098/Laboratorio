#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3, n4, n5, nt;
	
	printf("Digite as notas das provas:\n");
	scanf("%f %f %f %f %f",&n1, &n2, &n3, &n4, &n5);
	
	nt=n1+n2+n3+n4+n5;
	
	if(nt<50)
	{
		printf("\nVoce esta reprovada");
	}
	else if(50<=nt && nt<70)
	{
		printf("\nVoce esta de recuperacao");
	}
	else
	{
		printf("\nVoce foi aprovada");
	}
	
	
	return 0;
}

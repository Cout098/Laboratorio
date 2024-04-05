#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("\nJaneiro");
	}
	else if(n==2)
	{
		printf("\nFevereiro");
	}
	else if(n==3)
	{
		printf("\nMarço");
	}
	else if(n==4)
	{
		printf("\nAbril");
	}
	else if(n==5)
	{
		printf("\nMaio");
	}
	else if(n==6)
	{
		printf("\nJunho");
	}
	else if(n==7)
	{
		printf("\nJulho");
	}
	else if(n==8)
	{
		printf("\nAgosto");
	}
	else if(n==9)
	{
		printf("\nSetembro");
	}
	else if(n==10)
	{
		printf("\nOutubro");
	}
	else if(n==11)
	{
		printf("\nNovembro");
	}
	else if(n==12)
	{
		printf("\nDezembro");
	}
	else{
		printf("\nO numero digitado e invalido");
	}
		
	return 0;
}

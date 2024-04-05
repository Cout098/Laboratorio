#include <stdio.h>
#include <stdlib.h>

int main(){
	int idu, idm, idp, idi1, idi2, au, am, ap, ai1, ai2;
	
	printf("Digite a sua idade:\n");
	scanf("%d",&idu);
	printf("Digite a idade da sua mae:\n");
	scanf("%d",&idm);
	printf("Digite a idade de seu pai:\n");
	scanf("%d",&idp);
	printf("Digite as idade seu irmao:\n");
	scanf("%d",&idi1);
	printf("Digite as idade de outro irmao:\n");
	scanf("%d",&idi2);
	
	au=2024-idu;
	am=2024-idm;
	ap=2024-idp;
	ai1=2024-idi1;
	ai2=2024-idi2;
	
	printf("O ano de nascimento do usuario e: %d\n", au);
	printf("O ano de nascimento da mae e: %d\n", am);
	printf("O ano de nascimento do pai e: %d\n", ap);
	printf("O ano de nascimento do irmao e: %d\n", ai1);
	printf("O ano de nascimento do outro irmao e: %d\n", ai2);
	
	return 0;
}

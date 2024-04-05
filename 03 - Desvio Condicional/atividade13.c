#include <stdio.h>

int main(){
	float vc,vd, vp, t;
	int f,p;
	
	printf("Qual a forma de pagamento?\n");
	printf("\nDigite [1] para DINHEIRO ou [2] para CARTAO DE CREDITO:\n");
	scanf("%d",&f);
	printf("Qual o valor total da compra?\n");
	scanf("%f", &vc);
	
	switch (f){
		case 1 :
			printf("Informe o valor pago:\n");
			scanf("%f",&vd);
			
			t=vd-vc;
			
			printf("O seu troco e: %.2f\n",t);
		break;
		
		case 2 :
			printf("Quantas vezes voce gostaria de dividir:\n");
			scanf("%d",&p);
			
			vp=vc/p;
			
			printf("Sua compra sera dividida em %d parcelas, de %.2f reais:", p, vp);
		break;
		
		default:
			printf("A forma de pagamento escolhidas nao existe");
	}
}

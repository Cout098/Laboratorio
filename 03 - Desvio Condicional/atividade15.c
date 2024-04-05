#include <stdio.h>

int main(){
	float vc,vd, vp;
	int f;
	
	printf("Qual o valor total da compra?\n");
	scanf("%f", &vc);
	printf("Qual a forma de pagamento?\n");
	printf("\nDigite [1] para a vista ou [2] para a prazo:\n");
	scanf("%d",&f);
	
	switch (f){
		case 1 :
			if(vc<100){
				vd=vc*0.15;
				vp=vc-vd;
				printf("O percentual de desconto é de 15 por cento\n");
				printf("O valor a ser pago e de %.2f reais\n", vp);
			} else if(vc>=100 && vc<500){
				vd=vc*0.2;
				vp=vc-vd;
				printf("O percentual de desconto é de 20 por cento\n");
				printf("O valor a ser pago e de %.2f reais\n", vp);
			} else if(vc>=500 && vc<1000){
				vd=vc*0.25;
				vp=vc-vd;
				printf("O percentual de desconto é de 25 por cento\n");
				printf("O valor a ser pago e de %.2f reais\n", vp);
			} else {
				vd=vc*0.4;
				vp=vc-vd;
				printf("O percentual de desconto é de 40 por cento\n");
				printf("O valor a ser pago e de %.2f reais\n", vp);
			}
			break;
		
		case 2 :
			if(vc<100){
				vd=vc*0.1;
				vp=vc-vd;
				printf("O percentual de desconto é de 10 por cento\n");
				printf("O valor a ser pago e de %.2f reais\n", vp);
			} else if(vc>=100 && vc<500){
				vd=vc*0.15;
				vp=vc-vd;
				printf("O percentual de desconto é de 15 por cento\n");
				printf("O valor a ser pago e de %.2f reais\n", vp);
			} else if(vc>=500 && vc<1000){
				vd=vc*0.2;
				vp=vc-vd;
				printf("O percentual de desconto é de 20 por cento\n");
				printf("O valor a ser pago e de %.2f reais\n", vp);
			} else {
				vd=vc*0.3;
				vp=vc-vd;
				printf("O percentual de desconto é de 30 por cento\n");
				printf("O valor a ser pago e de %.2f reais\n", vp);
			}
		break;
		
		default:
			printf("A forma de pagamento escolhidas nao existe");
	}
}

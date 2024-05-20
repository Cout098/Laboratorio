#include <stdio.h>

void ordenar(int a, int b, int c);

int main(){
	int n1, n2, n3;
	
	printf("Digite tres numeros inteiros:\n");
	scanf("%d %d %d",&n1, &n2, &n3);

    ordenar(n1, n2, n3);

	return 0;
}

void ordenar(int a, int b, int c){
    if (a <= b && a <= c){
		printf("%d,",a);
		if(b <= c){
			printf("%d,%d", b, c);
		}else{
			printf("%d,%d", c, b);
		}
	} else if (b <= a && b <= c){
		printf("%d,", b);
		if(a <= c){
			printf("%d,%d", a, c);
		}else{
			printf("%d,%d", c, a);
		}
	} else{
		printf("%d,", c);
		if(a <= b){
			printf("%d,%d", a, b);
		}else {
			printf("%d,%d", b, a);
		}
	}
}
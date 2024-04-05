#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3;
	
	printf("Digite tres numeros inteiros:\n");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	if(n1<=n2 && n1<=n3){
		printf("%d,",n1);
		if(n2<=n3){
			printf("%d,%d", n2, n3);
		}else{
			printf("%d,%d", n3, n2);
		}
	}else if(n2<=n1 && n2<=n3){
		printf("%d,",n2);
		if(n1<=n3){
			printf("%d,%d", n1, n3);
		}else{
			printf("%d,%d",n3,n1);
		}
	}else {
		printf("%d,",n3);
		if(n1<=n2){
			printf("%d,%d",n1,n2);
		}else {
			printf("%d,%d",n2,n1);
		}
	}
	
	return 0;
}

#include <stdio.h>

int main (void) {
    int soma,num;
    while(1){
    	printf("Digite um numero: \n");
    	scanf("%d", &num);
    	soma+=num;
    	if (num==0){
    		printf("Soma dos numeros: %d",soma);
    		break;
		}
	}
	return 0;
}

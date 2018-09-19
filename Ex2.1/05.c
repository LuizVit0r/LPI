#include <stdio.h>

int main (void) {
	int soma, n;
	while(1){
		printf("Digite um numero: \n");
		scanf("%d", &n);
		soma += n;
		if (n==0){
			printf("Soma dos numeros: %d", soma);
			break;
		}
	}
    return 0;
}

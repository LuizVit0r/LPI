#include <stdio.h>

int main(void){
	int dolar;
	printf("digite o preço em dolar: ");
	scanf("%d", &dolar);
	int real=(3.17*dolar);
	if (real<1000){
		printf("Bom negócio");
	} else {
		printf("Mau negócio");
	}
	return 0;
}

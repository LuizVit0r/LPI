#include <stdio.h>

int main(void){
	int milha;
	printf("Digite a velocidade em mph: ");
	scanf("%d", &milha);
	int kilo=(1.6*milha);
	if (kilo>80 and kilo<100){
		printf("Mantenha");
	} else {
	} if (kilo>100){
		printf("Desacelere");
	} else {
		printf("Acelere");
	}
	return 0;
}
	

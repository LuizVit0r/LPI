#include <stdio.h>

int main(void){
	int milha;
	printf("Digite a velocidade em mph: ");
	scanf("%d", &milha);
	int kilo=(1.6*milha);
    if (kilo>100){
		printf("Voce esta muito rapido! DESACELERE!");
	}else if(kilo>80){
		printf("MANTENHA!");
	}else{
		printf("Voce esta muito devagar! ACELERE!");
	}
	return 0;
}

#include <stdio.h>

int troca(int* a,int* b){
	int p;
	p=*a;
	*a=*b;
	*b=p;
}
int main(void){
	int x=10;
	int y=20;
	printf("Valor de X: %d\nValor de Y: %d\n",x,y);
	troca(&x,&y);
	printf("Valores Trocados\n");
	printf("Valor de X: %d\nValor de Y: %d\n",x,y);
	return 0;
}

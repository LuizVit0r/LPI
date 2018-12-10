#include<stdio.h>
struct Caixa{
	int valor;
	struct Caixa* prox;
};
int main(void){
	struct Caixa c1,c2,c3,c4,c5;
	printf("valor 1:");
	scanf("%d",&c1.valor);
	c1.prox=&c2;
	printf("valor 2:");
	scanf("%d",&c2.valor);
	c2.prox=&c3;
	printf("valor 3:");
	scanf("%d",&c3.valor);
	c3.prox=&c4;
	printf("valor 4:");
	scanf("%d",&c4.valor);
	c4.prox=&c5;
	printf("valor 5:");
	scanf("%d",&c5.valor);
	c5.prox=NULL;
	printf("%d->%d->%d->%d->%d\n",c1.valor,(c1.prox)->valor,(c2.prox)->valor,(c3.prox)->valor,(c4.prox)->valor);
}

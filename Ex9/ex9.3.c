#include<stdio.h>
struct Caixa{
	int val;
	struct Caixa* prox;
};

void exibe(struct Caixa* caixa){
	while(caixa!=NULL){
		printf("%d",caixa->val);
		caixa=caixa->prox;
	}
}
int main(void){
	struct Caixa c1;
    struct Caixa c2;
    struct Caixa c3;
    struct Caixa c4;
    struct Caixa c5;
    scanf("%d", &c1.val);
    c1.prox=&c2;
    scanf("%d", &c2.val);
    c2.prox=&c3;
    scanf("%d", &c3.val);
    c3.prox=&c4;
    scanf("%d", &c4.val);
    c4.prox=&c5;
    scanf("%d", &c5.val);
    c5.prox=NULL;
	exibe(&c1);
	return 0;
}

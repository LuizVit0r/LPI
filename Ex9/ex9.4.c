#include<stdio.h>
#include<stdlib.h>

struct Caixa{
    int valor;
    struct Caixa* prox;
};

void exibe(struct Caixa* caixa){
    while (caixa!=NULL){
           printf("%d->", caixa->valor);
           caixa=caixa->prox;
    }
    printf("\n");
}

int main (void){
    struct Caixa c1;
    struct Caixa c2;
    struct Caixa c3;
    struct Caixa c4;
    struct Caixa c5;
    struct Caixa* cabeca=&c1;
    scanf("%d", &c1.valor);
    c1.prox=&c2;
    scanf("%d", &c2.valor);
    c2.prox=&c3;
    scanf("%d", &c3.valor);
    c3.prox=&c4;
    scanf("%d", &c4.valor);
    c4.prox=&c5;
    scanf("%d", &c5.valor);
    c5.prox=NULL;
    exibe(cabeca);
    struct Caixa* t1;
    t1=(*cabeca).prox;
    (*cabeca).prox=(*t1).prox;
    (*t1).prox=NULL;
    exibe(cabeca);
    (*t1).prox=cabeca;
    cabeca=t1;
    exibe(cabeca);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>


typedef struct Caixa {
    int val;
    struct Caixa* prox;
}Caixa;

void exibe(struct Caixa* caixa){
    while (caixa!=NULL){
           printf("%d->", caixa->val);
           caixa=caixa->prox;
    }
}
/*
void insere(Caixa* inicio, int n){
    Caixa* novo;
    novo=(Caixa*) malloc(sizeof(Caixa));
    novo->val = n;
    novo->prox=NULL;
    if (inicio!=NULL){
        Caixa* t1=inicio;
        while(t1->prox!=NULL){
            t1=t1->prox;
        }
        t1->prox=novo;
    }else{
        inicio=novo;
    }
}
*/
int main(void){
    Caixa* cabeca,c1;
    cabeca=NULL;
    int n;
    printf("Insira um valor para n:\n");
    scanf("%d",&n);
    while (n!=-1){
        Caixa* novo;
        novo=(Caixa*) malloc(sizeof(Caixa));
        novo->val = n;
        novo->prox=NULL;
        if (cabeca!=NULL){
            Caixa* t1=cabeca;
            while(t1->prox!=NULL){
                t1=t1->prox;
            }
            t1->prox=novo;
        }else{
            cabeca=novo;
        }
        printf("Insira outro valor para n:\n");
        scanf("%d",&n);
    }
    exibe(cabeca);
    return 0;
}

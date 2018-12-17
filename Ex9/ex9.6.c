#include<stdio.h>
#include<stdlib.h>


typedef struct Caixa {
    int val;
    struct Caixa* prox;
}Caixa;

int contem(struct Caixa* caixa,int n){
    while (caixa!=NULL){
           if(caixa->val==n){
                return 1;
           }
           caixa=caixa->prox;
    }
    return 0;
}

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
    printf("Escolha o numero a buscar:\n");
    scanf("%d",&n);
    int x=contem(cabeca,n);
    printf("%d",x);
    return 0;
}

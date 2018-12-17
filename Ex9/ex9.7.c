#include<stdio.h>
#include<stdlib.h>


typedef struct Caixa {
    int val;
    struct Caixa* prox;
}Caixa;

int retira(struct Caixa* t1, int n){
    Caixa* t2;
    if(t1->val==n){
        return 2;
    }
    while(t1->val!=n){
        t2=t1;
        t1=t1->prox;
    }
    t2->prox=t1->prox;
    t1->prox=NULL;
    return 1;
}


int contem(struct Caixa* caixa,int n){
    Caixa* t1;
    t1=caixa;
    while (caixa!=NULL){
           if(caixa->val==n){
                int x=retira(t1,n);
                return x;
           }
           caixa=caixa->prox;
    }
    return 0;
}

void exibe(struct Caixa* caixa){
    while (caixa!=NULL){
           printf("%d->", caixa->val);
           caixa=caixa->prox;
    }
    printf("\n");
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
    exibe(cabeca);
    printf("Escolha o numero a buscar:\n");
    scanf("%d",&n);
    int x=contem(cabeca,n);
    if (x==2){
        printf("Valor ecnontrado e removido\n");
        cabeca=cabeca->prox;
        exibe(cabeca);
    }else if (x==1){
        printf("Valor encontrado e removido\n");
        exibe(cabeca);
    }else{
        printf("Nenhum valor removido\n");
    }
    return 0;
}

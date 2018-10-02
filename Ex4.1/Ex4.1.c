#include <stdio.h>
#include <stdlib.h>
int eh_primo(int n){
    int q=0,i;
    for(i=1;i<=n;i+=1){
        if(n%i==0){
            q+=1;
        }
    }if(q==2){
         printf("numero primo - %d\n", n);
        }else{
            printf("nao eh numero primo - %d\n", n);
    }
}
int main(void){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    int x=eh_primo(num);
    return 0;
}

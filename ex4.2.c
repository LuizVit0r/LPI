#include <stdio.h>
int todos_os_primo(int n){
    int i,q=0;
    while(n>0){
        for(i=1;i<=n;i+=1){
            if(n%i==0){
                q+=1;
            }
        }if(q==2){
            printf("numeros primos: %d\n", n);
        }
        n--;
        q=0;
    }    
}
int main(void){
    int n;
    printf("digite um numero: ");
    scanf("%d",&n);
    int x=todos_os_primo(n);
    return 0;
}

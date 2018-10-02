#include <stdio.h>
int eh_primo(int n){
    int q=0,i;
    for(i=1;i<=n;i+=1){
        if(n%i==0){
            q+=1;
        }
    }
    if(q==2){
    	return 1;
	}else{
		return 0;
	}
}	
int todos_os_primo(int n){
	printf("NUMEROS PRIMOS\n");
    while(n>0){
    	int x=eh_primo(n);
        if(x==1){
            printf(" %d\n", n);
        }
        n--;
    }    
}
int main(void){
    int n;
    printf("digite um numero: ");
    scanf("%d",&n);
    todos_os_primo(n);
    return 0;
}

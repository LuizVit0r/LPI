#include <stdio.h>
#include <string.h>
int compra(int* conta , int valor){
	*conta=*conta-valor;
}
int main(void){
	int c1,c2,valor,i;
	int compras[]={100,50,80,30,20};
	int* conta;
	printf("Digite o valor da conta 1: ");
	scanf("%d", &c1);
	printf("Digite o valor da conta 2: ");
	scanf("%d", &c2);
	for(i=0;i<5;i+=1){
		valor=compras[i];
		if(c1>c2){
			conta=&c1;
			compra(conta,valor);
		}else{
			conta=&c2;
			compra(conta,valor);
		}
		printf("Saldos Atualizados: %d %d\n", c1,c2);
	}
	printf("Saldos Finais: %d %d\n", c1,c2);
	return 0;	
}

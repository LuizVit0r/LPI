#include <stdio.h>
int compra(int* conta, int valor){
	*conta=*conta-valor;
}
int main(void){
	int c1,c2,valor=500;
	int* conta;
	printf("Digite o saldo da conta 1: ");
	scanf("%d", &c1);
	printf("Digite o saldo da conta 2: ");
	scanf("%d", &c2);
	if(c1>c2){
		conta=&c1;
		compra(conta,valor);
	}else{
		conta=&c2;
		compra(conta,valor);
	}
	printf("Saldos atualizados depois da compra: %d %d\n",c1,c2);
	return 0;
}

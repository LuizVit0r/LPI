#include <stdio.h>
int preenche(int n,int* vec){
	int i;
	for(i=0;i<n;i+=1){
		printf("digite um numero: ");
		scanf("%d",vec+i);
	}
	printf("===VETOR===\n");
	for(i=0;i<n;i+=1){
		printf("%d \n",*(vec+i));
	}	
}
int media(int n,int* vec){
	int i,soma=0,med=0;
	for(i=0;i<n;i+=1){
		soma+=*(vec+i);
	}
	med=(soma/n);
	printf("===MEDIA===\n");
	printf("media - %d\n",med);
}
int main(void){
	int n=5,vetor[n];//n=5 só para testes
	preenche(n,vetor);
	media(n,vetor);
	return 0;
}

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
	int i;
	float soma=0,med=0;
	for(i=0;i<n;i+=1){
		soma+=*(vec+i);
	}
	med=(soma/n);
	printf("===MEDIA===\n");
	printf("media - %f\n",med);
}
int main(void){
	int n,vetor[n];
	printf("digite a quantidade de numeros: ");
	scanf("%d",&n);
	preenche(n,vetor);
	media(n,vetor);
	return 0;
}

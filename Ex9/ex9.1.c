#include<stdio.h>
int main(void){
	int vet[5],n=0;
	for(int i=0;i<5;i+=1){
		scanf("%d",&vet[i]);
	}
	printf("==VETOR==\n");
	for(int i=0;i<5;i+=1){
		printf("%d\n",vet[i]);
		n++;	
	}
	printf("\n");
	int I;
	scanf("%d",&I);
	n--;
	for(int i=I;i<n;i+=1){
		vet[i]=vet[i+1];
	}
	for(int i=0;i<n;i+=1){
		printf("%d\n",vet[i]);
	}
	return 0;
}

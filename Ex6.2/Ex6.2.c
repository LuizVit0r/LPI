#include <stdio.h>
int preenche(int arr[][100],int l,int c){
	int i,j;
	for(i=0;i<l;i+=1){
		for(j=0;j<c;j+=1){
			printf("Digite o A[%d][%d] - ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}
float media(int arr[][100],int l, int c){
	int i,j;
	float soma=0,medium=0;
	for(i=0;i<l;i+=1){
		for(j=0;j<c;j+=1){
			printf("%d ",arr[i][j]);
			soma+=arr[i][j];
		}
		printf("\n");
	}
	printf("Soma = %f\n", soma);
	medium=(soma/(l*c));
	printf("Media = %f\n", medium);
}
int main(void){
	int l,c,arr[100][100];
	printf("Digite a quantidade de linhas: ");
	scanf("%d",&l);
	printf("Digite a quantidade de colunas: ");
	scanf("%d",&c);
	preenche(arr,l,c);
	printf("##-MATRIZ LIDA-##\n");
	media(arr,l,c);
	return 0;
}

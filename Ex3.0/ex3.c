#include <stdio.h>
#include <stdlib.h>
int main(void){
	char temp[50];
	float media;
	int x,i,q=0,k=0;
	for(i=1;i<=50;i+=1){
		printf("digite uma temperatura: ");
		scanf("%d", &x);
		if(x<(-100)||(x>100)){
			printf("temperatura inválida");
			i-=1;
		}else{
			temp[i]=x;
		    q+=x;
		}	
	}
	media=(q/50);
	printf("media = %f", media);
	for(i=1;i<=50;i+=1){
		if(temp[i]>media){
			k+=1;
		}
	}
	printf("temperaturas acima da media: %d\n", k);
	return 0;
}

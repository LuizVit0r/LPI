#include <stdio.h>
#include <stdlib.h>

int main(void){
    char nome, nmenos, nmais;
	int q=1, vit, emp, der, pts, P=0, p=1;
	while(q<=20){
		printf("Digite o nome do time %d: \n", q);
		scanf("%s",&nome);
		printf("Digite o numero de vitorias: \n");
		scanf("%d", &vit);
		printf("Digite o numero de empates: \n");
		scanf("%d", &emp);
		printf("Digite o numero de derrotas: \n");
		scanf("%d", &der);
		pts = (vit*3) + emp;
		if(pts>P){
			P = pts;
			nmais = nome;
		}
		else{
			p = pts;
			nmenos = nome;
		}

		q+=1;
	}
	printf("Time %c tem mais pontos.\n", nmais);
	printf("Time %c tem menos pontos.\n", nmenos);
    return 0;
}

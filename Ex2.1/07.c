#include <stdio.h>
#include <string.h>

int main(void){
    char nome[30], nmenos[30], nmais[30];
	int c=1, vit, emp, der, pts, P=0, p=1;
	while(c<=20){
		printf("Digite o nome do time %d: \n", c);
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
			strcpy(nmais,nome);
		}
		else if(pts<p){
			p = pts;
			strcpy(nmenos,nome);
		}

		c+=1;
	}
	printf("Time %s tem mais pontos.\n", nmais);
	printf("Time %s tem menos pontos.\n", nmenos);
    return 0;
}

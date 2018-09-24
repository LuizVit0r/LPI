#include <stdio.h>
#include <stdlib.h>

int main(void){
    char nome, nmenos, nmais;
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
			nmais = nome;
		}
		else if{
			p = pts;
			nmenos = nome;
		}

		c+=1;
	}
	printf("Time %c tem mais pontos.\n", nmais);
	printf("Time %c tem menos pontos.\n", nmenos);
    return 0;
}

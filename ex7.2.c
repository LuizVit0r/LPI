#include <stdio.h>

struct Jogador{
	int vel;
	int pas;
};

struct Jogador2{
	int dri;
	int fin;
	struct Jogador j;
};

void preenche(struct Jogador* p){
	scanf("%d %d",&((*p).vel),&((*p).pas));
}

void preenche2(struct Jogador2* q){
	printf("Digite os atributos:\n");
	scanf("%d %d",&((*q).dri),&((*q).fin));
	preenche((&(*q).j));
}

int main(void){
	struct Jogador2 q;
	preenche2(&q);
	printf("ATRIBUTOS DO JOGADOR\n");
	printf("%d %d %d %d\n",q.dri,q.fin,q.j.vel,q.j.pas);
	return 0;
}

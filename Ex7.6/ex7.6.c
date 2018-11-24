#include<stdio.h>

struct Jogador{
	int jog;
	int av;
	union{
		char nome[50];
		int num;
	}reg;
};

struct Jogador2{
	int gol;
	int ass;
	struct Jogador j;
};

void preenche(struct Jogador* p){
	printf("Digite como vc quer identificar seu jogador: 1 pelo seu nome e 2 pelo seu numero na camisa: ");
	scanf("%d",&(*p).av);
	if((*p).av==1){
		printf("Nome: ");
		scanf("%s",&((*p).reg.nome));
	}else if((*p).av==2){
		printf("Numero: ");
		scanf("%d",&((*p).reg.num));
	}
	printf("Jogos: ");
	scanf("%d",&((*p).jog));
}

void preenche2(struct Jogador2* q){
	printf("Digite os dados do jogador\n");
	printf("Gols: ");
	scanf("%d",&((*q).gol));
	printf("Assistencias: ");
	scanf("%d",&((*q).ass));
	preenche((&(*q).j));
}

int main(void){
	struct Jogador2 q;
	preenche2(&q);
	printf("Dados do Jogador\n");
	if(q.j.av==1){
		printf("Nome - %s | Jogos - %d | Gols - %d | Assistencias - %d\n",q.j.reg.nome,q.j.jog,q.gol,q.ass);
	}else if(q.j.av==2){
		printf("Número - %d | Jogos - %d | Gols - %d | Assistencias - %d\n",q.j.reg.num,q.j.jog,q.gol,q.ass);
	}
	return 0;
}

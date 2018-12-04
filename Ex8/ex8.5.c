#include <stdio.h>
#include <string.h>

struct Jogador{
	int jog;
	int av;
	union{
		char nome[255];
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
		printf("Nome:");
		scanf("%s",((*p).reg.nome));
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
	FILE* f=fopen("/home/ime/jogador.txt", "wb");
	if(q.j.av==1){
		fwrite(&q.j.reg.nome,sizeof(char),(strlen(q.j.reg.nome)+1),f);
		fwrite(&q.j.jog,sizeof(int),1,f);
		fwrite(&q.j.av,sizeof(int),1,f);
		fwrite(&q.gol,sizeof(int), 1,f);
		fwrite(&q.ass,sizeof(int), 1,f);
	}else if(q.j.av==2){
		fwrite(&q.j.reg.num,sizeof(int),1,f);
		fwrite(&q.j.jog,sizeof(int), 1,f);
		fwrite(&q.j.av,sizeof(int), 1,f);
		fwrite(&q.gol,sizeof(int), 1,f);
		fwrite(&q.ass,sizeof(int), 1,f);
	}
	fclose(f);
	FILE* g=fopen("jogador.txt", "rb");
	struct Jogador2 x;
	printf("DADOS DO JOGADOR\n");
	if(q.j.av==1){
		fread(&x.j.reg.nome,sizeof(char),(strlen(q.j.reg.nome)+1),g);
		fread(&x.j.jog,sizeof(int),1,g);
		fread(&x.j.av,sizeof(int),1,g);
		fread(&x.gol,sizeof(int),1,g);
		fread(&x.ass,sizeof(int),1,g);
		printf("Nome - %s | Jogos - %d | Gols - %d | Assistencias - %d\n",x.j.reg.nome,x.j.jog,x.gol,x.ass);
	}else if(q.j.av==2){
		fread(&x.j.reg.num,sizeof(int),1,g);
		fread(&x.j.jog,sizeof(int),1,g);
		fread(&x.j.av,sizeof(int),1,g);
		fread(&x.gol,sizeof(int),1,g);
		fread(&x.ass,sizeof(int),1,g);
		printf("Número - %d | Jogos - %d | Gols - %d | Assistencias - %d\n",x.j.reg.num,x.j.jog,x.gol,x.ass);
	}
	return 0;
}

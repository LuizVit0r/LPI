#include <stdio.h>
struct Posicao{
	int x;
	int y;
};
struct Personagem{
	int id;
	struct Posicao s;
	int qtd;
};
void preenche(struct Posicao* s){
	printf("Digite x: ");
	scanf("%d",&(*s).x);
	printf("Digite y: ");
	scanf("%d",&(*s).y);
}
void cria_personagem(struct Personagem* p){
	int i;
	printf("Numero do participante: ");
	scanf("%d", &(*p).id);
	preenche((&(*p).s));
	(*p).qtd=0;
}
int main(void){
	struct Personagem pes[10];
	for(int i=0;i<10;i+=1){
		cria_personagem(&pes[i]);
	}
	return 0;
}

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
void mapa(struct Personagem* p, int n){
	int y=0,x=0,e=0;
	printf(" 0123456789\n");
	for(y=0;y<10;y+=1){
		printf("%d",y);
		for(x=0;x<10;x+=1){
			for(e=0;e<n;e+=1){
				if((*(p+e)).s.y==y && (*(p+e)).s.x==x){
					printf("%d",(*(p+e)).id);
					break;
				}
				else if(e==(n-1)){
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
int main(void){
	struct Personagem ps[10];
	int i;
	for (i=0;i<10;i+=1){
		cria_personagem(&ps[i]);
	}
	mapa(ps,10);
	return 0;
}

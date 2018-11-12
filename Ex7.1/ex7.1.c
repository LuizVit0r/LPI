#include <stdio.h>

struct Jogador{
	int vel;
	int pas;
	int dri;
};

void preenche(struct Jogador* p){
	printf("Digite os atributos:\n");
	scanf("%d %d %d",&((*p).vel),&((*p).pas),&((*p).dri));
}

int main(void){
	struct Jogador p1;
	preenche(&p1);
	printf("ATRIBUTOS DO JOGADOR\n");
	printf("%d %d %d\n",p1.vel,p1.pas,p1.dri);
	return 0;
}
	
	

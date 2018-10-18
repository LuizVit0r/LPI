#include <stdio.h>
#include <math.h>

typedef struct guarda{
	int x,y;
}ponto;

ponto preenche(int x,int y){
	ponto p;
	p.x=x;
	p.y=y;
	return p;
}

void vetor(ponto vec[]){
	int x,y,i;
	ponto valor;
	for(i=0;i<=10;i+=1){
		printf("Coordenada %d\n",i);
		printf("Digite x: ");
		scanf("%d", &x);
		printf("Digite y: ");
		scanf("%d", &y);
		valor=preenche(x,y);
		vec[i]=valor;
	}
}

void distancia(ponto vec[]){
	int i;
	double dist=0,max=0;
	ponto distante;
	for(i=0;i<=10;i+=1){
		dist=sqrt(pow(vec[i].x,2)+pow(vec[i].y,2));
		if(dist>max){
			max=dist;
			distante.x=vec[i].x;
			distante.y=vec[i].y;
		}
	}
	printf("Ponto mais distante de O(0,0) -- (%d,%d)\n",distante.x,distante.y);
}

int main(void){
	ponto vec[10];
	ponto pre;
	pre=preenche(1,1);
	vetor(vec);
	distancia(vec);
	return 0;
}


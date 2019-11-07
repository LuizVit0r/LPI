/*
Um sistema distribuído registra todas as transações em dois arquivos distintos. 
O objetivo é validar somente as transações que tenham sido registradas em ambos os arquivos, 
estratégia que aumenta a confiabilidade e segurança do processo. 

Para que o algoritmo de validação seja o tão eficiente quanto possível ambos os arquivos 
são fornecidos ordenados em ordem crescente. 

Os arquivos contêm, em cada linha uma chave numérica 
da família dos inteiros pertencente ao intervalo [100.000 e 999.999], sendo cada chave relativa a 
uma transação. Somente devem ser consideradas válidas transações (chaves) registradas em ambos arquivos. 

Faça um programa que processe os dois arquivos texto contendo as chaves. O primeiro se chama arq1.txt, o segundo arq2.txt. 
Seu programa deve fornecer como saída através tela do terminal o número de transações válidas e o número total de transações não validadas.
*/

#include <stdio.h>

void valida(FILE *arq1, FILE *arq2);

int main(){
	FILE *arq1 = fopen("arq1.txt", "r");
	if(arq1 == NULL){
		printf("Não foi possível ler o arquivo1.txt.\n");
		return -1;
	}
	
	FILE *arq2 = fopen("arq2.txt", "r");
	if(arq2 == NULL){
		printf("Não foi possível ler o arquivo2.txt.\n");
		return -1;
	}
	
	valida(arq1, arq2);
	
	if((fclose(arq1)) == EOF){
		printf("Não foi possível fechar o arquivo1.txt.\n");
		return -1;
	}
	
	if((fclose(arq2)) == EOF){
		printf("Não foi possível fechar o arquivo2.txt.\n");
		return -1;
	}
	
	return 0;
}

void valida(FILE *arq1, FILE *arq2){
	int new1, new2, val = 0, nao = 0;

	fscanf(arq1, "%d", &new1);
	fscanf(arq2, "%d", &new2);
	
	while(!feof(arq1) && !feof(arq2)){ 
		if(new1 < new2){ 
			++nao;
			fscanf(arq1, "%d", &new1);
		}
		else if(new1 > new2){ 
			++nao;
			fscanf(arq2, "%d", &new2);
		}
		else{ 
			++val;
			fscanf(arq1, "%d", &new1);
			fscanf(arq2, "%d", &new2);
		}
	}

	printf("Número de transações validadas: %d\n", val);
	printf("Número de transações não validadas: %d\n", nao);
}

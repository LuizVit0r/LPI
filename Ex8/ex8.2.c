#include<stdio.h>
#include<string.h>

int main(void){
	int i=0;
	char frase[25];
	FILE* f = fopen("arq-01.txt","r");	
	frase[i] = fgetc(f);	
	while(frase[i] != EOF){
		i++;	
		frase[i] = fgetc(f);	
	}
	frase[i] = '\0';
	fclose(f);
	printf("%s",frase);
	return 0;
}

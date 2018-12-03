#include<stdio.h>
#include<string.h>

void escreva_string(FILE* f,char* str){
	int i;
	for(i=0;i<strlen(str);i+=1){
		fputc(str[i],f);
	}
}

int main(void){
	int i,j;
	char st[10][25];
	FILE* f=fopen("arq-02.txt","w");
	for(i=0;i<10;i+=1){
		scanf("%s",st[i]);
	}
	for(i=0;i<10;i+=1){
		escreva_string(f,st[i]);
		fputc(' ',f);
	}
	fclose(f);
	return 0;		
}

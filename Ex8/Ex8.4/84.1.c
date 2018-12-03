#include<stdio.h>
#include<string.h>

void escreva_string(FILE* f,char* str){
	int i;
	for(i=0;i<strlen(str);i+=1){
		fputc(str[i],f);
	}
}

int main(void){
	char st[25];
	int i,t;
	FILE* f=fopen("arq-03.txt","w");
	scanf("%s",st);
	escreva_string(f,st);
	fclose(f);
	return 0;
}

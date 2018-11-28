#include<stdio.h>
#include<string.h>
int main(void){
	char st[25];
	int i,t;
	scanf("%s",st);
	t=strlen(st);
	FILE* f=fopen("arq-01.txt","w");
	for (i=0;i<t;i+=1){
		fputc(st[i],f);
	}
	fclose(f);
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(void){
	int i,j;
	char st[10][25];
	FILE* f=fopen("arq-02.txt","w");
	for(i=0;i<10;i+=1){
		scanf("%s",st[i]);
	}
	for(i=0;i<10;i+=1){
		for(j=0;j<strlen(st[i]);j+=1){
			fputc(st[i][j],f);
		}
		fputc(' ',f);
	}
	fclose(f);
	return 0;		
}

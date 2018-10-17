#include <stdio.h>
#include <string.h>

int strlem(char* str){
	int q=0;
	while(1){
		if(*(str+q)=='\0'){
			break;
		}
		q+=1;
	}
	return q;
}

void strjoin(char* d,char* s1,char* s2){
	int i,j,v1=strlem(s1),v2=strlem(s2);
	for(i=0;i<(v1);i+=1){
		*(d+i)=*(s1+i);
	}
	for(j=i,i=0;j<(v2+v1);j+=1,i+=1){
		*(d+j)=*(s2+i);
	}
	*(d+(v1+v2))='\0';
}

int main(void){
	char nome1[30];
	char nome2[30];
	printf("Digite uma string: ");
	scanf("%s",nome1);
	printf("Digite outra string: ");
	scanf("%s",nome2);
	char nome12[61];
	strjoin(nome12,nome1,nome2);
	printf("String final - %s",nome12);
	return 0;
}

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
 
 int main(void){
 	char string[30];
 	printf("Digite a string: ");
 	scanf("%s",string);
 	int A=strlem(string);
 	printf("Quantidade de caracteres:%d\n",A);
 	return 0;
 }

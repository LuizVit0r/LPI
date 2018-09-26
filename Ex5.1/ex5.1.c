#include <stdio.h>
#include <stdlib.h>
int main(void){
	int a,b;
	int* p;
	printf("digite um numero: ");
	scanf("%d", &a);
	printf("digite outro numero: ");
	scanf("%d", &b);
	printf("%d %d\n",a,b);
	if(a>b){
		p=&a;
		*p=a-50;
	}else{
		p=&b;
		*p=b-50;
	}
	printf("%d %d\n",a,b);
	return 0;
}
		

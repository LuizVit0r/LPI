#include <stdio.h>

int main(void){
	int num1;
	int num2;
	printf("digite um numero: ");
	scanf("%d", &num1);
	printf("digite outro numero: ");
	scanf("%d", &num2);
	while(num1 < (num2-1)){
		num1=num1+1;
		printf("%d\n", num1);
	}
return 0;
}

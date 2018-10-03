#include <stdio.h>
int main(void){
	int num1;
	int num2;
	printf("digite um numero: ");
	scanf("%d", &num1);
	printf("digite outro numero: ");
	scanf("%d", &num2);
	if(num1<num2){
		while(num1 < (num2-1)){
			num1=num1+1;
			printf("%d\n", num1);
		}
	}else if(num2<num1){
		while(num2<(num1-1)){
			num2=num2+1;
			printf("%d\n", num2);
		}
	}else{
		printf("0");
	}
return 0;
}

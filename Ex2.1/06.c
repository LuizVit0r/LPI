#include <stdio.h>
#include <math.h>

int main (void) {
	int N, i, somatorio = 0;
	printf("Informe o limite do somatorio: \n");
	scanf("%d", &N);
	for(i=1;i<=N;i++){
		somatorio += pow(i,2);
	}
	printf("Somatorio: %d", somatorio);
    return 0;
}

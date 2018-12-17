#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Pessoa {
    int idade;
    char nome[25];
}Pessoa;

int main(void){
    Pessoa v[100];
    int n;
    printf("Digite o numero de pessoas:\n");
    scanf("%d", &n);
    FILE* f= fopen("C:/Users/Luiz/Documentos/ex8.bin", "wb");
    fwrite(&n, sizeof(int), 1, f);
    for (int i=0;i<n;i++){
        printf("Insira o a idade e o nome da pessoa, respectivamente\n");
        scanf("%d", &v[i].idade);
        scanf("%s", v[i].nome);
        fwrite(&v[i].idade, sizeof(int), 1, f);
        fwrite(v[i].nome, sizeof(char), (strlen(v[i].nome))+1, f);
    }
    fclose(f);
    return 0;
}

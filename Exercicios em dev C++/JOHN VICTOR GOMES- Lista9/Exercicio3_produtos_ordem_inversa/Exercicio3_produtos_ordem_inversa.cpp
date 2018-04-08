#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#define MAX 10



struct produto {
	char descricao[200];
	char nomes[100];
	float valor;
	
};

int main (){

float maior_salario=0;
int i=0;
int posicao=0;

	
setlocale(LC_ALL, "Portuguese");
struct produto p1[MAX];

	for( i=0; i<MAX ; i++){
		
printf(" \n");



printf("Digite o nome do produto %i:\n", (i+1));
scanf(" %[^\n]s", p1[i].nomes);


printf("\n\n");
printf("Digite uma descricao para o produto %i\n", (i+1));
scanf(" %[^\n]s", p1[i].descricao);

printf("Digite o valor do produto %i:  \n", (i+1));
scanf("%f", &p1[i].valor);

    system("cls");
}

for( i=(MAX-1); i>=0 ; i--){
printf("_________________________________________________________________\n");
printf("\tPRODUTO %i\n", (i+1));
printf("_________________________________________________________________\n");
printf("\tNome:  %s\n", p1[i].nomes);
printf("\n\n");
printf("\tDescricao: %s\n",p1[i].descricao);
printf("\n\n");
printf("\tValor: R$ %.2f\n", p1[i].valor);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n");
}

return (0);
}

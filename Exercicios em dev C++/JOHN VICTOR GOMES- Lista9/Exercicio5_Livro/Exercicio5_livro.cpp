#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#define MAX 5



struct livro {
	
	char titulo[100];
	int ano_edicao;
	int nr_paginas;
	float preco;
};

int main (){

float media_nrpaginas=0;
float soma_nrpaginas=0;
float menor=0;
int posicao=0;
int i=0;


	
setlocale(LC_ALL, "Portuguese");
struct livro l1[MAX];

	for( i=0; i<MAX ; i++){
		
printf(" \n");



printf("Digite o Titulo do livro %i:\n", (i+1));
scanf(" %[^\n]s", l1[i].titulo);


printf("\n\n");

printf("Digite o ano de edição do livro %i:  \n", (i+1));
scanf("%i", &l1[i].ano_edicao);

printf("\n\n");
printf("Digite o numero de paginas do livro %i\n", (i+1));
scanf("%i",&l1[i].nr_paginas);


printf("\n\n");
printf("Digite o preço do livro %i\n", (i+1));
scanf("%f",&l1[i].preco);


soma_nrpaginas+= l1[i].nr_paginas;

if (l1[i].preco < menor || i==0) {
	
	menor = l1[i].preco;
	posicao = i;
}


    system("cls");


printf("_________________________________________________________________\n");
printf("\tLIVRO %i\n", (i+1));
printf("_________________________________________________________________\n");
printf("\tTitulo:  %s\n", l1[i].titulo);
printf("\n\n");
printf("\tNº Paginas: %i\n", l1[i].nr_paginas);
printf("\n\n");
printf("\tPreço: R$ %.2f\n", l1[i].preco);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n");



    system("pause");
    
    
    system("cls");
    


}


    system("cls");
    




media_nrpaginas+=(soma_nrpaginas/MAX);

printf("_________________________________________________________________\n");
printf("\tMEDIA\n", (i+1));
printf("_________________________________________________________________\n");
printf("\tMedia Nº Paginas: %.2f\n", media_nrpaginas);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n"); 


printf("_________________________________________________________________\n");
printf("\tLIVRO MENOR PRECO\n");
printf("_________________________________________________________________\n");
printf("\tTitulo:  %s\n", l1[posicao].titulo);
printf("\n\n");
printf("\tNº Paginas: %i\n", l1[posicao].nr_paginas);
printf("\n\n");
printf("\tPreço: R$ %.2f\n", l1[posicao].preco);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n");

return (0);
}

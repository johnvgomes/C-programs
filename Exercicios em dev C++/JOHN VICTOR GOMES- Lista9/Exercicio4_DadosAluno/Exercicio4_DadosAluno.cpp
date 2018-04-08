#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#define MAX 10



struct DadosAluno {
	
	char nomes[100];
	int idade;
	float media;
};

int main (){

float media_turma=0;
float soma_turma=0;
int i=0;
float n1=0;
float n2=0;


	
setlocale(LC_ALL, "Portuguese");
struct DadosAluno d_A[MAX];

	for( i=0; i<MAX ; i++){
		
printf(" \n");



printf("Digite o nome do aluno %i:\n", (i+1));
scanf(" %[^\n]s", d_A[i].nomes);


printf("\n\n");

printf("Digite a idade do aluno %i:  \n", (i+1));
scanf("%i", &d_A[i].idade);

printf("\n\n");
printf("Digite a primeira nota do aluno %i\n", (i+1));
scanf("%f", &n1);


printf("\n\n");
printf("Digite a segunda nota do aluno %i\n", (i+1));
scanf("%f", &n2);
//scanf(" %[^\n]s", p1[i].descricao);

d_A[i].media=((n1+n2)/2);

soma_turma+=d_A[i].media;


    system("cls");


printf("_________________________________________________________________\n");
printf("\tALUNO %i\n", (i+1));
printf("_________________________________________________________________\n");
printf("\tNome:  %s\n", d_A[i].nomes);
printf("\n\n");
printf("\tIdade: %i\n",d_A[i].idade);
printf("\n\n");
printf("\tMedia: %.2f\n", d_A[i].media);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n");



    system("pause");
    
    
    system("cls");
    


}


    system("cls");
    
for( i=0; i<MAX ; i++){

printf("_________________________________________________________________\n");
printf("\tALUNO %i\n", (i+1));
printf("_________________________________________________________________\n");
printf("\tNome:  %s\n", d_A[i].nomes);
printf("\n\n");
printf("\tIdade: %i\n",d_A[i].idade);
printf("\n\n");
printf("\tMedia: %.2f\n", d_A[i].media);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n");    
    
}

media_turma=(soma_turma/MAX);

printf("_________________________________________________________________\n");
printf("\tMEDIA DA TURMA\n", (i+1));
printf("_________________________________________________________________\n");
printf("\tMedia: %.2f\n", media_turma);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n"); 


return (0);
}

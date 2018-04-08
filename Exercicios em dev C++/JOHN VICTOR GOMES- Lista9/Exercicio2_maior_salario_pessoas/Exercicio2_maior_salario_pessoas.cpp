#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#define MAX 99



struct pessoas {
	char sexo[2];
	char nomes[100];
	float salario;
	
};

int main (){

float maior_salario=0;
int i=0;
int posicao=0;

	
setlocale(LC_ALL, "Portuguese");
struct pessoas p1[MAX];

	for( i=0; i<MAX ; i++){
		
printf(" \n");


printf("PARA  PARAR DIGITE 'P' \n\n");
printf("Digite o nome da pessoa %i:\n", (i+1));
scanf(" %[^\n]s", p1[i].nomes);

strupr(p1[i].nomes);

if(!strcmp(p1[i].nomes,"P")){
	break;
}

printf(" \n");
printf("Digite o sexo da pessoa %i m - Masculino/ f - Feminino\n", (i+1));
scanf(" %[^\n]s", p1[i].sexo);

printf("Digite o salario da pessoa %i:  \n", (i+1));
scanf("%f", &p1[i].salario);

if(maior_salario<p1[i].salario){
	
	maior_salario=p1[i].salario;
	posicao=i;
} 


    system("cls");
}

if (maior_salario!=0){


printf("\tNome:  %s\n", p1[posicao].nomes);

if(!strcmp(p1[posicao].sexo,"m")){
	printf("\tSexo: Masculino\n");
}else{
	printf("\tSexo: Feminino\n");
}

printf("\tSalario:%.2f\n", p1[posicao].salario);

printf("\n\n");
system("pause");
}

else {
	
	printf("Nao ha pessoa com um salario maior");
}
		

return (0);
}

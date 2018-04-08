#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#define MAX 500



struct habitante {
	
	
	int idade;
	char sexo[2];
	float salario;
	int nrfilhos;
};

int main (){

float media_salario=0;
float soma_salario=0;
int i=0;


	
//setlocale(LC_ALL, "Portuguese");
struct habitante h1[MAX];

	for( i=0; i<MAX ; i++){
		
printf(" \n");



printf("Digite a idade do habitante %i:  \n", (i+1));
scanf("%i", &h1[i].idade);


printf(" \n");
printf("Digite o sexo do habitante %i m - Masculino/ f - Feminino\n", (i+1));
scanf(" %[^\n]s", h1[i].sexo);

printf("\n\n");
printf("Digite o salario do habitante %i\n", (i+1));
scanf("%f",&h1[i].salario);


printf("\n\n");
printf("Digite o numero de filhos do habitante %i\n", (i+1));
scanf("%i",&h1[i].nrfilhos);


soma_salario+= h1[i].salario;


    system("cls");


printf("%c%c_________________________________________________________________\n", 218, 196);
printf("\tHABITANTE %i\n", (i+1));
printf("_________________________________________________________________\n");
printf("\tIdade:  %i\n", h1[i].idade);
printf("\n\n");

if(!strcmp(h1[i].sexo,"m")){
	printf("\tSexo: Masculino\n");
}else{
	printf("\tSexo: Feminino\n");
}
printf("\n\n");
printf("\tSalario: R$ %.2f\n", h1[i].salario);
printf("\n\n");
printf("\tNº Filhos: %i\n", h1[i].nrfilhos);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n");


    system("pause");
    
    
    system("cls");
    


}


    system("cls");
    




media_salario+=(soma_salario/MAX);

printf("%c_________________________________________________________________\n", 218);
printf("\tMEDIA SALARIAL DOS HABITANTES\n", (i+1));
printf("_________________________________________________________________\n");
printf("\tQtd de Habitantes: %i", MAX);
printf("\tMedia: R$ %.2f\n", media_salario);
printf("\n\n");
printf("----------------------------------------------------------------\n");
printf("\n\n"); 

system("pause");
return (0);
}

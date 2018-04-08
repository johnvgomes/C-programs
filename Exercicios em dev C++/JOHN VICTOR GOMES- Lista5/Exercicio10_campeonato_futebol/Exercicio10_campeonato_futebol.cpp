#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	
int cont =0;
int contjogador =0;
int idade =0;
float peso =0;
float soma_peso_time =0;
float soma_peso_total =0;
float soma_idade_time =0;
float soma_idade_total =0;
float peso_medio_time  =0;
float idade_media_time =0;
float peso_medio_total =0;
float idade_media_total =0;	
	
	
setlocale(LC_ALL, "Portuguese");

do{
	
	soma_peso_time=0;
	soma_idade_time=0;
	contjogador=0;

do{	
printf(" \n");

printf("----------------------------------------------------------\n");
printf("              EXERCICIO 10 -  CAMPEONATO DE FUTEBOL\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


printf("                  CAMPEONATO DE FUTEBOL 2016\n");
printf("                       CPD - Departament\n");

printf("\n\a");
printf("                  Informe a idade do jogador %i:", contjogador+1);
printf("\n\a");

printf("\n                               ");
scanf("%i", &idade );

printf("\n\a");
printf("                  Digite o peso do jogador %i:", contjogador+1);
printf("\n\a");

printf("\n                               ");
scanf("%f", &peso );

soma_peso_time += peso;
soma_idade_time += idade;

contjogador+=1;

system("cls");

}while(contjogador<2);

printf("----------------------------------------------------------\n");
printf("              EXERCICIO 10 -  CAMPEONATO DE FUTEBOL\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


printf("                  CAMPEONATO DE FUTEBOL 2016\n");
printf("                       CPD - Departament\n\n");

peso_medio_time = (soma_peso_time/contjogador);
idade_media_time = (soma_idade_time/contjogador);

printf ("O  peso Medio do time é: %.2f\n\n", peso_medio_time);
printf ("A idade Media do time é: %.2f\n\n ", idade_media_time);

cont+=1; 

soma_peso_total += soma_peso_time;
soma_idade_total += soma_idade_time;


system("pause");
system("cls");

}while (cont<3);

printf("----------------------------------------------------------\n");
printf("              EXERCICIO 10 -  CAMPEONATO DE FUTEBOL\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


printf("                  CAMPEONATO DE FUTEBOL 2016\n");
printf("                       CPD - Departament\n");

peso_medio_total = (soma_peso_total/(cont*contjogador));
idade_media_total = (soma_idade_total/(cont*contjogador));


printf ("O  peso Medio dos participantes é: %.2f\n\n", peso_medio_total);
printf ("A idade Media dos participantes é: %.2f \n\n", idade_media_total);

printf("\n\n\n\n");

return(0);
}




#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>



int main ()


{
float salario = 0;
int nr_filhos =0;
float salario_maior =0;
float soma_salario =0;
int soma_filhos =0;
int contador  =0;
int salario_cem =0;
float porc_salario_cem =0;
float media_salario =0;
float media_filhos =0;

setlocale(LC_ALL, "Portuguese");



while (1>0) {

contador += 1;

printf("-------------------------------------------------------------------\n");
printf("     EXERCICIO 8 - PREFEITURA: FILHOS E SALARIO DA POPULA��O\n");
printf("-------------------------------------------------------------------\n");

printf("\n");
printf("\n");

printf("  A prefeitura esta realizando uma pesquisa entre seus habitantes,\n");
printf("        coletando dados sobre o n�mero de filhos e sal�rio\n");
printf("                   Colabore com esta ideia!\n");

printf("\n");
printf("\n");

printf("                       Digite seu salario: ");

printf("\n");
printf("\n\a");

printf("\n                         ");
scanf("%f", &salario );

if (salario < 0) {

break;

}

printf("\n");
printf("\n");

printf("               Digite o numero de filhos que possui:");

printf("\n");
printf("\n\a");

printf("\n                         ");
scanf("%i", &nr_filhos );

printf("\n");
printf("\n");

soma_salario += salario;

soma_filhos += nr_filhos;


 if (salario > salario_maior) {

salario_maior = salario;



}

if (salario <= 100) {

salario_cem +=1 ;

}

system("cls");
}
system("cls");

printf("--------------------------------------------------------------------");
printf("--------------------------------------------------------------------");

printf("\n");
printf("\n");
printf("\n");


media_salario = soma_salario / contador;

printf("              A m�dia do salario da popula��o �:\n");

printf("                        R$ %.2f",media_salario);

printf("\n");
printf("\n");

media_filhos = soma_filhos / contador ;

printf("              A m�dia de filhos da popula��o �:\n");
printf("                          %.2f\n",media_filhos);

printf("\n");
printf("\n");

printf("                    O maior salario � de \n ");
printf("                        R$ %.2f\n",salario_maior);

printf("\n");
printf("\n");

printf("         O percentual de pessoas com sal�rio at� R$100,00\n ");

porc_salario_cem = ((salario_cem*100)/contador);

printf("                         %.2f%% - %i pessoas\n",porc_salario_cem,salario_cem);

printf("\n");
printf("\n");
     
     return(0);
} 





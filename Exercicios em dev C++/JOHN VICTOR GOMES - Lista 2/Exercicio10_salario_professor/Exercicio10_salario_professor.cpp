#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	
float nr_horas = 0;
float valor_hora = 0;
float INSS = 0;
float salario_bruto = 0;
float salario_liquido = 0;
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 10 - Salario Professor\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o numero de horas trabalhadas:\n");
printf("\n                             ");
scanf("%f" , &nr_horas );
printf("\n\a");
printf("                     Digite o valor das horas trabalhadas em R$:\n");
printf("\n                             ");
scanf("%f" , &valor_hora );
printf("\n\a");
printf("                     Digite o percentual do INSS: \n");
printf("\n                             ");
scanf("%f" , &INSS );

salario_bruto   = (nr_horas*valor_hora);

INSS = (INSS/100);

salario_liquido = (salario_bruto - (salario_bruto*INSS));

      

printf("\n");
printf("\n\a");
printf("                     O valor do salario liquido para o professor será de:\n\n");
printf("                             R$ %.2f", salario_liquido);


return (0);
}




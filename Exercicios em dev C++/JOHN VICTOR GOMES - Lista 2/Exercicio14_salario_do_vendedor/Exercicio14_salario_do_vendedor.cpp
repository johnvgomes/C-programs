#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	

char nome[100] ="";
float salario_fixo =0;
float total_vendas =0;
float percentual =0;
float salario_total =0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 14 - Salario Total do vendedor\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Digite o nome do vendedor\n");
printf("\n                             ");
scanf("%s" , &nome );
printf("\n\a");
printf("               Digite o salario fixo do vendedor\n");
printf("\n                             ");
scanf("%f" , &salario_fixo );
printf("\n\a");
printf("               Digite o total de vendas em R$\n");
printf("\n                             ");
scanf("%f" , &total_vendas );
printf("\n\a");
printf("              Digite o percentual sobre o total de vendas\n");
printf("\n                             ");
scanf("%f" , &percentual );



salario_total = salario_fixo + (total_vendas*(percentual/100));
      

printf("\n");
printf("\n\a");
printf("                    O vendedor %s recebeu R$ %.2f a:\n\n", nome, salario_total);

return (0);
}




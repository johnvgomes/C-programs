#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
#include <ctype.h>



int main ()


{

char nome = 0;
float salario =0;
float percAum =0; 


setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("      EXERCICIO 12 - MULTISOFT, AUMENTO DE SALARIO\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

printf("                 Digite o nome do funcionario");

printf("\n");
printf("\n                          ");

scanf ("%s", &nome);
printf("\n\a");

printf("                 Digite o Salario Atual");

printf("\n");
printf("\n                             ");

scanf("%f", &salario);

 if (salario < 300)  {
             
                percAum = 0.10;
             
             
             
              }else if (salario > 300 && salario <= 600) {
              
              percAum = 0.11;
              
              

              }else if (salario > 600 && salario <= 900) {

              percAum = 0.12;
              

              }else if (salario > 900 && salario <= 1500) {

              percAum = 0.06;
              
              

            }else if (salario > 1500 && salario <= 2000){
              

              percAum = 0.03;
            }else if (salario > 2000){
              

              percAum = 0.00;
          }
                            
              printf("\n");
              printf("\n");
              
              printf(" %s recebia R$ %.2f recebeu %.2f% de aumento", nome, salario, (percAum*100) );
              printf("e seu salario passou para R$ %.2f", salario+(salario*percAum/100));
              

		   
printf("\n");
printf("\n");


return (0);
}




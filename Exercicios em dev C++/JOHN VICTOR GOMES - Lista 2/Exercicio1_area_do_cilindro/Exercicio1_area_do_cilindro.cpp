#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	
float raio=0;
float altura=0;
float area=0;
float pi=3.14;	
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("                Exercicio 1 - Area do Cilindro\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o raio do cilindro:\n");
printf("\n                             ");
scanf("%f" , &raio );
printf("\n\a");
printf("                     Digite a altura do cilindro:\n");
printf("\n                             ");
scanf("%f" , &altura );

area = ( 2 * pi * raio * altura);

printf("\n");
printf("\n\a");
printf("                     A área do cilindro é:\n\n");
printf("                                %.2f", area);


return (0);
}




#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	
float lado=0;
float altura=0;
float area=0;
float base=0;
float pi=3.14;	
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("                Exercicio 2 - Area do Cubo Retangular\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite a altura do cubo:\n");
printf("\n                             ");
scanf("%f" , &altura );
printf("\n\a");
printf("                     Digite o valor do lado do cubo:\n");
printf("\n                             ");
scanf("%f" , &lado );
printf("\n\a");
printf("                     Digite o valor da base do cubo:\n");
printf("\n                             ");
scanf("%f" , &base );

 area = ((altura*lado)+(altura*base)+(lado*base))*2;

printf("\n");
printf("\n\a");
printf("                     A área do cubo retangular é:\n\n");
printf("                                %.2f", area);


return (0);
}




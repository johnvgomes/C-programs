#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>


int main ()


{
	

float qtd_chuva_polegada = 0;
float chuva_mili = 0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 13 - Quantidade chuva\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Digite a quantidade de chuva em polegadas \n");
printf("\n                             ");
scanf("%f" , &qtd_chuva_polegada );


 chuva_mili =  (25.4 * qtd_chuva_polegada );

      

printf("\n");
printf("\n\a");
printf("                    A Quantidade digitada corresponde a:\n\n");
printf("                        %.2f ml", chuva_mili);


return (0);
}




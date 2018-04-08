#include<stdio.h>
#include <locale.h>



int main ()


{
	

int limite = 10;
int tabuada=0;
int cont=0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 2 - Tabuada\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");
printf("              SEJA BEM VINDO A TABUADA DO TIO ZÉ");
printf("\n");
printf("                      (CONTINHA DE VEZES)");
printf("\n\a");
printf(" \n");
printf(" \n");
printf("               Qual a tabuada desejada: \n");
printf("\n                             ");
scanf("%i" , &tabuada );
printf("\n\a");
printf("               Qual o limite de cálculo: \n");
printf("\n                             ");
scanf("%i" , &limite);


while (cont<=limite){

printf("              %i X %i = %i \n", tabuada, cont , (tabuada*cont));
cont++;

}

return (0);
}




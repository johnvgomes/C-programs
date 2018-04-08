#include<stdio.h>
#include <locale.h>



int main ()


{
	
float taxa = 0;  
int nr_dias =0;
float prestacao = 0;
float prestacao_atrasada =0;
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 11 - Prestação em Atraso\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                     Digite o valor normal da prestação:\n");
printf("\n                             ");
scanf("%f" , &prestacao );
printf("\n\a");
printf("                     Digite o numeros de dias de atraso:\n");
printf("\n                             ");
scanf("%d" , &nr_dias );
printf("\n\a");
printf("                     Digite a taxa percentual por dia de atraso: \n");
printf("\n                             ");
scanf("%f" , &taxa );

prestacao_atrasada = (prestacao+(prestacao*(taxa/100)*nr_dias));

      

printf("\n");
printf("\n\a");
printf("                     O valor da prestação em atraso é de:\n\n");
printf("                             R$ %.2f", prestacao_atrasada);


return (0);
}




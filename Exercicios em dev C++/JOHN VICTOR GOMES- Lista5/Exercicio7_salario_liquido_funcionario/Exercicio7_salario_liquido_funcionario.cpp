#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	
float qtd_horas_trab=0;
float salario_bruto=0;
float salario_liquido=0;
float total_geral =0;
float adicional=0;
float IR=0;
float encargos=0;
float geral_total=0;
int contador=0;

	
setlocale(LC_ALL, "Portuguese");

do{
	contador+=1;
	
printf(" \n");

printf("----------------------------------------------------------\n");
printf("              EXERCICIO 7 - SALARIO LIQUIDO\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


printf("           Digite o Salario Bruto do funcionario %i", contador);

printf("\n");
printf("\n\a");

printf("\n                         ");
scanf("%f", &salario_bruto );

if (salario_bruto == 0 ) {

break;	
	
}


printf("   Digite a quantidade de horas trabalhadas do funcionario %i", contador);

printf("\n");
printf("\n\a");

printf("\n                         ");
scanf("%f", &qtd_horas_trab );




if (salario_bruto < 800) {

IR = 0 ;
encargos = 0 ;

}else if (salario_bruto>=80 && salario_bruto<=1600){

IR = (salario_bruto * 0.08);
encargos = (salario_bruto * 0.05);

}else if (salario_bruto > 1600) {

IR = (salario_bruto * 0.15);
encargos = (salario_bruto * 0.07);

}

if (qtd_horas_trab > 160) {

adicional = (salario_bruto/160) * 0.5;
}else{

adicional=0;
}

salario_liquido = ((salario_bruto+adicional)- IR - encargos);

 system("cls");

printf("-----------------------------------------------------------------------------\n");
printf("\n");
printf("                                SALARIO LIQUIDO\n");
printf("\n");
printf("-----------------------------------------------------------------------------\n");

printf("\n");
printf("\n");

printf("                          O Salario Liquido é igual a:\n");

printf("\n");
printf("                                    R$ %.2f \n\n\n", salario_liquido);



total_geral += salario_liquido;
system("pause");

 system("cls");
 

}while (1<2);





system("cls");

printf("-----------------------------------------------------------------------------\n");
printf("\n");
printf("                                      TOTAL GERAL\n");
printf("\n");
printf("-----------------------------------------------------------------------------\n");

printf("\n");
printf("\n");

printf("                      O Total Geral de Salarios Liquidos é igual a:\n");

printf("\n");
printf("                                    R$ %.2f" , total_geral);


printf("\n\n\n\n");

return(0);
}




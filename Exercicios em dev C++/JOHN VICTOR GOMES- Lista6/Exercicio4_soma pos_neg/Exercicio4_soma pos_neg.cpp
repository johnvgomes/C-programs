#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	

int cont =0;
float num =0;
float somapos =0;
float somaneg =0;
float somatotal =0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");


for (;;){
	
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 4 - POSITIVO NEGATIVO\n");
printf("----------------------------------------------------------\n");
printf("\n\n\a");

printf("               Digite um numero :\n");

printf("               Pressione 0 para finalizar\n");

printf("\n                             ");
scanf("%f" , &num );

if (num==0){
	
break;

}else if (num<0) {

somaneg += num;

}else if(num>0) {


somapos += num;


}
somatotal = somapos + somaneg;


}
system("cls");
printf("______________________________________________________________________\n");
printf("                         PARCIAL- SOMA NUMEROS POSITIVOS\n");
printf("______________________________________________________________________\n");
printf("                                    %.2f\n",somapos);
printf("======================================================================\n");





printf("______________________________________________________________________\n");
printf("                         PARCIAL-  SOMA NUMEROS NEGATIVOS\n");
printf("______________________________________________________________________\n");
printf("                                    %.2f\n",somaneg);
printf("======================================================================\n");


printf("______________________________________________________________________\n");
printf("                            SOMA TOTAL DAS PARCIAIS\n");
printf("______________________________________________________________________\n");
printf("                                    %.2f\n",somatotal);
printf("======================================================================\n");

  
return (0);


}



